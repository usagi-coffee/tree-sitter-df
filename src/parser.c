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
#define STATE_COUNT 115
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 96
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 6

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
  anon_sym_DQUOTE_DQUOTE = 17,
  anon_sym_SQUOTE = 18,
  aux_sym_single_quoted_string_token1 = 19,
  aux_sym_sort_order_token1 = 20,
  aux_sym_sort_order_token2 = 21,
  aux_sym_sort_order_token3 = 22,
  aux_sym_sort_order_token4 = 23,
  aux_sym_primitive_type_token1 = 24,
  aux_sym_primitive_type_token2 = 25,
  aux_sym_primitive_type_token3 = 26,
  aux_sym_primitive_type_token4 = 27,
  aux_sym_primitive_type_token5 = 28,
  aux_sym_primitive_type_token6 = 29,
  aux_sym_primitive_type_token7 = 30,
  aux_sym_primitive_type_token8 = 31,
  aux_sym_primitive_type_token9 = 32,
  aux_sym_primitive_type_token10 = 33,
  aux_sym_primitive_type_token11 = 34,
  aux_sym_primitive_type_token12 = 35,
  aux_sym_primitive_type_token13 = 36,
  aux_sym_primitive_type_token14 = 37,
  aux_sym_primitive_type_token15 = 38,
  aux_sym_primitive_type_token16 = 39,
  aux_sym_primitive_type_token17 = 40,
  aux_sym_primitive_type_token18 = 41,
  aux_sym_primitive_type_token19 = 42,
  aux_sym_sequence_tuning_token1 = 43,
  aux_sym_sequence_tuning_token2 = 44,
  aux_sym_sequence_tuning_token3 = 45,
  aux_sym_sequence_tuning_token4 = 46,
  aux_sym_sequence_tuning_token5 = 47,
  aux_sym_add_sequence_statement_token1 = 48,
  aux_sym_add_sequence_statement_token2 = 49,
  aux_sym_table_tuning_token1 = 50,
  aux_sym_table_tuning_token2 = 51,
  aux_sym_table_tuning_token3 = 52,
  aux_sym_table_tuning_token4 = 53,
  aux_sym_table_tuning_token5 = 54,
  aux_sym_table_tuning_token6 = 55,
  aux_sym_table_tuning_token7 = 56,
  anon_sym_TABLE_DASHTRIGGER = 57,
  aux_sym_table_tuning_token8 = 58,
  aux_sym_table_tuning_token9 = 59,
  aux_sym_table_tuning_token10 = 60,
  aux_sym_table_tuning_token11 = 61,
  aux_sym_add_table_statement_token1 = 62,
  aux_sym_field_tuning_token1 = 63,
  aux_sym_field_tuning_token2 = 64,
  aux_sym_field_tuning_token3 = 65,
  aux_sym_field_tuning_token4 = 66,
  aux_sym_field_tuning_token5 = 67,
  aux_sym_field_tuning_token6 = 68,
  aux_sym_field_tuning_token7 = 69,
  aux_sym_field_tuning_token8 = 70,
  aux_sym_field_tuning_token9 = 71,
  aux_sym_field_tuning_token10 = 72,
  aux_sym_field_tuning_token11 = 73,
  aux_sym_field_tuning_token12 = 74,
  aux_sym_field_tuning_token13 = 75,
  anon_sym_M = 76,
  aux_sym_field_tuning_token14 = 77,
  aux_sym_field_tuning_token15 = 78,
  aux_sym_field_tuning_token16 = 79,
  aux_sym_field_tuning_token17 = 80,
  aux_sym_field_tuning_token18 = 81,
  aux_sym_add_field_statement_token1 = 82,
  aux_sym_add_field_statement_token2 = 83,
  aux_sym_add_field_statement_token3 = 84,
  aux_sym_index_tuning_token1 = 85,
  aux_sym_index_tuning_token2 = 86,
  aux_sym_index_tuning_token3 = 87,
  aux_sym_index_tuning_token4 = 88,
  aux_sym_add_index_statement_token1 = 89,
  aux_sym_add_index_statement_token2 = 90,
  aux_sym_footer_token1 = 91,
  aux_sym_footer_token2 = 92,
  anon_sym_EQ = 93,
  aux_sym_footer_token3 = 94,
  sym__namedot = 95,
  sym_source_code = 96,
  sym_comment = 97,
  sym_qualified_name = 98,
  sym_boolean_literal = 99,
  sym__decimal_literal = 100,
  sym_number_literal = 101,
  sym__string_literal = 102,
  sym_double_quoted_string = 103,
  sym_single_quoted_string = 104,
  sym_sort_order = 105,
  sym_primitive_type = 106,
  sym_sequence_tuning = 107,
  sym_add_sequence_statement = 108,
  sym_table_tuning = 109,
  sym_add_table_statement = 110,
  sym_field_tuning = 111,
  sym_add_field_statement = 112,
  sym_index_tuning = 113,
  sym_add_index_statement = 114,
  sym__expression = 115,
  sym__statement = 116,
  sym_footer = 117,
  aux_sym_source_code_repeat1 = 118,
  aux_sym_qualified_name_repeat1 = 119,
  aux_sym_double_quoted_string_repeat1 = 120,
  aux_sym_single_quoted_string_repeat1 = 121,
  aux_sym_add_sequence_statement_repeat1 = 122,
  aux_sym_add_table_statement_repeat1 = 123,
  aux_sym_add_field_statement_repeat1 = 124,
  aux_sym_add_index_statement_repeat1 = 125,
  aux_sym_footer_repeat1 = 126,
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
  [anon_sym_DQUOTE_DQUOTE] = "\"\"",
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
  [aux_sym_primitive_type_token18] = "BLOB",
  [aux_sym_primitive_type_token19] = "CLOB",
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
  [anon_sym_TABLE_DASHTRIGGER] = "TABLE-TRIGGER",
  [aux_sym_table_tuning_token8] = "OVERRIDE",
  [aux_sym_table_tuning_token9] = "NO-OVERRIDE",
  [aux_sym_table_tuning_token10] = "PROCEDURE",
  [aux_sym_table_tuning_token11] = "CRC",
  [aux_sym_add_table_statement_token1] = "TABLE",
  [aux_sym_field_tuning_token1] = "FORMAT",
  [aux_sym_field_tuning_token2] = "DECIMALS",
  [aux_sym_field_tuning_token3] = "EXTENT",
  [aux_sym_field_tuning_token4] = "POSITION",
  [aux_sym_field_tuning_token5] = "MAX-WIDTH",
  [aux_sym_field_tuning_token6] = "ORDER",
  [aux_sym_field_tuning_token7] = "HELP",
  [aux_sym_field_tuning_token8] = "COLUMN-LABEL",
  [aux_sym_field_tuning_token9] = "COLUMN",
  [aux_sym_field_tuning_token10] = "VALMSG-SA",
  [aux_sym_field_tuning_token11] = "LOB-AREA",
  [aux_sym_field_tuning_token12] = "LOB-BYTES",
  [aux_sym_field_tuning_token13] = "LOB-SIZE",
  [anon_sym_M] = "M",
  [aux_sym_field_tuning_token14] = "CLOB-CODEPAGE",
  [aux_sym_field_tuning_token15] = "CLOB-COLLATION",
  [aux_sym_field_tuning_token16] = "CLOB-TYPE",
  [aux_sym_field_tuning_token17] = "MANDATORY",
  [aux_sym_field_tuning_token18] = "CASE-SENSITIVE",
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
  [anon_sym_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE,
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
  [aux_sym_primitive_type_token18] = aux_sym_primitive_type_token18,
  [aux_sym_primitive_type_token19] = aux_sym_primitive_type_token19,
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
  [anon_sym_TABLE_DASHTRIGGER] = anon_sym_TABLE_DASHTRIGGER,
  [aux_sym_table_tuning_token8] = aux_sym_table_tuning_token8,
  [aux_sym_table_tuning_token9] = aux_sym_table_tuning_token9,
  [aux_sym_table_tuning_token10] = aux_sym_table_tuning_token10,
  [aux_sym_table_tuning_token11] = aux_sym_table_tuning_token11,
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
  [aux_sym_field_tuning_token11] = aux_sym_field_tuning_token11,
  [aux_sym_field_tuning_token12] = aux_sym_field_tuning_token12,
  [aux_sym_field_tuning_token13] = aux_sym_field_tuning_token13,
  [anon_sym_M] = anon_sym_M,
  [aux_sym_field_tuning_token14] = aux_sym_field_tuning_token14,
  [aux_sym_field_tuning_token15] = aux_sym_field_tuning_token15,
  [aux_sym_field_tuning_token16] = aux_sym_field_tuning_token16,
  [aux_sym_field_tuning_token17] = aux_sym_field_tuning_token17,
  [aux_sym_field_tuning_token18] = aux_sym_field_tuning_token18,
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
  [anon_sym_DQUOTE_DQUOTE] = {
    .visible = true,
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
  [aux_sym_primitive_type_token18] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token19] = {
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
  [anon_sym_TABLE_DASHTRIGGER] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_tuning_token8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_tuning_token9] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_tuning_token10] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_tuning_token11] = {
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
  [aux_sym_field_tuning_token11] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token12] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token14] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token15] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token16] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token17] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_field_tuning_token18] = {
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
  field_procedure = 3,
  field_sequence = 4,
  field_table = 5,
  field_trigger = 6,
  field_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_field] = "field",
  [field_index] = "index",
  [field_procedure] = "procedure",
  [field_sequence] = "sequence",
  [field_table] = "table",
  [field_trigger] = "trigger",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 2},
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
  [7] =
    {field_procedure, 4},
    {field_trigger, 1},
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
  [17] = 7,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 8,
  [22] = 9,
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
  [65] = 65,
  [66] = 63,
  [67] = 64,
  [68] = 68,
  [69] = 65,
  [70] = 70,
  [71] = 61,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 6,
  [86] = 2,
  [87] = 4,
  [88] = 3,
  [89] = 5,
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
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 109,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(312);
      if (lookahead == '"') ADVANCE(577);
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead == '.') ADVANCE(568);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == '=') ADVANCE(648);
      if (lookahead == '?') ADVANCE(569);
      if (lookahead == 'M') ADVANCE(629);
      if (lookahead == 'T') ADVANCE(327);
      if (lookahead == '\\') ADVANCE(567);
      if (lookahead == 'm') ADVANCE(331);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(353);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(333);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(381);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(337);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(401);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(473);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(423);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(494);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(382);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(474);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(341);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(404);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(308)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') ADVANCE(581);
      if (lookahead != 0) ADVANCE(581);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') ADVANCE(581);
      if (lookahead != 0) ADVANCE(581);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(577);
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead == '.') ADVANCE(568);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == '=') ADVANCE(648);
      if (lookahead == '?') ADVANCE(569);
      if (lookahead == 'T') ADVANCE(327);
      if (lookahead == '\\') ADVANCE(567);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(353);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(333);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(381);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(337);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(401);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(473);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(331);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(423);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(494);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(382);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(474);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(341);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(404);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(577);
      if (lookahead == '/') ADVANCE(578);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(579);
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(576);
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '?') ADVANCE(569);
      if (lookahead == '\\') ADVANCE(567);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(338);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(493);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(509);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead == '/') ADVANCE(587);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(585);
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(313);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(318);
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
      if (lookahead == '*') ADVANCE(318);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(314);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(290);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(291);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(144);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(293);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(223);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(214);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(231);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(185);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(265);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'B') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'G') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'G') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'I') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(609);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(601);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(626);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(259);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(66);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(638);
      END_STATE();
    case 66:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(246);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(15);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(18);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(123);
      END_STATE();
    case 70:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(184);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(137);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(613);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(646);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(593);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(592);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(221);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(300);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(599);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(636);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(642);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(641);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 90:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 91:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 92:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 93:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 94:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(119);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 95:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 96:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 97:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 143:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(637);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(645);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      END_STATE();
    case 144:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 145:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(590);
      END_STATE();
    case 146:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(589);
      END_STATE();
    case 147:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(606);
      END_STATE();
    case 148:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 149:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(619);
      END_STATE();
    case 150:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 155:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 156:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 157:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 158:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 159:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 160:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 161:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 162:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 163:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 171:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(603);
      END_STATE();
    case 172:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(594);
      END_STATE();
    case 173:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(622);
      END_STATE();
    case 174:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 175:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 176:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(598);
      END_STATE();
    case 177:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(597);
      END_STATE();
    case 178:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 179:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 180:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 181:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 182:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 183:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 184:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 185:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 186:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 187:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 188:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(647);
      END_STATE();
    case 189:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 190:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 191:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 192:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(204);
      END_STATE();
    case 193:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 194:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 195:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 196:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 197:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(608);
      END_STATE();
    case 198:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(618);
      END_STATE();
    case 199:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 200:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(632);
      END_STATE();
    case 201:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 202:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 203:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 204:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(624);
      END_STATE();
    case 205:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 206:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 207:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 208:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 209:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 210:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 211:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 212:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 213:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 214:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 215:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 216:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 217:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 218:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 219:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 220:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 221:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 222:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(573);
      END_STATE();
    case 223:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 224:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 225:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(260);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 226:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 227:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 228:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 229:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 230:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 231:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 232:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(621);
      END_STATE();
    case 233:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(605);
      END_STATE();
    case 234:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 235:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 236:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 237:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(281);
      END_STATE();
    case 238:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(284);
      END_STATE();
    case 239:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(286);
      END_STATE();
    case 240:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 241:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 242:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 243:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 244:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 245:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 246:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 247:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 248:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 249:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 250:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 251:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 252:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 253:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 254:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 255:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(572);
      END_STATE();
    case 256:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(616);
      END_STATE();
    case 257:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(627);
      END_STATE();
    case 258:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 259:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      END_STATE();
    case 260:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 261:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 262:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 263:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      END_STATE();
    case 264:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(42);
      END_STATE();
    case 265:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 266:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      END_STATE();
    case 267:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 268:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(617);
      END_STATE();
    case 269:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(615);
      END_STATE();
    case 270:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      END_STATE();
    case 271:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(596);
      END_STATE();
    case 272:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 273:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      END_STATE();
    case 274:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 275:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 276:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 277:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 278:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 279:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 280:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 281:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      END_STATE();
    case 282:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 283:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 284:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 285:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 286:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 287:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 288:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(154);
      END_STATE();
    case 289:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(110);
      END_STATE();
    case 290:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(57);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(153);
      END_STATE();
    case 291:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 292:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(142);
      END_STATE();
    case 293:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(153);
      END_STATE();
    case 294:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(275);
      END_STATE();
    case 295:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(643);
      END_STATE();
    case 296:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(233);
      END_STATE();
    case 297:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 298:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(640);
      END_STATE();
    case 299:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(634);
      END_STATE();
    case 300:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(236);
      END_STATE();
    case 301:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(279);
      END_STATE();
    case 302:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(129);
      END_STATE();
    case 303:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(102);
      END_STATE();
    case 304:
      if (eof) ADVANCE(312);
      if (lookahead == '\n') SKIP(309)
      END_STATE();
    case 305:
      if (eof) ADVANCE(312);
      if (lookahead == '\n') SKIP(309)
      if (lookahead == '\r') SKIP(304)
      END_STATE();
    case 306:
      if (eof) ADVANCE(312);
      if (lookahead == '\n') SKIP(311)
      END_STATE();
    case 307:
      if (eof) ADVANCE(312);
      if (lookahead == '\n') SKIP(311)
      if (lookahead == '\r') SKIP(306)
      END_STATE();
    case 308:
      if (eof) ADVANCE(312);
      if (lookahead == '"') ADVANCE(577);
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead == '.') ADVANCE(568);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == '=') ADVANCE(648);
      if (lookahead == '?') ADVANCE(569);
      if (lookahead == 'T') ADVANCE(327);
      if (lookahead == '\\') ADVANCE(567);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(353);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(333);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(381);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(337);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(401);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(473);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(331);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(423);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(494);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(382);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(474);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(341);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(404);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(308)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 309:
      if (eof) ADVANCE(312);
      if (lookahead == '"') ADVANCE(576);
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead == '.') ADVANCE(568);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == '=') ADVANCE(648);
      if (lookahead == 'T') ADVANCE(29);
      if (lookahead == '\\') SKIP(305)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(44);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(218);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(46);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(45);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(219);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(225);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(202);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(309)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 310:
      if (eof) ADVANCE(312);
      if (lookahead == '.') ADVANCE(568);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'M') ADVANCE(630);
      if (lookahead == '\\') SKIP(307)
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(59);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(46);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(222);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(224);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(48);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(311)
      END_STATE();
    case 311:
      if (eof) ADVANCE(312);
      if (lookahead == '.') ADVANCE(568);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') SKIP(307)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(59);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(46);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(222);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(224);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(48);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(311)
      END_STATE();
    case 312:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(13);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(588);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(652);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(13);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(313);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(328);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(330);
      if (lookahead == 'b') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(329);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(357);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(529);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(495);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(453);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(527);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(626);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(409);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(511);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(358);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(519);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(564);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(354);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(369);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(398);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(638);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(429);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(492);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(517);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(396);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(539);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(636);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(642);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(641);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(411);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(560);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(637);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(645);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(376);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(467);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(647);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(528);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(439);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(621);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(552);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(627);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(644);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(640);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'y') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'y') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_null_expression);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token1);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token2);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token3);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token4);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token4);
      if (lookahead == '-') ADVANCE(491);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(582);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '/') ADVANCE(578);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(580);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token2);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(588);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '/') ADVANCE(587);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(588);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '"') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(588);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '*') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(588);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_sort_order_token1);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_sort_order_token2);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_sort_order_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_sort_order_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_sort_order_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_sequence_tuning_token1);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_sequence_tuning_token2);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_sequence_tuning_token3);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_sequence_tuning_token4);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_sequence_tuning_token5);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_add_sequence_statement_token1);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_add_sequence_statement_token2);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_table_tuning_token1);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_table_tuning_token2);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_table_tuning_token3);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_table_tuning_token4);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_table_tuning_token5);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_table_tuning_token6);
      if (lookahead == '-') ADVANCE(264);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_table_tuning_token6);
      if (lookahead == '-') ADVANCE(530);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_table_tuning_token7);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_TABLE_DASHTRIGGER);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_table_tuning_token8);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_table_tuning_token9);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_table_tuning_token10);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_table_tuning_token11);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_add_table_statement_token1);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_field_tuning_token1);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_field_tuning_token2);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_field_tuning_token3);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_field_tuning_token4);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_field_tuning_token5);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_field_tuning_token6);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_field_tuning_token7);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_field_tuning_token8);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_field_tuning_token9);
      if (lookahead == '-') ADVANCE(458);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_field_tuning_token9);
      if (lookahead == '-') ADVANCE(182);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_field_tuning_token10);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_field_tuning_token11);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_field_tuning_token12);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_field_tuning_token13);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(567);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_field_tuning_token14);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_field_tuning_token15);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_field_tuning_token16);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_field_tuning_token17);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_field_tuning_token18);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_add_field_statement_token1);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_add_field_statement_token2);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_add_field_statement_token3);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_index_tuning_token1);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_index_tuning_token2);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_index_tuning_token3);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_index_tuning_token4);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_add_index_statement_token1);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_add_index_statement_token1);
      if (lookahead == '-') ADVANCE(424);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_add_index_statement_token2);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_footer_token1);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_footer_token2);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_footer_token3);
      if (lookahead == '\r') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(652);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_footer_token3);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(652);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_footer_token3);
      if (lookahead == '/') ADVANCE(650);
      if (lookahead == '\\') ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(652);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_footer_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(652);
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
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(7);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(8);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(9);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
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
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 2:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(13);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(14);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 12:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(35);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__block_terminator_token1);
      END_STATE();
    case 33:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_primitive_type_token3);
      if (lookahead == '6') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_primitive_type_token13);
      END_STATE();
    case 39:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_primitive_type_token18);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_primitive_type_token5);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_primitive_type_token19);
      END_STATE();
    case 44:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_primitive_type_token7);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == '4') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_primitive_type_token10);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_primitive_type_token14);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_primitive_type_token15);
      END_STATE();
    case 67:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 70:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_primitive_type_token16);
      END_STATE();
    case 72:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 73:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_primitive_type_token12);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_primitive_type_token6);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      END_STATE();
    case 82:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 83:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_primitive_type_token8);
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_primitive_type_token11);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_primitive_type_token4);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 89:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_primitive_type_token17);
      END_STATE();
    case 91:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_primitive_type_token9);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 309},
  [2] = {.lex_state = 309},
  [3] = {.lex_state = 309},
  [4] = {.lex_state = 309},
  [5] = {.lex_state = 309},
  [6] = {.lex_state = 309},
  [7] = {.lex_state = 309, .external_lex_state = 1},
  [8] = {.lex_state = 309},
  [9] = {.lex_state = 309},
  [10] = {.lex_state = 309, .external_lex_state = 1},
  [11] = {.lex_state = 309, .external_lex_state = 1},
  [12] = {.lex_state = 309, .external_lex_state = 1},
  [13] = {.lex_state = 309, .external_lex_state = 1},
  [14] = {.lex_state = 309},
  [15] = {.lex_state = 309},
  [16] = {.lex_state = 309},
  [17] = {.lex_state = 310, .external_lex_state = 1},
  [18] = {.lex_state = 309},
  [19] = {.lex_state = 309},
  [20] = {.lex_state = 310},
  [21] = {.lex_state = 310},
  [22] = {.lex_state = 310},
  [23] = {.lex_state = 309},
  [24] = {.lex_state = 309},
  [25] = {.lex_state = 309},
  [26] = {.lex_state = 309},
  [27] = {.lex_state = 309},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 309},
  [32] = {.lex_state = 309},
  [33] = {.lex_state = 309},
  [34] = {.lex_state = 309},
  [35] = {.lex_state = 309},
  [36] = {.lex_state = 309},
  [37] = {.lex_state = 309},
  [38] = {.lex_state = 309},
  [39] = {.lex_state = 309},
  [40] = {.lex_state = 309},
  [41] = {.lex_state = 309},
  [42] = {.lex_state = 309},
  [43] = {.lex_state = 309},
  [44] = {.lex_state = 309},
  [45] = {.lex_state = 309},
  [46] = {.lex_state = 309},
  [47] = {.lex_state = 309},
  [48] = {.lex_state = 309},
  [49] = {.lex_state = 309},
  [50] = {.lex_state = 309},
  [51] = {.lex_state = 309},
  [52] = {.lex_state = 309},
  [53] = {.lex_state = 309},
  [54] = {.lex_state = 309},
  [55] = {.lex_state = 309},
  [56] = {.lex_state = 309},
  [57] = {.lex_state = 309},
  [58] = {.lex_state = 309},
  [59] = {.lex_state = 309},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 309},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 309},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 309},
  [73] = {.lex_state = 309},
  [74] = {.lex_state = 309},
  [75] = {.lex_state = 309},
  [76] = {.lex_state = 309},
  [77] = {.lex_state = 309},
  [78] = {.lex_state = 309},
  [79] = {.lex_state = 310},
  [80] = {.lex_state = 309},
  [81] = {.lex_state = 309},
  [82] = {.lex_state = 309},
  [83] = {.lex_state = 28},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 28},
  [86] = {.lex_state = 28},
  [87] = {.lex_state = 28},
  [88] = {.lex_state = 28},
  [89] = {.lex_state = 28},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 310},
  [92] = {.lex_state = 309},
  [93] = {.lex_state = 309},
  [94] = {.lex_state = 309},
  [95] = {.lex_state = 309},
  [96] = {.lex_state = 309},
  [97] = {.lex_state = 309},
  [98] = {.lex_state = 309, .external_lex_state = 1},
  [99] = {.lex_state = 309},
  [100] = {.lex_state = 309},
  [101] = {.lex_state = 27},
  [102] = {.lex_state = 309},
  [103] = {.lex_state = 309},
  [104] = {.lex_state = 309},
  [105] = {.lex_state = 309},
  [106] = {.lex_state = 309},
  [107] = {.lex_state = 309},
  [108] = {.lex_state = 309},
  [109] = {.lex_state = 309},
  [110] = {.lex_state = 309},
  [111] = {.lex_state = 309},
  [112] = {.lex_state = 651},
  [113] = {.lex_state = 12},
  [114] = {(TSStateId)(-1)},
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
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
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
    [aux_sym_primitive_type_token18] = ACTIONS(1),
    [aux_sym_primitive_type_token19] = ACTIONS(1),
    [aux_sym_sequence_tuning_token1] = ACTIONS(1),
    [aux_sym_sequence_tuning_token2] = ACTIONS(1),
    [aux_sym_sequence_tuning_token3] = ACTIONS(1),
    [aux_sym_add_sequence_statement_token1] = ACTIONS(1),
    [aux_sym_add_sequence_statement_token2] = ACTIONS(1),
    [aux_sym_table_tuning_token1] = ACTIONS(1),
    [aux_sym_table_tuning_token2] = ACTIONS(1),
    [aux_sym_table_tuning_token3] = ACTIONS(1),
    [aux_sym_table_tuning_token4] = ACTIONS(1),
    [aux_sym_table_tuning_token5] = ACTIONS(1),
    [aux_sym_table_tuning_token6] = ACTIONS(1),
    [aux_sym_table_tuning_token7] = ACTIONS(1),
    [anon_sym_TABLE_DASHTRIGGER] = ACTIONS(1),
    [aux_sym_table_tuning_token8] = ACTIONS(1),
    [aux_sym_table_tuning_token9] = ACTIONS(1),
    [aux_sym_table_tuning_token10] = ACTIONS(1),
    [aux_sym_table_tuning_token11] = ACTIONS(1),
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
    [aux_sym_field_tuning_token11] = ACTIONS(1),
    [aux_sym_field_tuning_token12] = ACTIONS(1),
    [aux_sym_field_tuning_token13] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [aux_sym_field_tuning_token14] = ACTIONS(1),
    [aux_sym_field_tuning_token15] = ACTIONS(1),
    [aux_sym_field_tuning_token16] = ACTIONS(1),
    [aux_sym_field_tuning_token17] = ACTIONS(1),
    [aux_sym_field_tuning_token18] = ACTIONS(1),
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
    [sym_source_code] = STATE(102),
    [sym_comment] = STATE(1),
    [sym_add_sequence_statement] = STATE(95),
    [sym_add_table_statement] = STATE(95),
    [sym_add_field_statement] = STATE(95),
    [sym_add_index_statement] = STATE(95),
    [sym__statement] = STATE(96),
    [sym_footer] = STATE(99),
    [aux_sym_source_code_repeat1] = STATE(40),
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
    STATE(2), 1,
      sym_comment,
    ACTIONS(15), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(13), 41,
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
      aux_sym_table_tuning_token7,
      anon_sym_TABLE_DASHTRIGGER,
      aux_sym_table_tuning_token8,
      aux_sym_table_tuning_token9,
      aux_sym_table_tuning_token11,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
      aux_sym_add_field_statement_token2,
      aux_sym_add_field_statement_token3,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
      aux_sym_add_index_statement_token2,
  [54] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(3), 1,
      sym_comment,
    ACTIONS(19), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(17), 41,
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
      aux_sym_table_tuning_token7,
      anon_sym_TABLE_DASHTRIGGER,
      aux_sym_table_tuning_token8,
      aux_sym_table_tuning_token9,
      aux_sym_table_tuning_token11,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
      aux_sym_add_field_statement_token2,
      aux_sym_add_field_statement_token3,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
      aux_sym_add_index_statement_token2,
  [108] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(4), 1,
      sym_comment,
    ACTIONS(23), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(21), 41,
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
      aux_sym_table_tuning_token7,
      anon_sym_TABLE_DASHTRIGGER,
      aux_sym_table_tuning_token8,
      aux_sym_table_tuning_token9,
      aux_sym_table_tuning_token11,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
      aux_sym_add_field_statement_token2,
      aux_sym_add_field_statement_token3,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
      aux_sym_add_index_statement_token2,
  [162] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(5), 1,
      sym_comment,
    ACTIONS(27), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(25), 41,
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
      aux_sym_table_tuning_token7,
      anon_sym_TABLE_DASHTRIGGER,
      aux_sym_table_tuning_token8,
      aux_sym_table_tuning_token9,
      aux_sym_table_tuning_token11,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
      aux_sym_add_field_statement_token2,
      aux_sym_add_field_statement_token3,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
      aux_sym_add_index_statement_token2,
  [216] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_comment,
    ACTIONS(31), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(29), 41,
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
      aux_sym_table_tuning_token7,
      anon_sym_TABLE_DASHTRIGGER,
      aux_sym_table_tuning_token8,
      aux_sym_table_tuning_token9,
      aux_sym_table_tuning_token11,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
      aux_sym_add_field_statement_token2,
      aux_sym_add_field_statement_token3,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
      aux_sym_add_index_statement_token2,
  [270] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      sym__namedot,
    STATE(7), 1,
      sym_comment,
    ACTIONS(35), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(33), 31,
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
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
      aux_sym_footer_token1,
      aux_sym_footer_token2,
  [317] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 1,
      sym_comment,
    ACTIONS(41), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(39), 31,
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
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
      aux_sym_footer_token1,
      aux_sym_footer_token2,
  [361] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 1,
      sym_comment,
    ACTIONS(35), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(33), 31,
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
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
      aux_sym_footer_token1,
      aux_sym_footer_token2,
  [405] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(47), 1,
      sym__namedot,
    ACTIONS(45), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    STATE(10), 2,
      sym_comment,
      aux_sym_qualified_name_repeat1,
    ACTIONS(43), 28,
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
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
  [450] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(54), 1,
      sym__namedot,
    STATE(11), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(52), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(50), 28,
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
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
  [497] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(54), 1,
      sym__namedot,
    STATE(10), 1,
      aux_sym_qualified_name_repeat1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(58), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(56), 28,
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
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
  [544] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(43), 29,
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
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
  [586] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_comment,
    ACTIONS(52), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(50), 28,
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
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
  [627] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_comment,
    ACTIONS(62), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(60), 28,
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
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
  [668] = 11,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(66), 1,
      aux_sym_sequence_tuning_token1,
    ACTIONS(74), 1,
      aux_sym_field_tuning_token13,
    STATE(16), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_add_field_statement_repeat1,
    STATE(24), 1,
      sym_field_tuning,
    ACTIONS(70), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(76), 2,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(72), 7,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token16,
    ACTIONS(68), 10,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
  [721] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(78), 1,
      sym__namedot,
    STATE(17), 1,
      sym_comment,
    ACTIONS(35), 3,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
      anon_sym_M,
    ACTIONS(33), 24,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
  [762] = 10,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(82), 1,
      aux_sym_sequence_tuning_token1,
    ACTIONS(94), 1,
      aux_sym_field_tuning_token13,
    STATE(24), 1,
      sym_field_tuning,
    ACTIONS(88), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(97), 2,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
    STATE(18), 2,
      sym_comment,
      aux_sym_add_field_statement_repeat1,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(91), 7,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token16,
    ACTIONS(85), 10,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
  [813] = 11,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(66), 1,
      aux_sym_sequence_tuning_token1,
    ACTIONS(74), 1,
      aux_sym_field_tuning_token13,
    STATE(16), 1,
      aux_sym_add_field_statement_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(24), 1,
      sym_field_tuning,
    ACTIONS(70), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(76), 2,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(72), 7,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token16,
    ACTIONS(68), 10,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
  [866] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(106), 1,
      anon_sym_M,
    STATE(20), 1,
      sym_comment,
    ACTIONS(104), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(102), 24,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
  [906] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(41), 3,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
      anon_sym_M,
    ACTIONS(39), 24,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
  [944] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(35), 3,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
      anon_sym_M,
    ACTIONS(33), 24,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
  [982] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(104), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(102), 24,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
  [1019] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(110), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(108), 24,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
  [1056] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(114), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(112), 24,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
  [1093] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_comment,
    ACTIONS(118), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(116), 24,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
  [1130] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(122), 2,
      aux_sym_table_tuning_token6,
      aux_sym_field_tuning_token9,
    ACTIONS(120), 24,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token5,
      aux_sym_field_tuning_token1,
      aux_sym_field_tuning_token2,
      aux_sym_field_tuning_token3,
      aux_sym_field_tuning_token4,
      aux_sym_field_tuning_token5,
      aux_sym_field_tuning_token6,
      aux_sym_field_tuning_token7,
      aux_sym_field_tuning_token8,
      aux_sym_field_tuning_token10,
      aux_sym_field_tuning_token11,
      aux_sym_field_tuning_token12,
      aux_sym_field_tuning_token13,
      aux_sym_field_tuning_token14,
      aux_sym_field_tuning_token15,
      aux_sym_field_tuning_token16,
      aux_sym_field_tuning_token17,
      aux_sym_field_tuning_token18,
  [1167] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(19), 1,
      sym_primitive_type,
    STATE(25), 1,
      sym_qualified_name,
    STATE(28), 1,
      sym_comment,
    ACTIONS(126), 19,
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
      aux_sym_primitive_type_token18,
      aux_sym_primitive_type_token19,
  [1204] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym_null_expression,
    ACTIONS(134), 1,
      sym__integer_literal,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym__decimal_literal,
    STATE(29), 1,
      sym_comment,
    STATE(56), 1,
      sym__expression,
    STATE(5), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(132), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(14), 4,
      sym_qualified_name,
      sym_boolean_literal,
      sym_number_literal,
      sym__string_literal,
  [1248] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym_null_expression,
    ACTIONS(134), 1,
      sym__integer_literal,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym__decimal_literal,
    STATE(23), 1,
      sym__expression,
    STATE(30), 1,
      sym_comment,
    STATE(5), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(132), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(14), 4,
      sym_qualified_name,
      sym_boolean_literal,
      sym_number_literal,
      sym__string_literal,
  [1292] = 7,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(145), 1,
      aux_sym_table_tuning_token7,
    ACTIONS(148), 1,
      anon_sym_TABLE_DASHTRIGGER,
    STATE(36), 1,
      sym_table_tuning,
    STATE(31), 2,
      sym_comment,
      aux_sym_add_table_statement_repeat1,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(142), 6,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token4,
      aux_sym_table_tuning_token5,
      aux_sym_table_tuning_token6,
  [1322] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(155), 1,
      aux_sym_table_tuning_token7,
    ACTIONS(157), 1,
      anon_sym_TABLE_DASHTRIGGER,
    STATE(31), 1,
      aux_sym_add_table_statement_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(36), 1,
      sym_table_tuning,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(153), 6,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token4,
      aux_sym_table_tuning_token5,
      aux_sym_table_tuning_token6,
  [1354] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(155), 1,
      aux_sym_table_tuning_token7,
    ACTIONS(157), 1,
      anon_sym_TABLE_DASHTRIGGER,
    STATE(32), 1,
      aux_sym_add_table_statement_repeat1,
    STATE(33), 1,
      sym_comment,
    STATE(36), 1,
      sym_table_tuning,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(153), 6,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_table_tuning_token3,
      aux_sym_table_tuning_token4,
      aux_sym_table_tuning_token5,
      aux_sym_table_tuning_token6,
  [1386] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(161), 11,
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
      anon_sym_TABLE_DASHTRIGGER,
  [1406] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(163), 11,
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
      anon_sym_TABLE_DASHTRIGGER,
  [1426] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(165), 11,
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
      anon_sym_TABLE_DASHTRIGGER,
  [1446] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(167), 11,
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
      anon_sym_TABLE_DASHTRIGGER,
  [1466] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(171), 1,
      aux_sym_sequence_tuning_token1,
    ACTIONS(175), 1,
      aux_sym_sequence_tuning_token3,
    STATE(38), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_add_sequence_statement_repeat1,
    STATE(52), 1,
      sym_sequence_tuning,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(173), 3,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
  [1495] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(183), 1,
      aux_sym_index_tuning_token3,
    STATE(39), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_add_index_statement_repeat1,
    STATE(53), 1,
      sym_index_tuning,
    ACTIONS(179), 2,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
    ACTIONS(181), 2,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
    ACTIONS(177), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
  [1524] = 9,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_source_code_repeat1,
    STATE(96), 1,
      sym__statement,
    STATE(108), 1,
      sym_footer,
    STATE(95), 4,
      sym_add_sequence_statement,
      sym_add_table_statement,
      sym_add_field_statement,
      sym_add_index_statement,
  [1555] = 7,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(195), 1,
      aux_sym_index_tuning_token3,
    STATE(53), 1,
      sym_index_tuning,
    ACTIONS(189), 2,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
    ACTIONS(192), 2,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
    STATE(41), 2,
      sym_comment,
      aux_sym_add_index_statement_repeat1,
    ACTIONS(187), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
  [1582] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(171), 1,
      aux_sym_sequence_tuning_token1,
    ACTIONS(175), 1,
      aux_sym_sequence_tuning_token3,
    STATE(42), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_add_sequence_statement_repeat1,
    STATE(52), 1,
      sym_sequence_tuning,
    ACTIONS(173), 3,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
    ACTIONS(198), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
  [1611] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(183), 1,
      aux_sym_index_tuning_token3,
    STATE(41), 1,
      aux_sym_add_index_statement_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(53), 1,
      sym_index_tuning,
    ACTIONS(179), 2,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
    ACTIONS(181), 2,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
    ACTIONS(200), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
  [1640] = 7,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(204), 1,
      aux_sym_sequence_tuning_token1,
    ACTIONS(210), 1,
      aux_sym_sequence_tuning_token3,
    STATE(52), 1,
      sym_sequence_tuning,
    STATE(44), 2,
      sym_comment,
      aux_sym_add_sequence_statement_repeat1,
    ACTIONS(202), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
    ACTIONS(207), 3,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
  [1667] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      aux_sym_index_tuning_token4,
    STATE(45), 1,
      sym_comment,
    ACTIONS(213), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
  [1687] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(217), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
      aux_sym_index_tuning_token4,
  [1705] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      aux_sym_add_sequence_statement_token1,
    STATE(96), 1,
      sym__statement,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
    STATE(47), 2,
      sym_comment,
      aux_sym_source_code_repeat1,
    STATE(95), 4,
      sym_add_sequence_statement,
      sym_add_table_statement,
      sym_add_field_statement,
      sym_add_index_statement,
  [1729] = 9,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 1,
      sym__integer_literal,
    ACTIONS(230), 1,
      aux_sym_footer_token2,
    STATE(9), 1,
      sym__decimal_literal,
    STATE(48), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_footer_repeat1,
    STATE(74), 1,
      sym_number_literal,
    ACTIONS(226), 2,
      anon_sym_DOT,
      aux_sym_footer_token1,
  [1758] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
      sym_comment,
    ACTIONS(232), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
  [1775] = 9,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      sym__integer_literal,
    ACTIONS(230), 1,
      aux_sym_footer_token2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym__decimal_literal,
    STATE(50), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_footer_repeat1,
    STATE(74), 1,
      sym_number_literal,
    ACTIONS(226), 2,
      anon_sym_DOT,
      aux_sym_footer_token1,
  [1804] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(236), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
  [1821] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_comment,
    ACTIONS(238), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
  [1838] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_comment,
    ACTIONS(240), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
  [1855] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym_comment,
    ACTIONS(242), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
      aux_sym_table_tuning_token1,
      aux_sym_table_tuning_token2,
      aux_sym_index_tuning_token1,
      aux_sym_index_tuning_token2,
      aux_sym_index_tuning_token3,
  [1872] = 8,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 1,
      sym__integer_literal,
    ACTIONS(252), 1,
      aux_sym_footer_token2,
    STATE(9), 1,
      sym__decimal_literal,
    STATE(74), 1,
      sym_number_literal,
    ACTIONS(246), 2,
      anon_sym_DOT,
      aux_sym_footer_token1,
    STATE(55), 2,
      sym_comment,
      aux_sym_footer_repeat1,
  [1899] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_comment,
    ACTIONS(255), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_sequence_tuning_token1,
      aux_sym_sequence_tuning_token2,
      aux_sym_sequence_tuning_token3,
      aux_sym_sequence_tuning_token4,
      aux_sym_sequence_tuning_token5,
      aux_sym_add_sequence_statement_token1,
  [1916] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      sym_comment,
    STATE(100), 1,
      sym__string_literal,
    STATE(5), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1936] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym__string_literal,
    STATE(58), 1,
      sym_comment,
    STATE(5), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1956] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(39), 1,
      sym__string_literal,
    STATE(59), 1,
      sym_comment,
    STATE(5), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1976] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    STATE(60), 2,
      sym_comment,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(263), 3,
      aux_sym_double_quoted_string_token1,
      aux_sym_double_quoted_string_token2,
      anon_sym_DQUOTE_DQUOTE,
  [1992] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(268), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(266), 3,
      aux_sym_double_quoted_string_token2,
      anon_sym_DQUOTE_DQUOTE,
      aux_sym_single_quoted_string_token1,
  [2010] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(273), 1,
      anon_sym_SQUOTE,
    STATE(62), 2,
      sym_comment,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(270), 3,
      aux_sym_double_quoted_string_token2,
      anon_sym_DQUOTE_DQUOTE,
      aux_sym_single_quoted_string_token1,
  [2026] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(266), 3,
      aux_sym_double_quoted_string_token2,
      anon_sym_DQUOTE_DQUOTE,
      aux_sym_single_quoted_string_token1,
  [2044] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(279), 3,
      aux_sym_double_quoted_string_token1,
      aux_sym_double_quoted_string_token2,
      anon_sym_DQUOTE_DQUOTE,
  [2062] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(65), 1,
      sym_comment,
    ACTIONS(279), 3,
      aux_sym_double_quoted_string_token1,
      aux_sym_double_quoted_string_token2,
      anon_sym_DQUOTE_DQUOTE,
  [2080] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(66), 1,
      sym_comment,
    ACTIONS(266), 3,
      aux_sym_double_quoted_string_token2,
      anon_sym_DQUOTE_DQUOTE,
      aux_sym_single_quoted_string_token1,
  [2098] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(279), 3,
      aux_sym_double_quoted_string_token1,
      aux_sym_double_quoted_string_token2,
      anon_sym_DQUOTE_DQUOTE,
  [2116] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      sym_comment,
    ACTIONS(287), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym__integer_literal,
      aux_sym_footer_token1,
      aux_sym_footer_token2,
  [2130] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(69), 1,
      sym_comment,
    ACTIONS(279), 3,
      aux_sym_double_quoted_string_token1,
      aux_sym_double_quoted_string_token2,
      anon_sym_DQUOTE_DQUOTE,
  [2148] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym__string_literal,
    STATE(70), 1,
      sym_comment,
    STATE(5), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2168] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(291), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(71), 1,
      sym_comment,
    ACTIONS(266), 3,
      aux_sym_double_quoted_string_token2,
      anon_sym_DQUOTE_DQUOTE,
      aux_sym_single_quoted_string_token1,
  [2186] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym__string_literal,
    STATE(72), 1,
      sym_comment,
    STATE(5), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2206] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    STATE(73), 1,
      sym_comment,
    STATE(83), 1,
      sym__string_literal,
    STATE(89), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2226] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      sym_comment,
    ACTIONS(297), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym__integer_literal,
      aux_sym_footer_token1,
      aux_sym_footer_token2,
  [2240] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(75), 1,
      sym_comment,
    STATE(97), 1,
      sym__string_literal,
    STATE(5), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2260] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(76), 1,
      sym_comment,
    STATE(104), 1,
      sym__string_literal,
    STATE(5), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2280] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      sym_comment,
    STATE(106), 1,
      sym__string_literal,
    STATE(5), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2300] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(38), 1,
      sym__string_literal,
    STATE(78), 1,
      sym_comment,
    STATE(5), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2320] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_boolean_literal,
    STATE(79), 1,
      sym_comment,
    ACTIONS(299), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
  [2336] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(80), 1,
      sym_comment,
    STATE(111), 1,
      sym__string_literal,
    STATE(5), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2356] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym__string_literal,
    STATE(81), 1,
      sym_comment,
    STATE(5), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2376] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym__string_literal,
    STATE(82), 1,
      sym_comment,
    STATE(5), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2396] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_sort_order,
    STATE(83), 1,
      sym_comment,
    ACTIONS(301), 2,
      aux_sym_sort_order_token1,
      aux_sym_sort_order_token2,
    ACTIONS(303), 2,
      aux_sym_sort_order_token3,
      aux_sym_sort_order_token4,
  [2414] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 1,
      sym_comment,
    ACTIONS(305), 4,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      aux_sym_double_quoted_string_token2,
      anon_sym_DQUOTE_DQUOTE,
  [2427] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
      sym_comment,
    ACTIONS(29), 2,
      aux_sym_sort_order_token1,
      aux_sym_sort_order_token2,
    ACTIONS(31), 2,
      aux_sym_sort_order_token3,
      aux_sym_sort_order_token4,
  [2442] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 1,
      sym_comment,
    ACTIONS(13), 2,
      aux_sym_sort_order_token1,
      aux_sym_sort_order_token2,
    ACTIONS(15), 2,
      aux_sym_sort_order_token3,
      aux_sym_sort_order_token4,
  [2457] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 1,
      sym_comment,
    ACTIONS(21), 2,
      aux_sym_sort_order_token1,
      aux_sym_sort_order_token2,
    ACTIONS(23), 2,
      aux_sym_sort_order_token3,
      aux_sym_sort_order_token4,
  [2472] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(88), 1,
      sym_comment,
    ACTIONS(17), 2,
      aux_sym_sort_order_token1,
      aux_sym_sort_order_token2,
    ACTIONS(19), 2,
      aux_sym_sort_order_token3,
      aux_sym_sort_order_token4,
  [2487] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(89), 1,
      sym_comment,
    ACTIONS(25), 2,
      aux_sym_sort_order_token1,
      aux_sym_sort_order_token2,
    ACTIONS(27), 2,
      aux_sym_sort_order_token3,
      aux_sym_sort_order_token4,
  [2502] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(90), 1,
      sym_comment,
    ACTIONS(307), 4,
      aux_sym_double_quoted_string_token2,
      anon_sym_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_single_quoted_string_token1,
  [2515] = 6,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      aux_sym_add_sequence_statement_token2,
    ACTIONS(311), 1,
      aux_sym_add_table_statement_token1,
    ACTIONS(313), 1,
      aux_sym_add_field_statement_token1,
    ACTIONS(315), 1,
      aux_sym_add_index_statement_token1,
    STATE(91), 1,
      sym_comment,
  [2534] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      sym__integer_literal,
    STATE(9), 1,
      sym__decimal_literal,
    STATE(23), 1,
      sym_number_literal,
    STATE(92), 1,
      sym_comment,
  [2550] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(317), 1,
      sym__integer_literal,
    STATE(20), 1,
      sym_number_literal,
    STATE(22), 1,
      sym__decimal_literal,
    STATE(93), 1,
      sym_comment,
  [2566] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      sym__integer_literal,
    STATE(9), 1,
      sym__decimal_literal,
    STATE(56), 1,
      sym_number_literal,
    STATE(94), 1,
      sym_comment,
  [2582] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_comment,
    ACTIONS(319), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
  [2594] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
      sym_comment,
    ACTIONS(321), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      aux_sym_add_sequence_statement_token1,
  [2606] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
      sym_comment,
    ACTIONS(323), 2,
      aux_sym_table_tuning_token8,
      aux_sym_table_tuning_token9,
  [2617] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(54), 1,
      sym__namedot,
    STATE(12), 1,
      aux_sym_qualified_name_repeat1,
    STATE(98), 1,
      sym_comment,
  [2630] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    STATE(99), 1,
      sym_comment,
  [2640] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(325), 1,
      aux_sym_table_tuning_token11,
    STATE(100), 1,
      sym_comment,
  [2650] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(327), 1,
      sym_identifier,
    STATE(101), 1,
      sym_comment,
  [2660] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      sym_comment,
  [2670] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(331), 1,
      anon_sym_SLASH,
    STATE(103), 1,
      sym_comment,
  [2680] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(333), 1,
      aux_sym_add_field_statement_token3,
    STATE(104), 1,
      sym_comment,
  [2690] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(335), 1,
      aux_sym_table_tuning_token10,
    STATE(105), 1,
      sym_comment,
  [2700] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(337), 1,
      aux_sym_add_index_statement_token2,
    STATE(106), 1,
      sym_comment,
  [2710] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(339), 1,
      anon_sym_EQ,
    STATE(107), 1,
      sym_comment,
  [2720] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    STATE(108), 1,
      sym_comment,
  [2730] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(343), 1,
      sym__integer_literal,
    STATE(109), 1,
      sym_comment,
  [2740] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(345), 1,
      sym__integer_literal,
    STATE(110), 1,
      sym_comment,
  [2750] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(347), 1,
      aux_sym_add_field_statement_token2,
    STATE(111), 1,
      sym_comment,
  [2760] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(349), 1,
      aux_sym_footer_token3,
    STATE(112), 1,
      sym_comment,
  [2770] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(351), 1,
      aux_sym_comment_token1,
    STATE(113), 1,
      sym_comment,
  [2780] = 1,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 216,
  [SMALL_STATE(7)] = 270,
  [SMALL_STATE(8)] = 317,
  [SMALL_STATE(9)] = 361,
  [SMALL_STATE(10)] = 405,
  [SMALL_STATE(11)] = 450,
  [SMALL_STATE(12)] = 497,
  [SMALL_STATE(13)] = 544,
  [SMALL_STATE(14)] = 586,
  [SMALL_STATE(15)] = 627,
  [SMALL_STATE(16)] = 668,
  [SMALL_STATE(17)] = 721,
  [SMALL_STATE(18)] = 762,
  [SMALL_STATE(19)] = 813,
  [SMALL_STATE(20)] = 866,
  [SMALL_STATE(21)] = 906,
  [SMALL_STATE(22)] = 944,
  [SMALL_STATE(23)] = 982,
  [SMALL_STATE(24)] = 1019,
  [SMALL_STATE(25)] = 1056,
  [SMALL_STATE(26)] = 1093,
  [SMALL_STATE(27)] = 1130,
  [SMALL_STATE(28)] = 1167,
  [SMALL_STATE(29)] = 1204,
  [SMALL_STATE(30)] = 1248,
  [SMALL_STATE(31)] = 1292,
  [SMALL_STATE(32)] = 1322,
  [SMALL_STATE(33)] = 1354,
  [SMALL_STATE(34)] = 1386,
  [SMALL_STATE(35)] = 1406,
  [SMALL_STATE(36)] = 1426,
  [SMALL_STATE(37)] = 1446,
  [SMALL_STATE(38)] = 1466,
  [SMALL_STATE(39)] = 1495,
  [SMALL_STATE(40)] = 1524,
  [SMALL_STATE(41)] = 1555,
  [SMALL_STATE(42)] = 1582,
  [SMALL_STATE(43)] = 1611,
  [SMALL_STATE(44)] = 1640,
  [SMALL_STATE(45)] = 1667,
  [SMALL_STATE(46)] = 1687,
  [SMALL_STATE(47)] = 1705,
  [SMALL_STATE(48)] = 1729,
  [SMALL_STATE(49)] = 1758,
  [SMALL_STATE(50)] = 1775,
  [SMALL_STATE(51)] = 1804,
  [SMALL_STATE(52)] = 1821,
  [SMALL_STATE(53)] = 1838,
  [SMALL_STATE(54)] = 1855,
  [SMALL_STATE(55)] = 1872,
  [SMALL_STATE(56)] = 1899,
  [SMALL_STATE(57)] = 1916,
  [SMALL_STATE(58)] = 1936,
  [SMALL_STATE(59)] = 1956,
  [SMALL_STATE(60)] = 1976,
  [SMALL_STATE(61)] = 1992,
  [SMALL_STATE(62)] = 2010,
  [SMALL_STATE(63)] = 2026,
  [SMALL_STATE(64)] = 2044,
  [SMALL_STATE(65)] = 2062,
  [SMALL_STATE(66)] = 2080,
  [SMALL_STATE(67)] = 2098,
  [SMALL_STATE(68)] = 2116,
  [SMALL_STATE(69)] = 2130,
  [SMALL_STATE(70)] = 2148,
  [SMALL_STATE(71)] = 2168,
  [SMALL_STATE(72)] = 2186,
  [SMALL_STATE(73)] = 2206,
  [SMALL_STATE(74)] = 2226,
  [SMALL_STATE(75)] = 2240,
  [SMALL_STATE(76)] = 2260,
  [SMALL_STATE(77)] = 2280,
  [SMALL_STATE(78)] = 2300,
  [SMALL_STATE(79)] = 2320,
  [SMALL_STATE(80)] = 2336,
  [SMALL_STATE(81)] = 2356,
  [SMALL_STATE(82)] = 2376,
  [SMALL_STATE(83)] = 2396,
  [SMALL_STATE(84)] = 2414,
  [SMALL_STATE(85)] = 2427,
  [SMALL_STATE(86)] = 2442,
  [SMALL_STATE(87)] = 2457,
  [SMALL_STATE(88)] = 2472,
  [SMALL_STATE(89)] = 2487,
  [SMALL_STATE(90)] = 2502,
  [SMALL_STATE(91)] = 2515,
  [SMALL_STATE(92)] = 2534,
  [SMALL_STATE(93)] = 2550,
  [SMALL_STATE(94)] = 2566,
  [SMALL_STATE(95)] = 2582,
  [SMALL_STATE(96)] = 2594,
  [SMALL_STATE(97)] = 2606,
  [SMALL_STATE(98)] = 2617,
  [SMALL_STATE(99)] = 2630,
  [SMALL_STATE(100)] = 2640,
  [SMALL_STATE(101)] = 2650,
  [SMALL_STATE(102)] = 2660,
  [SMALL_STATE(103)] = 2670,
  [SMALL_STATE(104)] = 2680,
  [SMALL_STATE(105)] = 2690,
  [SMALL_STATE(106)] = 2700,
  [SMALL_STATE(107)] = 2710,
  [SMALL_STATE(108)] = 2720,
  [SMALL_STATE(109)] = 2730,
  [SMALL_STATE(110)] = 2740,
  [SMALL_STATE(111)] = 2750,
  [SMALL_STATE(112)] = 2760,
  [SMALL_STATE(113)] = 2770,
  [SMALL_STATE(114)] = 2780,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_code, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_literal, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_literal, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(101),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_field_statement, 8, .production_id = 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_field_statement_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_field_statement_repeat1, 2), SHIFT_REPEAT(30),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_field_statement_repeat1, 2), SHIFT_REPEAT(58),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_field_statement_repeat1, 2), SHIFT_REPEAT(58),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_field_statement_repeat1, 2), SHIFT_REPEAT(92),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_field_statement_repeat1, 2), SHIFT_REPEAT(93),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_field_statement_repeat1, 2), SHIFT_REPEAT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_field_statement, 7, .production_id = 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_tuning, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_tuning, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_field_statement_repeat1, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_field_statement_repeat1, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_tuning, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_tuning, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_tuning, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_tuning, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_table_statement_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_table_statement_repeat1, 2), SHIFT_REPEAT(82),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_table_statement_repeat1, 2), SHIFT_REPEAT(37),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_table_statement_repeat1, 2), SHIFT_REPEAT(75),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_table_statement, 4, .production_id = 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_table_statement, 3, .production_id = 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_tuning, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_tuning, 7, .production_id = 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_table_statement_repeat1, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_tuning, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_sequence_statement, 3, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_index_statement, 5, .production_id = 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_code, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_index_statement_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_index_statement_repeat1, 2), SHIFT_REPEAT(72),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_index_statement_repeat1, 2), SHIFT_REPEAT(54),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_index_statement_repeat1, 2), SHIFT_REPEAT(73),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_sequence_statement, 4, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_index_statement, 6, .production_id = 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_sequence_statement_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_sequence_statement_repeat1, 2), SHIFT_REPEAT(29),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_sequence_statement_repeat1, 2), SHIFT_REPEAT(94),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_sequence_statement_repeat1, 2), SHIFT_REPEAT(79),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_tuning, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_order, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_code_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_code_repeat1, 2), SHIFT_REPEAT(91),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_tuning, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_tuning, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_sequence_statement_repeat1, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_index_statement_repeat1, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_tuning, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_repeat1, 2), SHIFT_REPEAT(74),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_repeat1, 2), SHIFT_REPEAT(7),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_repeat1, 2), SHIFT_REPEAT(107),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_tuning, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(84),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(90),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_repeat1, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_repeat1, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_code_repeat1, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [329] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_code, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
