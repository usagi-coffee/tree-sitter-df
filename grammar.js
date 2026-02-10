/**
 * @file Df grammar for tree-sitter
 * @author Kamil Jakubus <kamil.jakubus@usagi.coffee>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

export default grammar({
  name: "df",

  externals: ($) => [$._namedot],
  extras: ($) => [/[\s\f\uFEFF\u2060\u200B]|\\\r?\n/, $.comment],
  word: ($) => $.identifier,
  supertypes: ($) => [$._expression, $._statement],

  rules: {
    source_code: ($) => seq(repeat($._statement), optional($.footer)),

    file_name: ($) => /[A-z-_|0-9|\/]+\.[i]/i,
    comment: ($) => seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),

    identifier: ($) => token(/[_\p{L}][\p{L}\p{N}_\-&]*/i),

    _terminator: ($) => /\s*\./i,
    _block_terminator: ($) => seq(kw("END"), "."),

    null_expression: ($) => /\?/,
    boolean_literal: ($) =>
      choice(kw("TRUE"), kw("FALSE"), kw("YES"), kw("NO")),
    _integer_literal: ($) => /[0-9]+/,
    _decimal_literal: ($) =>
      seq($._integer_literal, alias($._namedot, "."), $._integer_literal),

    number_literal: ($) => choice($._integer_literal, $._decimal_literal),
    _string_literal: ($) =>
      seq(choice($.double_quoted_string, $.single_quoted_string)),

    double_quoted_string: ($) =>
      seq('"', repeat(choice(/[^"\\]+/, /\\./, '""')), '"'),

    single_quoted_string: ($) =>
      seq("'", repeat(choice(/[^'\\]+/, /\\./, '""')), "'"),
    sort_order: ($) =>
      choice(kw("ASCENDING"), kw("DESCENDING"), kw("DESC"), kw("ASC")),

    primitive_type: ($) =>
      choice(
        kw("LOGICAL"),
        kw("INTEGER"),
        kw("INT"),
        kw("CHARACTER"),
        kw("CHAR"),
        kw("DECIMAL"),
        kw("DATE"),
        kw("DATETIME"),
        kw("DATETIME-TZ"),
        kw("INT64"),
        kw("LONGCHAR"),
        kw("MEMPTR"),
        kw("RAW"),
        kw("RECID"),
        kw("ROWID"),
        kw("HANDLE"),
        kw("COM-HANDLE"),
        kw("BLOB"),
        kw("CLOB")
      ),

    /// Statements
    sequence_tuning: ($) =>
      choice(
        seq(kw("INITIAL"), $._expression),
        seq(kw("INCREMENT"), $.number_literal),
        seq(kw("CYCLE-ON-LIMIT"), $.boolean_literal),
        seq(kw("MIN-VAL"), $.number_literal),
        seq(kw("MAX-VAL"), $.number_literal)
      ),
    add_sequence_statement: ($) =>
      seq(
        kw("ADD"),
        kw("SEQUENCE"),
        field("sequence", $._string_literal),
        repeat($.sequence_tuning)
      ),

    table_tuning: ($) =>
      choice(
        seq(kw("AREA"), $._string_literal),
        seq(kw("DESCRIPTION"), $._string_literal),
        seq(kw("LABEL"), $._string_literal),
        seq(kw("DUMP-NAME"), $._string_literal),
        seq(kw("VALEXP"), $._string_literal),
        seq(kw("VALMSG"), $._string_literal),
        kw("FROZEN"),
        seq(
          "TABLE-TRIGGER",
          field("trigger", $._string_literal),
          choice(kw("OVERRIDE"), kw("NO-OVERRIDE")),
          kw("PROCEDURE"),
          field("procedure", $._string_literal),
          kw("CRC"),
          $._string_literal
        )
      ),
    add_table_statement: ($) =>
      seq(
        kw("ADD"),
        kw("TABLE"),
        field("table", $._string_literal),
        repeat($.table_tuning)
      ),

    field_tuning: ($) =>
      choice(
        seq(kw("INITIAL"), $._expression),
        seq(kw("FORMAT"), $._string_literal),
        seq(kw("DESCRIPTION"), $._string_literal),
        seq(kw("DECIMALS"), $.number_literal),
        seq(kw("EXTENT"), $.number_literal),
        seq(kw("POSITION"), $.number_literal),
        seq(kw("MAX-WIDTH"), $.number_literal),
        seq(kw("ORDER"), $.number_literal),
        seq(kw("LABEL"), $._string_literal),
        seq(kw("HELP"), $._string_literal),
        seq(kw("COLUMN-LABEL"), $._string_literal),
        seq(kw("COLUMN"), $._string_literal),
        seq(kw("VALEXP"), $._string_literal),
        seq(kw("VALMSG"), $._string_literal),
        seq(kw("VALMSG-SA"), $._string_literal),
        seq(kw("LOB-AREA"), $._string_literal),
        seq(kw("LOB-BYTES"), $.number_literal),
        seq(kw("LOB-SIZE"), $.number_literal, optional(token.immediate("M"))),
        seq(kw("CLOB-CODEPAGE"), $._string_literal),
        seq(kw("CLOB-COLLATION"), $._string_literal),
        seq(kw("CLOB-TYPE"), $.number_literal),
        kw("MANDATORY"),
        kw("CASE-SENSITIVE")
      ),
    add_field_statement: ($) =>
      seq(
        kw("ADD"),
        kw("FIELD"),
        field("field", $._string_literal),
        kw("OF"),
        field("table", $._string_literal),
        kw("AS"),
        field("type", $.primitive_type),
        repeat($.field_tuning)
      ),

    index_tuning: ($) =>
      choice(
        seq(kw("AREA"), $._string_literal),
        seq(kw("DESCRIPTION"), $._string_literal),
        kw("UNIQUE"),
        kw("PRIMARY"),
        seq(
          kw("INDEX-FIELD"),
          $._string_literal,
          $.sort_order,
          optional(kw("ABBREVIATED"))
        )
      ),
    add_index_statement: ($) =>
      seq(
        kw("ADD"),
        kw("INDEX"),
        field("index", $._string_literal),
        kw("ON"),
        field("table", $._string_literal),
        repeat($.index_tuning)
      ),

    // Supertypes
    _expression: ($) =>
      choice(
        $.identifier,
        $.boolean_literal,
        $._string_literal,
        $.number_literal,
        $.null_expression
      ),

    _statement: ($) =>
      choice(
        $.add_sequence_statement,
        $.add_table_statement,
        $.add_field_statement,
        $.add_index_statement
      ),

    // Extra
    footer: ($) =>
      seq(
        ".",
        repeat(
          choice(
            kw("PSC"),
            seq(kw("CPSTREAM"), "=", /.*/),
            $.number_literal,
            "."
          )
        )
      ),
  },
});

function kw(word, options) {
  const { alias: aliasName = word, offset } = options || {};
  const off = Number.isInteger(offset) ? offset - 1 : -1; // default: require full word

  const esc = (s) => s.replace(/[.*+?^${}()|[\]\\]/g, "\\$&");
  const s = esc(word);

  const buildProgressiveOptional = (rest) => {
    let out = "";
    for (let i = rest.length - 1; i >= 0; i--) {
      out = rest[i] + (out ? `(${out})?` : "");
    }
    return out ? `(${out})?` : "";
  };

  if (off < 0) {
    return alias(token(new RegExp(s, "i")), aliasName);
  }

  const min = Math.min(Math.max(off + 1, 0), s.length); // require up to offset (inclusive)
  const required = s.slice(0, min);
  const rest = s.slice(min);

  const pattern = required + buildProgressiveOptional(rest);
  return alias(token(new RegExp(pattern, "i")), aliasName);
}
