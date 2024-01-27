#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 101
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 5

enum {
  sym_identifier = 1,
  anon_sym_SLASH_STAR = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_SLASH = 4,
  sym__terminator = 5,
  aux_sym__block_terminator_token1 = 6,
  anon_sym_DOT = 7,
  sym_null_expression = 8,
  aux_sym_boolean_literal_token1 = 9,
  aux_sym_boolean_literal_token2 = 10,
  aux_sym_boolean_literal_token3 = 11,
  aux_sym_boolean_literal_token4 = 12,
  sym__integer_literal = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_double_quoted_string_token1 = 15,
  aux_sym_double_quoted_string_token2 = 16,
  anon_sym_SQUOTE = 17,
  aux_sym_single_quoted_string_token1 = 18,
  aux_sym_sort_order_token1 = 19,
  aux_sym_sort_order_token2 = 20,
  aux_sym_sort_order_token3 = 21,
  aux_sym_sort_order_token4 = 22,
  aux_sym_primitive_type_token1 = 23,
  aux_sym_primitive_type_token2 = 24,
  aux_sym_primitive_type_token3 = 25,
  aux_sym_primitive_type_token4 = 26,
  aux_sym_primitive_type_token5 = 27,
  aux_sym_primitive_type_token6 = 28,
  aux_sym_primitive_type_token7 = 29,
  aux_sym_primitive_type_token8 = 30,
  aux_sym_primitive_type_token9 = 31,
  aux_sym_primitive_type_token10 = 32,
  aux_sym_primitive_type_token11 = 33,
  aux_sym_primitive_type_token12 = 34,
  aux_sym_primitive_type_token13 = 35,
  aux_sym_primitive_type_token14 = 36,
  aux_sym_primitive_type_token15 = 37,
  aux_sym_primitive_type_token16 = 38,
  aux_sym_primitive_type_token17 = 39,
  aux_sym_sequence_tuning_token1 = 40,
  aux_sym_sequence_tuning_token2 = 41,
  aux_sym_sequence_tuning_token3 = 42,
  aux_sym_sequence_tuning_token4 = 43,
  aux_sym_sequence_tuning_token5 = 44,
  aux_sym_add_sequence_statement_token1 = 45,
  aux_sym_add_sequence_statement_token2 = 46,
  aux_sym_table_tuning_token1 = 47,
  aux_sym_table_tuning_token2 = 48,
  aux_sym_table_tuning_token3 = 49,
  aux_sym_table_tuning_token4 = 50,
  aux_sym_table_tuning_token5 = 51,
  aux_sym_table_tuning_token6 = 52,
  aux_sym_table_tuning_token7 = 53,
  aux_sym_add_table_statement_token1 = 54,
  aux_sym_field_tuning_token1 = 55,
  aux_sym_field_tuning_token2 = 56,
  aux_sym_field_tuning_token3 = 57,
  aux_sym_field_tuning_token4 = 58,
  aux_sym_field_tuning_token5 = 59,
  aux_sym_field_tuning_token6 = 60,
  aux_sym_field_tuning_token7 = 61,
  aux_sym_field_tuning_token8 = 62,
  aux_sym_field_tuning_token9 = 63,
  aux_sym_field_tuning_token10 = 64,
  aux_sym_add_field_statement_token1 = 65,
  aux_sym_add_field_statement_token2 = 66,
  aux_sym_add_field_statement_token3 = 67,
  aux_sym_index_tuning_token1 = 68,
  aux_sym_index_tuning_token2 = 69,
  aux_sym_index_tuning_token3 = 70,
  aux_sym_index_tuning_token4 = 71,
  aux_sym_add_index_statement_token1 = 72,
  aux_sym_add_index_statement_token2 = 73,
  aux_sym_footer_token1 = 74,
  aux_sym_footer_token2 = 75,
  anon_sym_EQ = 76,
  aux_sym_footer_token3 = 77,
  sym__namedot = 78,
  sym_source_code = 79,
  sym_comment = 80,
  sym_qualified_name = 81,
  sym_boolean_literal = 82,
  sym__decimal_literal = 83,
  sym_number_literal = 84,
  sym__string_literal = 85,
  sym_double_quoted_string = 86,
  sym_single_quoted_string = 87,
  sym_sort_order = 88,
  sym_primitive_type = 89,
  sym_sequence_tuning = 90,
  sym_add_sequence_statement = 91,
  sym_table_tuning = 92,
  sym_add_table_statement = 93,
  sym_field_tuning = 94,
  sym_add_field_statement = 95,
  sym_index_tuning = 96,
  sym_add_index_statement = 97,
  sym__expression = 98,
  sym__statement = 99,
  sym_footer = 100,
  aux_sym_source_code_repeat1 = 101,
  aux_sym_qualified_name_repeat1 = 102,
  aux_sym_double_quoted_string_repeat1 = 103,
  aux_sym_single_quoted_string_repeat1 = 104,
  aux_sym_add_sequence_statement_repeat1 = 105,
  aux_sym_add_table_statement_repeat1 = 106,
  aux_sym_add_field_statement_repeat1 = 107,
  aux_sym_add_index_statement_repeat1 = 108,
  aux_sym_footer_repeat1 = 109,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH] = "/",
  [sym__terminator] = "_terminator",
  [aux_sym__block_terminator_token1] = "END",
  [anon_sym_DOT] = ".",
  [sym_null_expression] = "null_expression",
  [aux_sym_boolean_literal_token1] = "TRUE",
  [aux_sym_boolean_literal_token2] = "FALSE",
  [aux_sym_boolean_literal_token3] = "YES",
  [aux_sym_boolean_literal_token4] = "NO",
  [sym__integer_literal] = "_integer_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [aux_sym_double_quoted_string_token2] = "double_quoted_string_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [aux_sym_sort_order_token1] = "ASCENDING",
  [aux_sym_sort_order_token2] = "DESCENDING",
  [aux_sym_sort_order_token3] = "DESC",
  [aux_sym_sort_order_token4] = "ASC",
  [aux_sym_primitive_type_token1] = "LOGICAL",
  [aux_sym_primitive_type_token2] = "INTEGER",
  [aux_sym_primitive_type_token3] = "INT",
  [aux_sym_primitive_type_token4] = "CHARACTER",
  [aux_sym_primitive_type_token5] = "CHAR",
  [aux_sym_primitive_type_token6] = "DECIMAL",
  [aux_sym_primitive_type_token7] = "DATE",
  [aux_sym_primitive_type_token8] = "DATETIME",
  [aux_sym_primitive_type_token9] = "DATETIME-TZ",
  [aux_sym_primitive_type_token10] = "INT64",
  [aux_sym_primitive_type_token11] = "LONGCHAR",
  [aux_sym_primitive_type_token12] = "MEMPTR",
  [aux_sym_primitive_type_token13] = "RAW",
  [aux_sym_primitive_type_token14] = "RECID",
  [aux_sym_primitive_type_token15] = "ROWID",
  [aux_sym_primitive_type_token16] = "HANDLE",
  [aux_sym_primitive_type_token17] = "COM-HANDLE",
  [aux_sym_sequence_tuning_token1] = "INITIAL",
  [aux_sym_sequence_tuning_token2] = "INCREMENT",
  [aux_sym_sequence_tuning_token3] = "CYCLE-ON-LIMIT",
  [aux_sym_sequence_tuning_token4] = "MIN-VAL",
  [aux_sym_sequence_tuning_token5] = "MAX-VAL",
  [aux_sym_add_sequence_statement_token1] = "ADD",
  [aux_sym_add_sequence_statement_token2] = "SEQUENCE",
  [aux_sym_table_tuning_token1] = "AREA",
  [aux_sym_table_tuning_token2] = "DESCRIPTION",
  [aux_sym_table_tuning_token3] = "LABEL",
  [aux_sym_table_tuning_token4] = "DUMP-NAME",
  [aux_sym_table_tuning_token5] = "VALEXP",
  [aux_sym_table_tuning_token6] = "VALMSG",
  [aux_sym_table_tuning_token7] = "FROZEN",
  [aux_sym_add_table_statement_token1] = "TABLE",
  [aux_sym_field_tuning_token1] = "FORMAT",
  [aux_sym_field_tuning_token2] = "DECIMALS",
  [aux_sym_field_tuning_token3] = "POSITION",
  [aux_sym_field_tuning_token4] = "MAX-WIDTH",
  [aux_sym_field_tuning_token5] = "ORDER",
  [aux_sym_field_tuning_token6] = "HELP",
  [aux_sym_field_tuning_token7] = "COLUMN-LABEL",
  [aux_sym_field_tuning_token8] = "COLUMN",
  [aux_sym_field_tuning_token9] = "MANDATORY",
  [aux_sym_field_tuning_token10] = "CASE-SENSITIVE",
  [aux_sym_add_field_statement_token1] = "FIELD",
  [aux_sym_add_field_statement_token2] = "OF",
  [aux_sym_add_field_statement_token3] = "AS",
  [aux_sym_index_tuning_token1] = "UNIQUE",
  [aux_sym_index_tuning_token2] = "PRIMARY",
  [aux_sym_index_tuning_token3] = "INDEX-FIELD",
  [aux_sym_index_tuning_token4] = "ABBREVIATED",
  [aux_sym_add_index_statement_token1] = "INDEX",
  [aux_sym_add_index_statement_token2] = "ON",
  [aux_sym_footer_token1] = "PSC",
  [aux_sym_footer_token2] = "CPSTREAM",
  [anon_sym_EQ] = "=",
  [aux_sym_footer_token3] = "footer_token3",
  [sym__namedot] = ".",
  [sym_source_code] = "source_code",
  [sym_comment] = "comment",
  [sym_qualified_name] = "qualified_name",
  [sym_boolean_literal] = "boolean_literal",
  [sym__decimal_literal] = "_decimal_literal",
  [sym_number_literal] = "number_literal",
  [sym__string_literal] = "_string_literal",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_sort_order] = "sort_order",
  [sym_primitive_type] = "primitive_type",
  [sym_sequence_tuning] = "sequence_tuning",
  [sym_add_sequence_statement] = "add_sequence_statement",
  [sym_table_tuning] = "table_tuning",
  [sym_add_table_statement] = "add_table_statement",
  [sym_field_tuning] = "field_tuning",
  [sym_add_field_statement] = "add_field_statement",
  [sym_index_tuning] = "index_tuning",
  [sym_add_index_statement] = "add_index_statement",
  [sym__expression] = "_expression",
  [sym__statement] = "_statement",
  [sym_footer] = "footer",
  [aux_sym_source_code_repeat1] = "source_code_repeat1",
  [aux_sym_qualified_name_repeat1] = "qualified_name_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_add_sequence_statement_repeat1] = "add_sequence_statement_repeat1",
  [aux_sym_add_table_statement_repeat1] = "add_table_statement_repeat1",
  [aux_sym_add_field_statement_repeat1] = "add_field_statement_repeat1",
  [aux_sym_add_index_statement_repeat1] = "add_index_statement_repeat1",
  [aux_sym_footer_repeat1] = "footer_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym__terminator] = sym__terminator,
  [aux_sym__block_terminator_token1] = aux_sym__block_terminator_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_null_expression] = sym_null_expression,
  [aux_sym_boolean_literal_token1] = aux_sym_boolean_literal_token1,
  [aux_sym_boolean_literal_token2] = aux_sym_boolean_literal_token2,
  [aux_sym_boolean_literal_token3] = aux_sym_boolean_literal_token3,
  [aux_sym_boolean_literal_token4] = aux_sym_boolean_literal_token4,
  [sym__integer_literal] = sym__integer_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [aux_sym_double_quoted_string_token2] = aux_sym_double_quoted_string_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [aux_sym_sort_order_token1] = aux_sym_sort_order_token1,
  [aux_sym_sort_order_token2] = aux_sym_sort_order_token2,
  [aux_sym_sort_order_token3] = aux_sym_sort_order_token3,
  [aux_sym_sort_order_token4] = aux_sym_sort_order_token4,
  [aux_sym_primitive_type_token1] = aux_sym_primitive_type_token1,
  [aux_sym_primitive_type_token2] = aux_sym_primitive_type_token2,
  [aux_sym_primitive_type_token3] = aux_sym_primitive_type_token3,
  [aux_sym_primitive_type_token4] = aux_sym_primitive_type_token4,
  [aux_sym_primitive_type_token5] = aux_sym_primitive_type_token5,
  [aux_sym_primitive_type_token6] = aux_sym_primitive_type_token6,
  [aux_sym_primitive_type_token7] = aux_sym_primitive_type_token7,
  [aux_sym_primitive_type_token8] = aux_sym_primitive_type_token8,
  [aux_sym_primitive_type_token9] = aux_sym_primitive_type_token9,
  [aux_sym_primitive_type_token10] = aux_sym_primitive_type_token10,
  [aux_sym_primitive_type_token11] = aux_sym_primitive_type_token11,
  [aux_sym_primitive_type_token12] = aux_sym_primitive_type_token12,
  [aux_sym_primitive_type_token13] = aux_sym_primitive_type_token13,
  [aux_sym_primitive_type_token14] = aux_sym_primitive_type_token14,
  [aux_sym_primitive_type_token15] = aux_sym_primitive_type_token15,
  [aux_sym_primitive_type_token16] = aux_sym_primitive_type_token16,
  [aux_sym_primitive_type_token17] = aux_sym_primitive_type_token17,
  [aux_sym_sequence_tuning_token1] = aux_sym_sequence_tuning_token1,
  [aux_sym_sequence_tuning_token2] = aux_sym_sequence_tuning_token2,
  [aux_sym_sequence_tuning_token3] = aux_sym_sequence_tuning_token3,
  [aux_sym_sequence_tuning_token4] = aux_sym_sequence_tuning_token4,
  [aux_sym_sequence_tuning_token5] = aux_sym_sequence_tuning_token5,
  [aux_sym_add_sequence_statement_token1] = aux_sym_add_sequence_statement_token1,
  [aux_sym_add_sequence_statement_token2] = aux_sym_add_sequence_statement_token2,
  [aux_sym_table_tuning_token1] = aux_sym_table_tuning_token1,
  [aux_sym_table_tuning_token2] = aux_sym_table_tuning_token2,
  [aux_sym_table_tuning_token3] = aux_sym_table_tuning_token3,
  [aux_sym_table_tuning_token4] = aux_sym_table_tuning_token4,
  [aux_sym_table_tuning_token5] = aux_sym_table_tuning_token5,
  [aux_sym_table_tuning_token6] = aux_sym_table_tuning_token6,
  [aux_sym_table_tuning_token7] = aux_sym_table_tuning_token7,
  [aux_sym_add_table_statement_token1] = aux_sym_add_table_statement_token1,
  [aux_sym_field_tuning_token1] = aux_sym_field_tuning_token1,
  [aux_sym_field_tuning_token2] = aux_sym_field_tuning_token2,
  [aux_sym_field_tuning_token3] = aux_sym_field_tuning_token3,
  [aux_sym_field_tuning_token4] = aux_sym_field_tuning_token4,
  [aux_sym_field_tuning_token5] = aux_sym_field_tuning_token5,
  [aux_sym_field_tuning_token6] = aux_sym_field_tuning_token6,
  [aux_sym_field_tuning_token7] = aux_sym_field_tuning_token7,
  [aux_sym_field_tuning_token8] = aux_sym_field_tuning_token8,
  [aux_sym_field_tuning_token9] = aux_sym_field_tuning_token9,
  [aux_sym_field_tuning_token10] = aux_sym_field_tuning_token10,
  [aux_sym_add_field_statement_token1] = aux_sym_add_field_statement_token1,
  [aux_sym_add_field_statement_token2] = aux_sym_add_field_statement_token2,
  [aux_sym_add_field_statement_token3] = aux_sym_add_field_statement_token3,
  [aux_sym_index_tuning_token1] = aux_sym_index_tuning_token1,
  [aux_sym_index_tuning_token2] = aux_sym_index_tuning_token2,
  [aux_sym_index_tuning_token3] = aux_sym_index_tuning_token3,
  [aux_sym_index_tuning_token4] = aux_sym_index_tuning_token4,
  [aux_sym_add_index_statement_token1] = aux_sym_add_index_statement_token1,
  [aux_sym_add_index_statement_token2] = aux_sym_add_index_statement_token2,
  [aux_sym_footer_token1] = aux_sym_footer_token1,
  [aux_sym_footer_token2] = aux_sym_footer_token2,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_footer_token3] = aux_sym_footer_token3,
  [sym__namedot] = anon_sym_DOT,
  [sym_source_code] = sym_source_code,
  [sym_comment] = sym_comment,
  [sym_qualified_name] = sym_qualified_name,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym__decimal_literal] = sym__decimal_literal,
  [sym_number_literal] = sym_number_literal,
  [sym__string_literal] = sym__string_literal,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_sort_order] = sym_sort_order,
  [sym_primitive_type] = sym_primitive_type,
  [sym_sequence_tuning] = sym_sequence_tuning,
  [sym_add_sequence_statement] = sym_add_sequence_statement,
  [sym_table_tuning] = sym_table_tuning,
  [sym_add_table_statement] = sym_add_table_statement,
  [sym_field_tuning] = sym_field_tuning,
  [sym_add_field_statement] = sym_add_field_statement,
  [sym_index_tuning] = sym_index_tuning,
  [sym_add_index_statement] = sym_add_index_statement,
  [sym__expression] = sym__expression,
  [sym__statement] = sym__statement,
  [sym_footer] = sym_footer,
  [aux_sym_source_code_repeat1] = aux_sym_source_code_repeat1,
  [aux_sym_qualified_name_repeat1] = aux_sym_qualified_name_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_add_sequence_statement_repeat1] = aux_sym_add_sequence_statement_repeat1,
  [aux_sym_add_table_statement_repeat1] = aux_sym_add_table_statement_repeat1,
  [aux_sym_add_field_statement_repeat1] = aux_sym_add_field_statement_repeat1,
  [aux_sym_add_index_statement_repeat1] = aux_sym_add_index_statement_repeat1,
  [aux_sym_footer_repeat1] = aux_sym_footer_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__block_terminator_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_null_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_boolean_literal_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_boolean_literal_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_boolean_literal_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_boolean_literal_token4] = {
    .visible = true,
    .named = false,
  },
  [sym__integer_literal] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sort_order_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sort_order_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sort_order_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sort_order_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token9] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token10] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token11] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token12] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token13] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token14] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token15] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token16] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token17] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_tuning_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_tuning_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_tuning_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_tuning_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_tuning_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_add_sequence_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_add_sequence_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_tuning_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_tuning_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_tuning_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_tuning_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_tuning_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_tuning_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_tuning_token7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_add_table_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token9] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token10] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_add_field_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_add_field_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_add_field_statement_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_index_tuning_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_index_tuning_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_index_tuning_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_index_tuning_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_add_index_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_add_index_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_footer_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_footer_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_footer_token3] = {
    .visible = false,
    .named = false,
  },
  [sym__namedot] = {
    .visible = true,
    .named = false,
  },
  [sym_source_code] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__decimal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_sort_order] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_tuning] = {
    .visible = true,
    .named = true,
  },
  [sym_add_sequence_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_table_tuning] = {
    .visible = true,
    .named = true,
  },
  [sym_add_table_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_field_tuning] = {
    .visible = true,
    .named = true,
  },
  [sym_add_field_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_index_tuning] = {
    .visible = true,
    .named = true,
  },
  [sym_add_index_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_footer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_sequence_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_table_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_field_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_index_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_footer_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_field = 1,
  field_index = 2,
  field_sequence = 3,
  field_table = 4,
  field_type = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_field] = "field",
  [field_index] = "index",
  [field_sequence] = "sequence",
  [field_table] = "table",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_sequence, 2},
  [1] =
    {field_table, 2},
  [2] =
    {field_index, 2},
    {field_table, 4},
  [4] =
    {field_field, 2},
    {field_table, 4},
    {field_type, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 6,
  [66] = 4,
  [67] = 3,
  [68] = 68,
  [69] = 69,
  [70] = 5,
  [71] = 71,
  [72] = 2,
  [73] = 73,
  [74] = 71,
  [75] = 75,
  [76] = 69,
  [77] = 77,
  [78] = 75,
  [79] = 79,
  [80] = 77,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(224);
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '=') ADVANCE(480);
      if (lookahead == '?') ADVANCE(422);
      if (lookahead == '\\') ADVANCE(420);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(238);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(276);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(242);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(241);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(239);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(368);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(277);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(356);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(246);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(292);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') ADVANCE(432);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') ADVANCE(432);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '*') ADVANCE(230);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '*') ADVANCE(230);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '=') ADVANCE(480);
      if (lookahead == '?') ADVANCE(422);
      if (lookahead == '\\') ADVANCE(420);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(238);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(276);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(242);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(241);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(239);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(368);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(277);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(356);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(246);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(292);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '?') ADVANCE(422);
      if (lookahead == '\\') ADVANCE(420);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(243);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(379);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '/') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(430);
      if (lookahead != 0) ADVANCE(431);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead == '/') ADVANCE(434);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(435);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(225);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(230);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(230);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(226);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(213);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(214);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(97);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(166);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(191);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(119);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(190);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(187);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(55);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(470);
      END_STATE();
    case 43:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(182);
      END_STATE();
    case 44:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 45:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 46:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(93);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(440);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(183);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 55:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(447);
      END_STATE();
    case 56:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(468);
      END_STATE();
    case 57:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(474);
      END_STATE();
    case 58:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(473);
      END_STATE();
    case 59:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 60:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 63:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 64:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 96:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(469);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(477);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 97:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(115);
      END_STATE();
    case 98:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(454);
      END_STATE();
    case 99:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(438);
      END_STATE();
    case 100:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(437);
      END_STATE();
    case 101:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(460);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 116:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 117:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 120:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(451);
      END_STATE();
    case 121:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(442);
      END_STATE();
    case 122:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(446);
      END_STATE();
    case 123:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 124:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(463);
      END_STATE();
    case 125:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 126:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 127:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 128:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 129:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 130:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 131:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 132:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 133:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 134:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 135:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 136:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(479);
      END_STATE();
    case 137:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 138:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 139:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 140:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 141:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 142:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 143:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 144:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 145:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 154:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 155:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 163:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 164:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 165:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      END_STATE();
    case 166:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 167:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 168:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 169:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 170:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(462);
      END_STATE();
    case 171:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(453);
      END_STATE();
    case 172:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 173:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 174:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(209);
      END_STATE();
    case 175:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(210);
      END_STATE();
    case 176:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 177:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 178:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 179:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 180:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 181:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 185:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(425);
      END_STATE();
    case 186:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(458);
      END_STATE();
    case 187:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      END_STATE();
    case 188:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 189:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 190:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 191:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      END_STATE();
    case 192:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(49);
      END_STATE();
    case 193:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      END_STATE();
    case 194:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      END_STATE();
    case 195:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 196:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      END_STATE();
    case 197:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(443);
      END_STATE();
    case 198:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(444);
      END_STATE();
    case 199:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 200:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 201:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 202:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 203:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 204:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 205:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 207:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 208:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 209:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 210:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 211:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(109);
      END_STATE();
    case 212:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 213:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(38);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(104);
      END_STATE();
    case 214:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 215:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(475);
      END_STATE();
    case 216:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(171);
      END_STATE();
    case 217:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 218:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(472);
      END_STATE();
    case 219:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(466);
      END_STATE();
    case 220:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(84);
      END_STATE();
    case 221:
      if (eof) ADVANCE(224);
      if (lookahead == '\n') SKIP(223)
      END_STATE();
    case 222:
      if (eof) ADVANCE(224);
      if (lookahead == '\n') SKIP(223)
      if (lookahead == '\r') SKIP(221)
      END_STATE();
    case 223:
      if (eof) ADVANCE(224);
      if (lookahead == '"') ADVANCE(428);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '=') ADVANCE(480);
      if (lookahead == '\\') SKIP(222)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(25);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(72);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(28);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(77);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(27);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(26);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(165);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(150);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(31);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(223)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(13);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(431);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(436);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(484);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(13);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(225);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(392);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(332);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(387);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(339);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(382);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(258);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(268);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(311);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(278);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(469);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(477);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(272);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(318);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(253);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'y') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_null_expression);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token1);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token2);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token3);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token4);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(431);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '/') ADVANCE(429);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token2);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(436);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '/') ADVANCE(434);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(436);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_sort_order_token1);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_sort_order_token2);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_sort_order_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_sort_order_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_sort_order_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_sequence_tuning_token1);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_sequence_tuning_token2);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_sequence_tuning_token3);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_sequence_tuning_token4);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_sequence_tuning_token5);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_add_sequence_statement_token1);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_add_sequence_statement_token2);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_table_tuning_token1);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_table_tuning_token2);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_table_tuning_token3);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_table_tuning_token4);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_table_tuning_token5);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_table_tuning_token6);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_table_tuning_token7);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_add_table_statement_token1);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_field_tuning_token1);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_field_tuning_token2);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_field_tuning_token3);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_field_tuning_token4);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_field_tuning_token5);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_field_tuning_token6);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_field_tuning_token7);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_field_tuning_token8);
      if (lookahead == '-') ADVANCE(135);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_field_tuning_token8);
      if (lookahead == '-') ADVANCE(341);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_field_tuning_token9);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_field_tuning_token10);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_add_field_statement_token1);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_add_field_statement_token2);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_add_field_statement_token3);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_index_tuning_token1);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_index_tuning_token2);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_index_tuning_token3);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_index_tuning_token4);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_add_index_statement_token1);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_add_index_statement_token1);
      if (lookahead == '-') ADVANCE(306);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_add_index_statement_token2);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_footer_token1);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_footer_token2);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_footer_token3);
      if (lookahead == '\r') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(484);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_footer_token3);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(484);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_footer_token3);
      if (lookahead == '/') ADVANCE(482);
      if (lookahead == '\\') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(484);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_footer_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(484);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(5);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(6);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(7);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(8);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 2:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(11);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(30);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__block_terminator_token1);
      END_STATE();
    case 28:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_primitive_type_token3);
      if (lookahead == '6') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_primitive_type_token13);
      END_STATE();
    case 34:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_primitive_type_token5);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(49);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_primitive_type_token7);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == '4') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_primitive_type_token10);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_primitive_type_token14);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_primitive_type_token15);
      END_STATE();
    case 60:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_primitive_type_token16);
      END_STATE();
    case 65:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 66:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_primitive_type_token12);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_primitive_type_token6);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      END_STATE();
    case 75:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_primitive_type_token8);
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_primitive_type_token11);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_primitive_type_token4);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 82:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_primitive_type_token17);
      END_STATE();
    case 84:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_primitive_type_token9);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 223},
  [2] = {.lex_state = 223},
  [3] = {.lex_state = 223},
  [4] = {.lex_state = 223},
  [5] = {.lex_state = 223},
  [6] = {.lex_state = 223},
  [7] = {.lex_state = 223, .external_lex_state = 1},
  [8] = {.lex_state = 223},
  [9] = {.lex_state = 223},
  [10] = {.lex_state = 223, .external_lex_state = 1},
  [11] = {.lex_state = 223, .external_lex_state = 1},
  [12] = {.lex_state = 223, .external_lex_state = 1},
  [13] = {.lex_state = 223, .external_lex_state = 1},
  [14] = {.lex_state = 223},
  [15] = {.lex_state = 223},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 223},
  [18] = {.lex_state = 223},
  [19] = {.lex_state = 223},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 223},
  [23] = {.lex_state = 223},
  [24] = {.lex_state = 223},
  [25] = {.lex_state = 223},
  [26] = {.lex_state = 223},
  [27] = {.lex_state = 223},
  [28] = {.lex_state = 223},
  [29] = {.lex_state = 223},
  [30] = {.lex_state = 223},
  [31] = {.lex_state = 223},
  [32] = {.lex_state = 223},
  [33] = {.lex_state = 223},
  [34] = {.lex_state = 223},
  [35] = {.lex_state = 223},
  [36] = {.lex_state = 223},
  [37] = {.lex_state = 223},
  [38] = {.lex_state = 223},
  [39] = {.lex_state = 223},
  [40] = {.lex_state = 223},
  [41] = {.lex_state = 223},
  [42] = {.lex_state = 223},
  [43] = {.lex_state = 223},
  [44] = {.lex_state = 223},
  [45] = {.lex_state = 223},
  [46] = {.lex_state = 223},
  [47] = {.lex_state = 223},
  [48] = {.lex_state = 223},
  [49] = {.lex_state = 223},
  [50] = {.lex_state = 223},
  [51] = {.lex_state = 223},
  [52] = {.lex_state = 223},
  [53] = {.lex_state = 223},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 223},
  [56] = {.lex_state = 223},
  [57] = {.lex_state = 223},
  [58] = {.lex_state = 223},
  [59] = {.lex_state = 223},
  [60] = {.lex_state = 223},
  [61] = {.lex_state = 223},
  [62] = {.lex_state = 223},
  [63] = {.lex_state = 223},
  [64] = {.lex_state = 223},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 23},
  [67] = {.lex_state = 23},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 223},
  [82] = {.lex_state = 223},
  [83] = {.lex_state = 223},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 223},
  [87] = {.lex_state = 223, .external_lex_state = 1},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 223},
  [90] = {.lex_state = 223},
  [91] = {.lex_state = 223},
  [92] = {.lex_state = 223},
  [93] = {.lex_state = 223},
  [94] = {.lex_state = 223},
  [95] = {.lex_state = 483},
  [96] = {.lex_state = 223},
  [97] = {.lex_state = 223},
  [98] = {.lex_state = 22},
  [99] = {.lex_state = 223},
  [100] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__namedot = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__namedot] = sym__namedot,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__namedot] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__terminator] = ACTIONS(1),
    [aux_sym__block_terminator_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_null_expression] = ACTIONS(1),
    [aux_sym_boolean_literal_token1] = ACTIONS(1),
    [aux_sym_boolean_literal_token2] = ACTIONS(1),
    [aux_sym_boolean_literal_token3] = ACTIONS(1),
    [aux_sym_boolean_literal_token4] = ACTIONS(1),
    [sym__integer_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_sort_order_token2] = ACTIONS(1),
    [aux_sym_sort_order_token3] = ACTIONS(1),
    [aux_sym_primitive_type_token1] = ACTIONS(1),
    [aux_sym_primitive_type_token2] = ACTIONS(1),
    [aux_sym_primitive_type_token3] = ACTIONS(1),
    [aux_sym_primitive_type_token4] = ACTIONS(1),
    [aux_sym_primitive_type_token5] = ACTIONS(1),
    [aux_sym_primitive_type_token6] = ACTIONS(1),
    [aux_sym_primitive_type_token7] = ACTIONS(1),
    [aux_sym_primitive_type_token8] = ACTIONS(1),
    [aux_sym_primitive_type_token9] = ACTIONS(1),
    [aux_sym_primitive_type_token10] = ACTIONS(1),
    [aux_sym_primitive_type_token11] = ACTIONS(1),
    [aux_sym_primitive_type_token12] = ACTIONS(1),
    [aux_sym_primitive_type_token13] = ACTIONS(1),
    [aux_sym_primitive_type_token14] = ACTIONS(1),
    [aux_sym_primitive_type_token15] = ACTIONS(1),
    [aux_sym_primitive_type_token16] = ACTIONS(1),
    [aux_sym_primitive_type_token17] = ACTIONS(1),
    [aux_sym_sequence_tuning_token1] = ACTIONS(1),
    [aux_sym_sequence_tuning_token2] = ACTIONS(1),
    [aux_sym_sequence_tuning_token3] = ACTIONS(1),
    [aux_sym_sequence_tuning_token4] = ACTIONS(1),
    [aux_sym_sequence_tuning_token5] = ACTIONS(1),
    [aux_sym_add_sequence_statement_token1] = ACTIONS(1),
    [aux_sym_add_sequence_statement_token2] = ACTIONS(1),
    [aux_sym_table_tuning_token1] = ACTIONS(1),
    [aux_sym_table_tuning_token2] = ACTIONS(1),
    [aux_sym_table_tuning_token3] = ACTIONS(1),
    [aux_sym_table_tuning_token4] = ACTIONS(1),
    [aux_sym_table_tuning_token5] = ACTIONS(1),
    [aux_sym_table_tuning_token6] = ACTIONS(1),
    [aux_sym_table_tuning_token7] = ACTIONS(1),
    [aux_sym_add_table_statement_token1] = ACTIONS(1),
    [aux_sym_field_tuning_token1] = ACTIONS(1),
    [aux_sym_field_tuning_token2] = ACTIONS(1),
    [aux_sym_field_tuning_token3] = ACTIONS(1),
    [aux_sym_field_tuning_token4] = ACTIONS(1),
    [aux_sym_field_tuning_token5] = ACTIONS(1),
    [aux_sym_field_tuning_token6] = ACTIONS(1),
    [aux_sym_field_tuning_token7] = ACTIONS(1),
    [aux_sym_field_tuning_token8] = ACTIONS(1),
    [aux_sym_field_tuning_token9] = ACTIONS(1),
    [aux_sym_field_tuning_token10] = ACTIONS(1),
    [aux_sym_add_field_statement_token1] = ACTIONS(1),
    [aux_sym_add_field_statement_token2] = ACTIONS(1),
    [aux_sym_add_field_statement_token3] = ACTIONS(1),
    [aux_sym_index_tuning_token1] = ACTIONS(1),
    [aux_sym_index_tuning_token2] = ACTIONS(1),
    [aux_sym_index_tuning_token3] = ACTIONS(1),
    [aux_sym_index_tuning_token4] = ACTIONS(1),
    [aux_sym_add_index_statement_token1] = ACTIONS(1),
    [aux_sym_add_index_statement_token2] = ACTIONS(1),
    [aux_sym_footer_token1] = ACTIONS(1),
    [aux_sym_footer_token2] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__namedot] = ACTIONS(1),
  },
  [1] = {
    [sym_source_code] = STATE(93),
    [sym_comment] = STATE(1),
    [sym_add_sequence_statement] = STATE(83),
    [sym_add_table_statement] = STATE(83),
    [sym_add_field_statement] = STATE(83),
    [sym_add_index_statement] = STATE(83),
    [sym__statement] = STATE(81),
    [sym_footer] = STATE(92),
    [aux_sym_source_code_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [aux_sym_add_sequence_statement_token1] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_field_tuning_token8,
    STATE(2), 1,
      sym_comment,
    ACTIONS(13), 30,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token4,
      aux_sym_table_tuning_token5,
      aux_sym_table_tuning_token6,
      aux_sym_table_tuning_token7,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
      aux_sym_add_field_statement_token2,
      aux_sym_add_field_statement_token3,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
      aux_sym_add_index_statement_token2,
  [42] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_field_tuning_token8,
    STATE(3), 1,
      sym_comment,
    ACTIONS(17), 30,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token4,
      aux_sym_table_tuning_token5,
      aux_sym_table_tuning_token6,
      aux_sym_table_tuning_token7,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
      aux_sym_add_field_statement_token2,
      aux_sym_add_field_statement_token3,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
      aux_sym_add_index_statement_token2,
  [84] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      aux_sym_field_tuning_token8,
    STATE(4), 1,
      sym_comment,
    ACTIONS(21), 30,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token4,
      aux_sym_table_tuning_token5,
      aux_sym_table_tuning_token6,
      aux_sym_table_tuning_token7,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
      aux_sym_add_field_statement_token2,
      aux_sym_add_field_statement_token3,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
      aux_sym_add_index_statement_token2,
  [126] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      aux_sym_field_tuning_token8,
    STATE(5), 1,
      sym_comment,
    ACTIONS(25), 30,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token4,
      aux_sym_table_tuning_token5,
      aux_sym_table_tuning_token6,
      aux_sym_table_tuning_token7,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
      aux_sym_add_field_statement_token2,
      aux_sym_add_field_statement_token3,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
      aux_sym_add_index_statement_token2,
  [168] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(31), 1,
      aux_sym_field_tuning_token8,
    STATE(6), 1,
      sym_comment,
    ACTIONS(29), 30,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token4,
      aux_sym_table_tuning_token5,
      aux_sym_table_tuning_token6,
      aux_sym_table_tuning_token7,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
      aux_sym_add_field_statement_token2,
      aux_sym_add_field_statement_token3,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
      aux_sym_add_index_statement_token2,
  [210] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      aux_sym_field_tuning_token8,
    ACTIONS(37), 1,
      sym__namedot,
    STATE(7), 1,
      sym_comment,
    ACTIONS(33), 22,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym__integer_literal,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
      aux_sym_footer_token1,
      aux_sym_footer_token2,
  [247] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      aux_sym_field_tuning_token8,
    STATE(8), 1,
      sym_comment,
    ACTIONS(33), 22,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym__integer_literal,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
      aux_sym_footer_token1,
      aux_sym_footer_token2,
  [281] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(41), 1,
      aux_sym_field_tuning_token8,
    STATE(9), 1,
      sym_comment,
    ACTIONS(39), 22,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym__integer_literal,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
      aux_sym_footer_token1,
      aux_sym_footer_token2,
  [315] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      aux_sym_field_tuning_token8,
    ACTIONS(47), 1,
      sym__namedot,
    STATE(10), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(43), 19,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
  [352] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      aux_sym_field_tuning_token8,
    ACTIONS(53), 1,
      sym__namedot,
    STATE(11), 2,
      sym_comment,
      aux_sym_qualified_name_repeat1,
    ACTIONS(49), 19,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
  [387] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(47), 1,
      sym__namedot,
    ACTIONS(58), 1,
      aux_sym_field_tuning_token8,
    STATE(10), 1,
      aux_sym_qualified_name_repeat1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(56), 19,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
  [424] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      aux_sym_field_tuning_token8,
    STATE(13), 1,
      sym_comment,
    ACTIONS(49), 20,
      sym__namedot,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
  [456] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(58), 1,
      aux_sym_field_tuning_token8,
    STATE(14), 1,
      sym_comment,
    ACTIONS(56), 19,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
  [487] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(62), 1,
      aux_sym_field_tuning_token8,
    STATE(15), 1,
      sym_comment,
    ACTIONS(60), 19,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
  [518] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(16), 1,
      sym_comment,
    STATE(18), 1,
      sym_primitive_type,
    STATE(24), 1,
      sym_qualified_name,
    ACTIONS(66), 17,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      aux_sym_primitive_type_token3,
      aux_sym_primitive_type_token4,
      aux_sym_primitive_type_token5,
      aux_sym_primitive_type_token6,
      aux_sym_primitive_type_token7,
      aux_sym_primitive_type_token8,
      aux_sym_primitive_type_token9,
      aux_sym_primitive_type_token10,
      aux_sym_primitive_type_token11,
      aux_sym_primitive_type_token12,
      aux_sym_primitive_type_token13,
      aux_sym_primitive_type_token14,
      aux_sym_primitive_type_token15,
      aux_sym_primitive_type_token16,
      aux_sym_primitive_type_token17,
  [553] = 10,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(70), 1,
      aux_sym_sequence_tuning_token1,
    ACTIONS(76), 1,
      aux_sym_field_tuning_token8,
    STATE(17), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_add_field_statement_repeat1,
    STATE(22), 1,
      sym_field_tuning,
    ACTIONS(78), 2,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(74), 4,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
    ACTIONS(72), 5,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
  [594] = 10,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(70), 1,
      aux_sym_sequence_tuning_token1,
    ACTIONS(76), 1,
      aux_sym_field_tuning_token8,
    STATE(17), 1,
      aux_sym_add_field_statement_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(22), 1,
      sym_field_tuning,
    ACTIONS(78), 2,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(74), 4,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
    ACTIONS(72), 5,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
  [635] = 9,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(84), 1,
      aux_sym_sequence_tuning_token1,
    ACTIONS(93), 1,
      aux_sym_field_tuning_token8,
    STATE(22), 1,
      sym_field_tuning,
    ACTIONS(96), 2,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
    STATE(19), 2,
      sym_comment,
      aux_sym_add_field_statement_repeat1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(90), 4,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
    ACTIONS(87), 5,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
  [674] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_null_expression,
    ACTIONS(105), 1,
      sym__integer_literal,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym__decimal_literal,
    STATE(20), 1,
      sym_comment,
    STATE(25), 1,
      sym__expression,
    STATE(2), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(103), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(14), 4,
      sym_qualified_name,
      sym_boolean_literal,
      sym_number_literal,
      sym__string_literal,
  [718] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_null_expression,
    ACTIONS(105), 1,
      sym__integer_literal,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym__decimal_literal,
    STATE(21), 1,
      sym_comment,
    STATE(43), 1,
      sym__expression,
    STATE(2), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(103), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(14), 4,
      sym_qualified_name,
      sym_boolean_literal,
      sym_number_literal,
      sym__string_literal,
  [762] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(113), 1,
      aux_sym_field_tuning_token8,
    STATE(22), 1,
      sym_comment,
    ACTIONS(111), 15,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
  [789] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(117), 1,
      aux_sym_field_tuning_token8,
    STATE(23), 1,
      sym_comment,
    ACTIONS(115), 15,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
  [816] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      aux_sym_field_tuning_token8,
    STATE(24), 1,
      sym_comment,
    ACTIONS(119), 15,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
  [843] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(125), 1,
      aux_sym_field_tuning_token8,
    STATE(25), 1,
      sym_comment,
    ACTIONS(123), 15,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token9,
      aux_sym_field_tuning_token10,
  [870] = 7,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(131), 1,
      aux_sym_table_tuning_token7,
    STATE(26), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_add_table_statement_repeat1,
    STATE(33), 1,
      sym_table_tuning,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(129), 6,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token4,
      aux_sym_table_tuning_token5,
      aux_sym_table_tuning_token6,
  [899] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      aux_sym_table_tuning_token7,
    STATE(33), 1,
      sym_table_tuning,
    STATE(27), 2,
      sym_comment,
      aux_sym_add_table_statement_repeat1,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(135), 6,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token4,
      aux_sym_table_tuning_token5,
      aux_sym_table_tuning_token6,
  [926] = 7,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(131), 1,
      aux_sym_table_tuning_token7,
    STATE(26), 1,
      aux_sym_add_table_statement_repeat1,
    STATE(28), 1,
      sym_comment,
    STATE(33), 1,
      sym_table_tuning,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(129), 6,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token4,
      aux_sym_table_tuning_token5,
      aux_sym_table_tuning_token6,
  [955] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(143), 10,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token4,
      aux_sym_table_tuning_token5,
      aux_sym_table_tuning_token6,
      aux_sym_table_tuning_token7,
  [974] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(145), 10,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token4,
      aux_sym_table_tuning_token5,
      aux_sym_table_tuning_token6,
      aux_sym_table_tuning_token7,
  [993] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      aux_sym_sequence_tuning_token1,
    ACTIONS(153), 1,
      aux_sym_sequence_tuning_token3,
    STATE(31), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_add_sequence_statement_repeat1,
    STATE(45), 1,
      sym_sequence_tuning,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(151), 3,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
  [1022] = 7,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 1,
      aux_sym_sequence_tuning_token1,
    ACTIONS(163), 1,
      aux_sym_sequence_tuning_token3,
    STATE(45), 1,
      sym_sequence_tuning,
    STATE(32), 2,
      sym_comment,
      aux_sym_add_sequence_statement_repeat1,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(160), 3,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
  [1049] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(166), 10,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token4,
      aux_sym_table_tuning_token5,
      aux_sym_table_tuning_token6,
      aux_sym_table_tuning_token7,
  [1068] = 9,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_source_code_repeat1,
    STATE(81), 1,
      sym__statement,
    STATE(90), 1,
      sym_footer,
    STATE(83), 4,
      sym_add_sequence_statement,
      sym_add_table_statement,
      sym_add_field_statement,
      sym_add_index_statement,
  [1099] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      aux_sym_sequence_tuning_token1,
    ACTIONS(153), 1,
      aux_sym_sequence_tuning_token3,
    STATE(32), 1,
      aux_sym_add_sequence_statement_repeat1,
    STATE(35), 1,
      sym_comment,
    STATE(45), 1,
      sym_sequence_tuning,
    ACTIONS(151), 3,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
    ACTIONS(170), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
  [1128] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      aux_sym_table_tuning_token1,
    ACTIONS(178), 1,
      aux_sym_index_tuning_token3,
    STATE(36), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_add_index_statement_repeat1,
    STATE(47), 1,
      sym_index_tuning,
    ACTIONS(176), 2,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
    ACTIONS(172), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
  [1156] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      aux_sym_table_tuning_token1,
    ACTIONS(178), 1,
      aux_sym_index_tuning_token3,
    STATE(37), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_add_index_statement_repeat1,
    STATE(47), 1,
      sym_index_tuning,
    ACTIONS(176), 2,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
  [1184] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(184), 1,
      aux_sym_add_sequence_statement_token1,
    STATE(81), 1,
      sym__statement,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
    STATE(38), 2,
      sym_comment,
      aux_sym_source_code_repeat1,
    STATE(83), 4,
      sym_add_sequence_statement,
      sym_add_table_statement,
      sym_add_field_statement,
      sym_add_index_statement,
  [1208] = 7,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 1,
      aux_sym_table_tuning_token1,
    ACTIONS(195), 1,
      aux_sym_index_tuning_token3,
    STATE(47), 1,
      sym_index_tuning,
    ACTIONS(192), 2,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
    STATE(39), 2,
      sym_comment,
      aux_sym_add_index_statement_repeat1,
    ACTIONS(187), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
  [1234] = 9,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      sym__integer_literal,
    ACTIONS(204), 1,
      aux_sym_footer_token2,
    STATE(8), 1,
      sym__decimal_literal,
    STATE(40), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_footer_repeat1,
    STATE(60), 1,
      sym_number_literal,
    ACTIONS(200), 2,
      anon_sym_DOT,
      aux_sym_footer_token1,
  [1263] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      aux_sym_index_tuning_token4,
    STATE(41), 1,
      sym_comment,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
  [1282] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      sym__integer_literal,
    ACTIONS(218), 1,
      aux_sym_footer_token2,
    STATE(8), 1,
      sym__decimal_literal,
    STATE(60), 1,
      sym_number_literal,
    ACTIONS(212), 2,
      anon_sym_DOT,
      aux_sym_footer_token1,
    STATE(42), 2,
      sym_comment,
      aux_sym_footer_repeat1,
  [1309] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(221), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
  [1326] = 9,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(202), 1,
      sym__integer_literal,
    ACTIONS(204), 1,
      aux_sym_footer_token2,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym__decimal_literal,
    STATE(42), 1,
      aux_sym_footer_repeat1,
    STATE(44), 1,
      sym_comment,
    STATE(60), 1,
      sym_number_literal,
    ACTIONS(200), 2,
      anon_sym_DOT,
      aux_sym_footer_token1,
  [1355] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
  [1372] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(227), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
      aux_sym_index_tuning_token4,
  [1389] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(229), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
  [1405] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
      sym_comment,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
  [1421] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
      sym_comment,
    ACTIONS(233), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
  [1437] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
  [1453] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym_comment,
    STATE(99), 1,
      sym__string_literal,
    STATE(2), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1473] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    STATE(31), 1,
      sym__string_literal,
    STATE(52), 1,
      sym_comment,
    STATE(2), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1493] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym__string_literal,
    STATE(53), 1,
      sym_comment,
    STATE(2), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1513] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_sort_order,
    STATE(54), 1,
      sym_comment,
    ACTIONS(241), 2,
      aux_sym_sort_order_token1,
      aux_sym_sort_order_token2,
    ACTIONS(243), 2,
      aux_sym_sort_order_token3,
      aux_sym_sort_order_token4,
  [1531] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    STATE(55), 1,
      sym_comment,
    STATE(96), 1,
      sym__string_literal,
    STATE(2), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1551] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      sym__string_literal,
    STATE(56), 1,
      sym_comment,
    STATE(2), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1571] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_boolean_literal,
    STATE(57), 1,
      sym_comment,
    ACTIONS(245), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
  [1587] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      sym_comment,
    STATE(97), 1,
      sym__string_literal,
    STATE(2), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1607] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym__string_literal,
    STATE(59), 1,
      sym_comment,
    STATE(2), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1627] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 1,
      sym_comment,
    ACTIONS(247), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym__integer_literal,
      aux_sym_footer_token1,
      aux_sym_footer_token2,
  [1641] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    STATE(36), 1,
      sym__string_literal,
    STATE(61), 1,
      sym_comment,
    STATE(2), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1661] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      sym__string_literal,
    STATE(62), 1,
      sym_comment,
    STATE(72), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1681] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    STATE(49), 1,
      sym__string_literal,
    STATE(63), 1,
      sym_comment,
    STATE(2), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1701] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(64), 1,
      sym_comment,
    ACTIONS(253), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym__integer_literal,
      aux_sym_footer_token1,
      aux_sym_footer_token2,
  [1715] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(65), 1,
      sym_comment,
    ACTIONS(29), 2,
      aux_sym_sort_order_token1,
      aux_sym_sort_order_token2,
    ACTIONS(31), 2,
      aux_sym_sort_order_token3,
      aux_sym_sort_order_token4,
  [1730] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(66), 1,
      sym_comment,
    ACTIONS(21), 2,
      aux_sym_sort_order_token1,
      aux_sym_sort_order_token2,
    ACTIONS(23), 2,
      aux_sym_sort_order_token3,
      aux_sym_sort_order_token4,
  [1745] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(67), 1,
      sym_comment,
    ACTIONS(17), 2,
      aux_sym_sort_order_token1,
      aux_sym_sort_order_token2,
    ACTIONS(19), 2,
      aux_sym_sort_order_token3,
      aux_sym_sort_order_token4,
  [1760] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 2,
      aux_sym_double_quoted_string_token1,
      aux_sym_double_quoted_string_token2,
    STATE(68), 2,
      sym_comment,
      aux_sym_double_quoted_string_repeat1,
  [1775] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    STATE(69), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(260), 2,
      aux_sym_double_quoted_string_token2,
      aux_sym_single_quoted_string_token1,
  [1792] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(70), 1,
      sym_comment,
    ACTIONS(25), 2,
      aux_sym_sort_order_token1,
      aux_sym_sort_order_token2,
    ACTIONS(27), 2,
      aux_sym_sort_order_token3,
      aux_sym_sort_order_token4,
  [1807] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(266), 2,
      aux_sym_double_quoted_string_token1,
      aux_sym_double_quoted_string_token2,
  [1824] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(72), 1,
      sym_comment,
    ACTIONS(13), 2,
      aux_sym_sort_order_token1,
      aux_sym_sort_order_token2,
    ACTIONS(15), 2,
      aux_sym_sort_order_token3,
      aux_sym_sort_order_token4,
  [1839] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(268), 1,
      aux_sym_add_sequence_statement_token2,
    ACTIONS(270), 1,
      aux_sym_add_table_statement_token1,
    ACTIONS(272), 1,
      aux_sym_add_field_statement_token1,
    ACTIONS(274), 1,
      aux_sym_add_index_statement_token1,
    STATE(73), 1,
      sym_comment,
  [1858] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(266), 2,
      aux_sym_double_quoted_string_token1,
      aux_sym_double_quoted_string_token2,
  [1875] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(75), 1,
      sym_comment,
    ACTIONS(266), 2,
      aux_sym_double_quoted_string_token1,
      aux_sym_double_quoted_string_token2,
  [1892] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(280), 1,
      anon_sym_SQUOTE,
    STATE(76), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(260), 2,
      aux_sym_double_quoted_string_token2,
      aux_sym_single_quoted_string_token1,
  [1909] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(282), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(260), 2,
      aux_sym_double_quoted_string_token2,
      aux_sym_single_quoted_string_token1,
  [1926] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(78), 1,
      sym_comment,
    ACTIONS(266), 2,
      aux_sym_double_quoted_string_token1,
      aux_sym_double_quoted_string_token2,
  [1943] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
    ACTIONS(286), 2,
      aux_sym_double_quoted_string_token2,
      aux_sym_single_quoted_string_token1,
    STATE(79), 2,
      sym_comment,
      aux_sym_single_quoted_string_repeat1,
  [1958] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(291), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(80), 1,
      sym_comment,
    ACTIONS(260), 2,
      aux_sym_double_quoted_string_token2,
      aux_sym_single_quoted_string_token1,
  [1975] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 1,
      sym_comment,
    ACTIONS(293), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
  [1987] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(202), 1,
      sym__integer_literal,
    STATE(8), 1,
      sym__decimal_literal,
    STATE(25), 1,
      sym_number_literal,
    STATE(82), 1,
      sym_comment,
  [2003] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 1,
      sym_comment,
    ACTIONS(295), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
  [2015] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 1,
      sym_comment,
    ACTIONS(297), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      aux_sym_double_quoted_string_token2,
  [2027] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
      sym_comment,
    ACTIONS(299), 3,
      aux_sym_double_quoted_string_token2,
      anon_sym_SQUOTE,
      aux_sym_single_quoted_string_token1,
  [2039] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(202), 1,
      sym__integer_literal,
    STATE(8), 1,
      sym__decimal_literal,
    STATE(43), 1,
      sym_number_literal,
    STATE(86), 1,
      sym_comment,
  [2055] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(47), 1,
      sym__namedot,
    STATE(10), 1,
      aux_sym_qualified_name_repeat1,
    STATE(87), 1,
      sym_comment,
  [2068] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(301), 1,
      aux_sym_comment_token1,
    STATE(88), 1,
      sym_comment,
  [2078] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(303), 1,
      anon_sym_EQ,
    STATE(89), 1,
      sym_comment,
  [2088] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    STATE(90), 1,
      sym_comment,
  [2098] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(307), 1,
      anon_sym_SLASH,
    STATE(91), 1,
      sym_comment,
  [2108] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    STATE(92), 1,
      sym_comment,
  [2118] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      sym_comment,
  [2128] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      sym__integer_literal,
    STATE(94), 1,
      sym_comment,
  [2138] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(313), 1,
      aux_sym_footer_token3,
    STATE(95), 1,
      sym_comment,
  [2148] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(315), 1,
      aux_sym_add_field_statement_token2,
    STATE(96), 1,
      sym_comment,
  [2158] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(317), 1,
      aux_sym_add_index_statement_token2,
    STATE(97), 1,
      sym_comment,
  [2168] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(319), 1,
      sym_identifier,
    STATE(98), 1,
      sym_comment,
  [2178] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(321), 1,
      aux_sym_add_field_statement_token3,
    STATE(99), 1,
      sym_comment,
  [2188] = 1,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 247,
  [SMALL_STATE(9)] = 281,
  [SMALL_STATE(10)] = 315,
  [SMALL_STATE(11)] = 352,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 424,
  [SMALL_STATE(14)] = 456,
  [SMALL_STATE(15)] = 487,
  [SMALL_STATE(16)] = 518,
  [SMALL_STATE(17)] = 553,
  [SMALL_STATE(18)] = 594,
  [SMALL_STATE(19)] = 635,
  [SMALL_STATE(20)] = 674,
  [SMALL_STATE(21)] = 718,
  [SMALL_STATE(22)] = 762,
  [SMALL_STATE(23)] = 789,
  [SMALL_STATE(24)] = 816,
  [SMALL_STATE(25)] = 843,
  [SMALL_STATE(26)] = 870,
  [SMALL_STATE(27)] = 899,
  [SMALL_STATE(28)] = 926,
  [SMALL_STATE(29)] = 955,
  [SMALL_STATE(30)] = 974,
  [SMALL_STATE(31)] = 993,
  [SMALL_STATE(32)] = 1022,
  [SMALL_STATE(33)] = 1049,
  [SMALL_STATE(34)] = 1068,
  [SMALL_STATE(35)] = 1099,
  [SMALL_STATE(36)] = 1128,
  [SMALL_STATE(37)] = 1156,
  [SMALL_STATE(38)] = 1184,
  [SMALL_STATE(39)] = 1208,
  [SMALL_STATE(40)] = 1234,
  [SMALL_STATE(41)] = 1263,
  [SMALL_STATE(42)] = 1282,
  [SMALL_STATE(43)] = 1309,
  [SMALL_STATE(44)] = 1326,
  [SMALL_STATE(45)] = 1355,
  [SMALL_STATE(46)] = 1372,
  [SMALL_STATE(47)] = 1389,
  [SMALL_STATE(48)] = 1405,
  [SMALL_STATE(49)] = 1421,
  [SMALL_STATE(50)] = 1437,
  [SMALL_STATE(51)] = 1453,
  [SMALL_STATE(52)] = 1473,
  [SMALL_STATE(53)] = 1493,
  [SMALL_STATE(54)] = 1513,
  [SMALL_STATE(55)] = 1531,
  [SMALL_STATE(56)] = 1551,
  [SMALL_STATE(57)] = 1571,
  [SMALL_STATE(58)] = 1587,
  [SMALL_STATE(59)] = 1607,
  [SMALL_STATE(60)] = 1627,
  [SMALL_STATE(61)] = 1641,
  [SMALL_STATE(62)] = 1661,
  [SMALL_STATE(63)] = 1681,
  [SMALL_STATE(64)] = 1701,
  [SMALL_STATE(65)] = 1715,
  [SMALL_STATE(66)] = 1730,
  [SMALL_STATE(67)] = 1745,
  [SMALL_STATE(68)] = 1760,
  [SMALL_STATE(69)] = 1775,
  [SMALL_STATE(70)] = 1792,
  [SMALL_STATE(71)] = 1807,
  [SMALL_STATE(72)] = 1824,
  [SMALL_STATE(73)] = 1839,
  [SMALL_STATE(74)] = 1858,
  [SMALL_STATE(75)] = 1875,
  [SMALL_STATE(76)] = 1892,
  [SMALL_STATE(77)] = 1909,
  [SMALL_STATE(78)] = 1926,
  [SMALL_STATE(79)] = 1943,
  [SMALL_STATE(80)] = 1958,
  [SMALL_STATE(81)] = 1975,
  [SMALL_STATE(82)] = 1987,
  [SMALL_STATE(83)] = 2003,
  [SMALL_STATE(84)] = 2015,
  [SMALL_STATE(85)] = 2027,
  [SMALL_STATE(86)] = 2039,
  [SMALL_STATE(87)] = 2055,
  [SMALL_STATE(88)] = 2068,
  [SMALL_STATE(89)] = 2078,
  [SMALL_STATE(90)] = 2088,
  [SMALL_STATE(91)] = 2098,
  [SMALL_STATE(92)] = 2108,
  [SMALL_STATE(93)] = 2118,
  [SMALL_STATE(94)] = 2128,
  [SMALL_STATE(95)] = 2138,
  [SMALL_STATE(96)] = 2148,
  [SMALL_STATE(97)] = 2158,
  [SMALL_STATE(98)] = 2168,
  [SMALL_STATE(99)] = 2178,
  [SMALL_STATE(100)] = 2188,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_code, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_literal, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(98),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_field_statement, 8, .production_id = 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_field_statement, 7, .production_id = 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_field_statement_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_field_statement_repeat1, 2), SHIFT_REPEAT(20),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_field_statement_repeat1, 2), SHIFT_REPEAT(59),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_field_statement_repeat1, 2), SHIFT_REPEAT(82),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_field_statement_repeat1, 2), SHIFT_REPEAT(59),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_field_statement_repeat1, 2), SHIFT_REPEAT(23),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_field_statement_repeat1, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_field_statement_repeat1, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_tuning, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_tuning, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_tuning, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_tuning, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_table_statement, 4, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_table_statement_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_table_statement_repeat1, 2), SHIFT_REPEAT(56),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_table_statement_repeat1, 2), SHIFT_REPEAT(30),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_table_statement, 3, .production_id = 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_tuning, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_tuning, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_sequence_statement, 3, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_sequence_statement_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_sequence_statement_repeat1, 2), SHIFT_REPEAT(21),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_sequence_statement_repeat1, 2), SHIFT_REPEAT(86),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_sequence_statement_repeat1, 2), SHIFT_REPEAT(57),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_table_statement_repeat1, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_code, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_sequence_statement, 4, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_index_statement, 5, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_index_statement, 6, .production_id = 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_code_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(73),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_index_statement_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_index_statement_repeat1, 2), SHIFT_REPEAT(63),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_index_statement_repeat1, 2), SHIFT_REPEAT(48),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_index_statement_repeat1, 2), SHIFT_REPEAT(62),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_tuning, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_repeat1, 2), SHIFT_REPEAT(60),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_repeat1, 2), SHIFT_REPEAT(7),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_repeat1, 2), SHIFT_REPEAT(89),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_tuning, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_sequence_statement_repeat1, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_order, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_index_statement_repeat1, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_tuning, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_tuning, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_tuning, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_repeat1, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_repeat1, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(84),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(85),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_code_repeat1, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_code, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [309] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_df_external_scanner_create(void);
void tree_sitter_df_external_scanner_destroy(void *);
bool tree_sitter_df_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_df_external_scanner_serialize(void *, char *);
void tree_sitter_df_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_df(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_df_external_scanner_create,
      tree_sitter_df_external_scanner_destroy,
      tree_sitter_df_external_scanner_scan,
      tree_sitter_df_external_scanner_serialize,
      tree_sitter_df_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
