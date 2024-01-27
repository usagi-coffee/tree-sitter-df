module.exports = grammar({
  name: "df",

  externals: ($) => [$._namedot],
  extras: ($) => [$.comment, /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/],
  word: ($) => $.identifier,
  supertypes: ($) => [$._expression, $._statement],

  rules: {
    source_code: ($) => seq(repeat($._statement), optional($.footer)),

    file_name: ($) => /[A-z-_|0-9|\/]+\.[i]/i,
    comment: ($) => seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),

    identifier: ($) => /[A-z_]{1}[A-z-_|0-9]*/i,
    qualified_name: ($) =>
      seq($.identifier, repeat1(seq(alias($._namedot, "."), $.identifier))),

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
      seq('"', repeat(choice(/[^"\\]+/, /\\./)), '"'),

    single_quoted_string: ($) =>
      seq("'", repeat(choice(/[^'\\]+/, /\\./)), "'"),

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
        $.qualified_name
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
        kw("FROZEN")
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
        seq(kw("POSITION"), $.number_literal),
        seq(kw("MAX-WIDTH"), $.number_literal),
        seq(kw("ORDER"), $.number_literal),
        seq(kw("LABEL"), $._string_literal),
        seq(kw("HELP"), $._string_literal),
        seq(kw("COLUMN-LABEL"), $._string_literal),
        seq(kw("COLUMN"), $._string_literal),
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
        $.qualified_name,
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
      )
  }
});

function kw(keyword) {
  if (keyword.toUpperCase() != keyword) {
    throw new Error(`Expected upper case keyword got ${keyword}`);
  }

  return alias(reserved(createCaseInsensitiveRegex(keyword)), keyword);
}

function reserved(regex) {
  return token(prec(1, new RegExp(regex)));
}

function createCaseInsensitiveRegex(word) {
  return new RegExp(
    word
      .split("")
      .map((letter) => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
      .join("")
  );
}
