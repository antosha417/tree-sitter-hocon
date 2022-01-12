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

#define LANGUAGE_VERSION 13
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 0
#define TOKEN_COUNT 143
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COMMA = 1,
  anon_sym_LF = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_content_token1 = 8,
  sym_escape_sequence = 9,
  sym_number = 10,
  sym_true = 11,
  sym_false = 12,
  sym_null = 13,
  sym_comment = 14,
  anon_sym_COLON = 15,
  anon_sym_EQ = 16,
  anon_sym_PLUS_EQ = 17,
  sym_unquoted_string = 18,
  aux_sym_unquoted_path_token1 = 19,
  anon_sym_DOT = 20,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 21,
  aux_sym_multiline_string_token1 = 22,
  anon_sym_DOLLAR_LBRACE_QMARK = 23,
  anon_sym_DOLLAR_LBRACE = 24,
  anon_sym_include = 25,
  anon_sym_required = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_url = 29,
  anon_sym_file = 30,
  anon_sym_classpath = 31,
  anon_sym_DOT2 = 32,
  anon_sym_ns = 33,
  anon_sym_nano = 34,
  anon_sym_nanos = 35,
  anon_sym_nanosecond = 36,
  anon_sym_nanoseconds = 37,
  anon_sym_us = 38,
  anon_sym_micro = 39,
  anon_sym_micros = 40,
  anon_sym_microsecond = 41,
  anon_sym_microseconds = 42,
  anon_sym_ms = 43,
  anon_sym_milli = 44,
  anon_sym_millis = 45,
  anon_sym_millisecond = 46,
  anon_sym_milliseconds = 47,
  anon_sym_s = 48,
  anon_sym_second = 49,
  anon_sym_seconds = 50,
  anon_sym_m = 51,
  anon_sym_minute = 52,
  anon_sym_minutes = 53,
  anon_sym_h = 54,
  anon_sym_hour = 55,
  anon_sym_hours = 56,
  anon_sym_d = 57,
  anon_sym_day = 58,
  anon_sym_days = 59,
  anon_sym_w = 60,
  anon_sym_week = 61,
  anon_sym_weeks = 62,
  anon_sym_mo = 63,
  anon_sym_month = 64,
  anon_sym_months = 65,
  anon_sym_y = 66,
  anon_sym_year = 67,
  anon_sym_years = 68,
  anon_sym_B = 69,
  anon_sym_b = 70,
  anon_sym_byte = 71,
  anon_sym_bytes = 72,
  anon_sym_kB = 73,
  anon_sym_kilobyte = 74,
  anon_sym_kilobytes = 75,
  anon_sym_MB = 76,
  anon_sym_megabyte = 77,
  anon_sym_megabytes = 78,
  anon_sym_GB = 79,
  anon_sym_gigabyte = 80,
  anon_sym_gigabytes = 81,
  anon_sym_TB = 82,
  anon_sym_terabyte = 83,
  anon_sym_terabytes = 84,
  anon_sym_PB = 85,
  anon_sym_petabyte = 86,
  anon_sym_petabytes = 87,
  anon_sym_EB = 88,
  anon_sym_exabyte = 89,
  anon_sym_exabytes = 90,
  anon_sym_ZB = 91,
  anon_sym_zettabyte = 92,
  anon_sym_zettabytes = 93,
  anon_sym_YB = 94,
  anon_sym_yottabyte = 95,
  anon_sym_yottabytes = 96,
  anon_sym_K = 97,
  anon_sym_k = 98,
  anon_sym_Ki = 99,
  anon_sym_KiB = 100,
  anon_sym_kibibyte = 101,
  anon_sym_kibibytes = 102,
  anon_sym_M = 103,
  anon_sym_Mi = 104,
  anon_sym_MiB = 105,
  anon_sym_mebibyte = 106,
  anon_sym_mebibytes = 107,
  anon_sym_G = 108,
  anon_sym_g = 109,
  anon_sym_Gi = 110,
  anon_sym_GiB = 111,
  anon_sym_gibibyte = 112,
  anon_sym_gibibytes = 113,
  anon_sym_T = 114,
  anon_sym_t = 115,
  anon_sym_Ti = 116,
  anon_sym_TiB = 117,
  anon_sym_tebibyte = 118,
  anon_sym_tebibytes = 119,
  anon_sym_P = 120,
  anon_sym_p = 121,
  anon_sym_Pi = 122,
  anon_sym_PiB = 123,
  anon_sym_pebibyte = 124,
  anon_sym_pebibytes = 125,
  anon_sym_E = 126,
  anon_sym_e = 127,
  anon_sym_Ei = 128,
  anon_sym_EiB = 129,
  anon_sym_exbibyte = 130,
  anon_sym_exbibytes = 131,
  anon_sym_Z = 132,
  anon_sym_z = 133,
  anon_sym_Zi = 134,
  anon_sym_ZiB = 135,
  anon_sym_zebibyte = 136,
  anon_sym_zebibytes = 137,
  anon_sym_Y = 138,
  anon_sym_Yi = 139,
  anon_sym_YiB = 140,
  anon_sym_yobibyte = 141,
  anon_sym_yobibytes = 142,
  sym_document = 143,
  aux_sym__value = 144,
  sym_object = 145,
  sym_pair = 146,
  sym_array = 147,
  sym_string = 148,
  sym_path = 149,
  sym_value = 150,
  sym__pair_separator = 151,
  aux_sym__string_content = 152,
  sym_unquoted_path = 153,
  sym_multiline_string = 154,
  sym_substitution = 155,
  sym_include = 156,
  sym__resource_name = 157,
  sym_unit = 158,
  aux_sym_document_repeat1 = 159,
  aux_sym_array_repeat1 = 160,
  aux_sym_path_repeat1 = 161,
  aux_sym_unquoted_path_repeat1 = 162,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_LF] = "\n",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [sym_unquoted_string] = "unquoted_string",
  [aux_sym_unquoted_path_token1] = "unquoted_path_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_multiline_string_token1] = "multiline_string_token1",
  [anon_sym_DOLLAR_LBRACE_QMARK] = "${\?",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_include] = "include",
  [anon_sym_required] = "required",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_url] = "url",
  [anon_sym_file] = "file",
  [anon_sym_classpath] = "classpath",
  [anon_sym_DOT2] = ".",
  [anon_sym_ns] = "ns",
  [anon_sym_nano] = "nano",
  [anon_sym_nanos] = "nanos",
  [anon_sym_nanosecond] = "nanosecond",
  [anon_sym_nanoseconds] = "nanoseconds",
  [anon_sym_us] = "us",
  [anon_sym_micro] = "micro",
  [anon_sym_micros] = "micros",
  [anon_sym_microsecond] = "microsecond",
  [anon_sym_microseconds] = "microseconds",
  [anon_sym_ms] = "ms",
  [anon_sym_milli] = "milli",
  [anon_sym_millis] = "millis",
  [anon_sym_millisecond] = "millisecond",
  [anon_sym_milliseconds] = "milliseconds",
  [anon_sym_s] = "s",
  [anon_sym_second] = "second",
  [anon_sym_seconds] = "seconds",
  [anon_sym_m] = "m",
  [anon_sym_minute] = "minute",
  [anon_sym_minutes] = "minutes",
  [anon_sym_h] = "h",
  [anon_sym_hour] = "hour",
  [anon_sym_hours] = "hours",
  [anon_sym_d] = "d",
  [anon_sym_day] = "day",
  [anon_sym_days] = "days",
  [anon_sym_w] = "w",
  [anon_sym_week] = "week",
  [anon_sym_weeks] = "weeks",
  [anon_sym_mo] = "mo",
  [anon_sym_month] = "month",
  [anon_sym_months] = "months",
  [anon_sym_y] = "y",
  [anon_sym_year] = "year",
  [anon_sym_years] = "years",
  [anon_sym_B] = "B",
  [anon_sym_b] = "b",
  [anon_sym_byte] = "byte",
  [anon_sym_bytes] = "bytes",
  [anon_sym_kB] = "kB",
  [anon_sym_kilobyte] = "kilobyte",
  [anon_sym_kilobytes] = "kilobytes",
  [anon_sym_MB] = "MB",
  [anon_sym_megabyte] = "megabyte",
  [anon_sym_megabytes] = "megabytes",
  [anon_sym_GB] = "GB",
  [anon_sym_gigabyte] = "gigabyte",
  [anon_sym_gigabytes] = "gigabytes",
  [anon_sym_TB] = "TB",
  [anon_sym_terabyte] = "terabyte",
  [anon_sym_terabytes] = "terabytes",
  [anon_sym_PB] = "PB",
  [anon_sym_petabyte] = "petabyte",
  [anon_sym_petabytes] = "petabytes",
  [anon_sym_EB] = "EB",
  [anon_sym_exabyte] = "exabyte",
  [anon_sym_exabytes] = "exabytes",
  [anon_sym_ZB] = "ZB",
  [anon_sym_zettabyte] = "zettabyte",
  [anon_sym_zettabytes] = "zettabytes",
  [anon_sym_YB] = "YB",
  [anon_sym_yottabyte] = "yottabyte",
  [anon_sym_yottabytes] = "yottabytes",
  [anon_sym_K] = "K",
  [anon_sym_k] = "k",
  [anon_sym_Ki] = "Ki",
  [anon_sym_KiB] = "KiB",
  [anon_sym_kibibyte] = "kibibyte",
  [anon_sym_kibibytes] = "kibibytes",
  [anon_sym_M] = "M",
  [anon_sym_Mi] = "Mi",
  [anon_sym_MiB] = "MiB",
  [anon_sym_mebibyte] = "mebibyte",
  [anon_sym_mebibytes] = "mebibytes",
  [anon_sym_G] = "G",
  [anon_sym_g] = "g",
  [anon_sym_Gi] = "Gi",
  [anon_sym_GiB] = "GiB",
  [anon_sym_gibibyte] = "gibibyte",
  [anon_sym_gibibytes] = "gibibytes",
  [anon_sym_T] = "T",
  [anon_sym_t] = "t",
  [anon_sym_Ti] = "Ti",
  [anon_sym_TiB] = "TiB",
  [anon_sym_tebibyte] = "tebibyte",
  [anon_sym_tebibytes] = "tebibytes",
  [anon_sym_P] = "P",
  [anon_sym_p] = "p",
  [anon_sym_Pi] = "Pi",
  [anon_sym_PiB] = "PiB",
  [anon_sym_pebibyte] = "pebibyte",
  [anon_sym_pebibytes] = "pebibytes",
  [anon_sym_E] = "E",
  [anon_sym_e] = "e",
  [anon_sym_Ei] = "Ei",
  [anon_sym_EiB] = "EiB",
  [anon_sym_exbibyte] = "exbibyte",
  [anon_sym_exbibytes] = "exbibytes",
  [anon_sym_Z] = "Z",
  [anon_sym_z] = "z",
  [anon_sym_Zi] = "Zi",
  [anon_sym_ZiB] = "ZiB",
  [anon_sym_zebibyte] = "zebibyte",
  [anon_sym_zebibytes] = "zebibytes",
  [anon_sym_Y] = "Y",
  [anon_sym_Yi] = "Yi",
  [anon_sym_YiB] = "YiB",
  [anon_sym_yobibyte] = "yobibyte",
  [anon_sym_yobibytes] = "yobibytes",
  [sym_document] = "document",
  [aux_sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_path] = "path",
  [sym_value] = "value",
  [sym__pair_separator] = "_pair_separator",
  [aux_sym__string_content] = "_string_content",
  [sym_unquoted_path] = "unquoted_path",
  [sym_multiline_string] = "multiline_string",
  [sym_substitution] = "substitution",
  [sym_include] = "include",
  [sym__resource_name] = "_resource_name",
  [sym_unit] = "unit",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_unquoted_path_repeat1] = "unquoted_path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [sym_unquoted_string] = sym_unquoted_string,
  [aux_sym_unquoted_path_token1] = aux_sym_unquoted_path_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_multiline_string_token1] = aux_sym_multiline_string_token1,
  [anon_sym_DOLLAR_LBRACE_QMARK] = anon_sym_DOLLAR_LBRACE_QMARK,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_classpath] = anon_sym_classpath,
  [anon_sym_DOT2] = anon_sym_DOT,
  [anon_sym_ns] = anon_sym_ns,
  [anon_sym_nano] = anon_sym_nano,
  [anon_sym_nanos] = anon_sym_nanos,
  [anon_sym_nanosecond] = anon_sym_nanosecond,
  [anon_sym_nanoseconds] = anon_sym_nanoseconds,
  [anon_sym_us] = anon_sym_us,
  [anon_sym_micro] = anon_sym_micro,
  [anon_sym_micros] = anon_sym_micros,
  [anon_sym_microsecond] = anon_sym_microsecond,
  [anon_sym_microseconds] = anon_sym_microseconds,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_milli] = anon_sym_milli,
  [anon_sym_millis] = anon_sym_millis,
  [anon_sym_millisecond] = anon_sym_millisecond,
  [anon_sym_milliseconds] = anon_sym_milliseconds,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_second] = anon_sym_second,
  [anon_sym_seconds] = anon_sym_seconds,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_minute] = anon_sym_minute,
  [anon_sym_minutes] = anon_sym_minutes,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_hour] = anon_sym_hour,
  [anon_sym_hours] = anon_sym_hours,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_day] = anon_sym_day,
  [anon_sym_days] = anon_sym_days,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_week] = anon_sym_week,
  [anon_sym_weeks] = anon_sym_weeks,
  [anon_sym_mo] = anon_sym_mo,
  [anon_sym_month] = anon_sym_month,
  [anon_sym_months] = anon_sym_months,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_year] = anon_sym_year,
  [anon_sym_years] = anon_sym_years,
  [anon_sym_B] = anon_sym_B,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_kB] = anon_sym_kB,
  [anon_sym_kilobyte] = anon_sym_kilobyte,
  [anon_sym_kilobytes] = anon_sym_kilobytes,
  [anon_sym_MB] = anon_sym_MB,
  [anon_sym_megabyte] = anon_sym_megabyte,
  [anon_sym_megabytes] = anon_sym_megabytes,
  [anon_sym_GB] = anon_sym_GB,
  [anon_sym_gigabyte] = anon_sym_gigabyte,
  [anon_sym_gigabytes] = anon_sym_gigabytes,
  [anon_sym_TB] = anon_sym_TB,
  [anon_sym_terabyte] = anon_sym_terabyte,
  [anon_sym_terabytes] = anon_sym_terabytes,
  [anon_sym_PB] = anon_sym_PB,
  [anon_sym_petabyte] = anon_sym_petabyte,
  [anon_sym_petabytes] = anon_sym_petabytes,
  [anon_sym_EB] = anon_sym_EB,
  [anon_sym_exabyte] = anon_sym_exabyte,
  [anon_sym_exabytes] = anon_sym_exabytes,
  [anon_sym_ZB] = anon_sym_ZB,
  [anon_sym_zettabyte] = anon_sym_zettabyte,
  [anon_sym_zettabytes] = anon_sym_zettabytes,
  [anon_sym_YB] = anon_sym_YB,
  [anon_sym_yottabyte] = anon_sym_yottabyte,
  [anon_sym_yottabytes] = anon_sym_yottabytes,
  [anon_sym_K] = anon_sym_K,
  [anon_sym_k] = anon_sym_k,
  [anon_sym_Ki] = anon_sym_Ki,
  [anon_sym_KiB] = anon_sym_KiB,
  [anon_sym_kibibyte] = anon_sym_kibibyte,
  [anon_sym_kibibytes] = anon_sym_kibibytes,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_Mi] = anon_sym_Mi,
  [anon_sym_MiB] = anon_sym_MiB,
  [anon_sym_mebibyte] = anon_sym_mebibyte,
  [anon_sym_mebibytes] = anon_sym_mebibytes,
  [anon_sym_G] = anon_sym_G,
  [anon_sym_g] = anon_sym_g,
  [anon_sym_Gi] = anon_sym_Gi,
  [anon_sym_GiB] = anon_sym_GiB,
  [anon_sym_gibibyte] = anon_sym_gibibyte,
  [anon_sym_gibibytes] = anon_sym_gibibytes,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_Ti] = anon_sym_Ti,
  [anon_sym_TiB] = anon_sym_TiB,
  [anon_sym_tebibyte] = anon_sym_tebibyte,
  [anon_sym_tebibytes] = anon_sym_tebibytes,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_Pi] = anon_sym_Pi,
  [anon_sym_PiB] = anon_sym_PiB,
  [anon_sym_pebibyte] = anon_sym_pebibyte,
  [anon_sym_pebibytes] = anon_sym_pebibytes,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_Ei] = anon_sym_Ei,
  [anon_sym_EiB] = anon_sym_EiB,
  [anon_sym_exbibyte] = anon_sym_exbibyte,
  [anon_sym_exbibytes] = anon_sym_exbibytes,
  [anon_sym_Z] = anon_sym_Z,
  [anon_sym_z] = anon_sym_z,
  [anon_sym_Zi] = anon_sym_Zi,
  [anon_sym_ZiB] = anon_sym_ZiB,
  [anon_sym_zebibyte] = anon_sym_zebibyte,
  [anon_sym_zebibytes] = anon_sym_zebibytes,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_Yi] = anon_sym_Yi,
  [anon_sym_YiB] = anon_sym_YiB,
  [anon_sym_yobibyte] = anon_sym_yobibyte,
  [anon_sym_yobibytes] = anon_sym_yobibytes,
  [sym_document] = sym_document,
  [aux_sym__value] = aux_sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_path] = sym_path,
  [sym_value] = sym_value,
  [sym__pair_separator] = sym__pair_separator,
  [aux_sym__string_content] = aux_sym__string_content,
  [sym_unquoted_path] = sym_unquoted_path,
  [sym_multiline_string] = sym_multiline_string,
  [sym_substitution] = sym_substitution,
  [sym_include] = sym_include,
  [sym__resource_name] = sym__resource_name,
  [sym_unit] = sym_unit,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_unquoted_path_repeat1] = aux_sym_unquoted_path_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_unquoted_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_classpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nano] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nanos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nanosecond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nanoseconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_us] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_micro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_micros] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_microsecond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_microseconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_milli] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_millis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_millisecond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_milliseconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_second] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seconds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minutes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hours] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_day] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_days] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_week] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weeks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_month] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_months] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_years] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kilobyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kilobytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_megabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_megabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gigabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gigabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_terabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_terabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_petabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_petabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zettabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zettabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yottabyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yottabytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_K] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ki] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kibibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kibibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mebibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mebibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_G] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_g] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Gi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gibibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gibibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ti] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tebibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tebibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pebibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pebibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ei] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exbibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exbibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Zi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zebibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zebibytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Yi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yobibyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yobibytes] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__value] = {
    .visible = false,
    .named = false,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__pair_separator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__string_content] = {
    .visible = false,
    .named = false,
  },
  [sym_unquoted_path] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym__resource_name] = {
    .visible = false,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_path_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_unquoted_string_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '&'
      ? (c < '\n'
        ? c == 0
        : (c <= '\n' || (c >= '!' && c <= '$')))
      : (c <= '&' || (c < '/'
        ? (c >= '*' && c <= ',')
        : c <= '/')))
    : (c <= ':' || (c < '`'
      ? (c < '?'
        ? c == '='
        : (c <= '?' || (c >= '[' && c <= '^')))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool aux_sym_unquoted_path_token1_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '$' || (c < '*'
        ? c == '&'
        : (c <= ',' || (c >= '.' && c <= '/')))))
    : (c <= ':' || (c < '`'
      ? (c < '?'
        ? c == '='
        : (c <= '?' || (c >= '[' && c <= '^')))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool aux_sym_unquoted_path_token1_character_set_2(int32_t c) {
  return (c < ':'
    ? (c < '&'
      ? (c < '\n'
        ? c == 0
        : (c <= '\n' || (c >= '!' && c <= '$')))
      : (c <= '&' || (c < '.'
        ? (c >= '*' && c <= ',')
        : c <= '/')))
    : (c <= ':' || (c < '`'
      ? (c < '?'
        ? c == '='
        : (c <= '?' || (c >= '[' && c <= '^')))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool aux_sym_unquoted_path_token1_character_set_3(int32_t c) {
  return (c < '='
    ? (c < '&'
      ? (c < '\n'
        ? c == 0
        : (c <= '\n' || (c >= '!' && c <= '$')))
      : (c <= '&' || (c < ':'
        ? (c >= '*' && c <= ',')
        : c <= ':')))
    : (c <= '=' || (c < '`'
      ? (c < '['
        ? c == '?'
        : c <= '^')
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool aux_sym_unquoted_path_token1_character_set_4(int32_t c) {
  return (c < ':'
    ? (c < '&'
      ? (c < '\n'
        ? c == 0
        : (c <= '\n' || (c >= '!' && c <= '$')))
      : (c <= '&' || (c < '.'
        ? (c >= '*' && c <= ',')
        : c <= '.')))
    : (c <= ':' || (c < '`'
      ? (c < '?'
        ? c == '='
        : (c <= '?' || (c >= '[' && c <= '^')))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool aux_sym_unquoted_path_token1_character_set_5(int32_t c) {
  return (c < '='
    ? (c < '&'
      ? (c < '\n'
        ? c == 0
        : (c <= '\n' || (c >= '!' && c <= '$')))
      : (c <= '&' || (c < '.'
        ? (c >= '*' && c <= ',')
        : c <= ':')))
    : (c <= '=' || (c < '`'
      ? (c < '['
        ? c == '?'
        : c <= '^')
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool aux_sym_unquoted_path_token1_character_set_6(int32_t c) {
  return (c < '='
    ? (c < '!'
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= '$' || (c < '*'
        ? c == '&'
        : c <= ':')))
    : (c <= '=' || (c < '`'
      ? (c < '['
        ? c == '?'
        : c <= '^')
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(193);
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ')') ADVANCE(412);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') ADVANCE(194);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(234);
      if (lookahead == 'B') ADVANCE(489);
      if (lookahead == 'E') ADVANCE(604);
      if (lookahead == 'G') ADVANCE(568);
      if (lookahead == 'K') ADVANCE(546);
      if (lookahead == 'M') ADVANCE(558);
      if (lookahead == 'P') ADVANCE(592);
      if (lookahead == 'T') ADVANCE(580);
      if (lookahead == 'Y') ADVANCE(628);
      if (lookahead == 'Z') ADVANCE(616);
      if (lookahead == '[') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == ']') ADVANCE(199);
      if (lookahead == 'b') ADVANCE(492);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(466);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(570);
      if (lookahead == 'h') ADVANCE(460);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'k') ADVANCE(548);
      if (lookahead == 'm') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(594);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(448);
      if (lookahead == 't') ADVANCE(582);
      if (lookahead == 'u') ADVANCE(129);
      if (lookahead == 'w') ADVANCE(472);
      if (lookahead == 'y') ADVANCE(484);
      if (lookahead == 'z') ADVANCE(618);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(191)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(209);
      if (lookahead == '[') ADVANCE(198);
      if (lookahead == ']') ADVANCE(199);
      if (lookahead == 'f') ADVANCE(237);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == 't') ADVANCE(329);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(403);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == ')') ADVANCE(412);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(395);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == ')') ADVANCE(412);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(395);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(404);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(232);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(210);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(235);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(93);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 's') ADVANCE(417);
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(163);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(164);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(166);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(167);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(168);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(169);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(170);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(172);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(173);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(174);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(175);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(176);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(410);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(424);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(444);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(480);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(415);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 101:
      if (lookahead == 'k') ADVANCE(474);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 124:
      if (lookahead == 'q') ADVANCE(158);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 161:
      if (lookahead == 'y') ADVANCE(468);
      END_STATE();
    case 162:
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 163:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 164:
      if (lookahead == 'y') ADVANCE(140);
      END_STATE();
    case 165:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 167:
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 168:
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 169:
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 170:
      if (lookahead == 'y') ADVANCE(146);
      END_STATE();
    case 171:
      if (lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 172:
      if (lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 173:
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 174:
      if (lookahead == 'y') ADVANCE(150);
      END_STATE();
    case 175:
      if (lookahead == 'y') ADVANCE(151);
      END_STATE();
    case 176:
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 177:
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 178:
      if (lookahead == '{') ADVANCE(407);
      END_STATE();
    case 179:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 180:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(219);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(220);
      END_STATE();
    case 182:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 186:
      if (!aux_sym_unquoted_path_token1_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 187:
      if (!aux_sym_unquoted_path_token1_character_set_2(lookahead)) ADVANCE(389);
      END_STATE();
    case 188:
      if (!sym_unquoted_string_character_set_1(lookahead)) ADVANCE(377);
      END_STATE();
    case 189:
      if (eof) ADVANCE(193);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == ',') ADVANCE(194);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(209);
      if (lookahead == 'B') ADVANCE(490);
      if (lookahead == 'E') ADVANCE(603);
      if (lookahead == 'G') ADVANCE(567);
      if (lookahead == 'K') ADVANCE(545);
      if (lookahead == 'M') ADVANCE(557);
      if (lookahead == 'P') ADVANCE(591);
      if (lookahead == 'T') ADVANCE(579);
      if (lookahead == 'Y') ADVANCE(627);
      if (lookahead == 'Z') ADVANCE(615);
      if (lookahead == '[') ADVANCE(198);
      if (lookahead == ']') ADVANCE(199);
      if (lookahead == 'b') ADVANCE(491);
      if (lookahead == 'd') ADVANCE(465);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == 'f') ADVANCE(237);
      if (lookahead == 'g') ADVANCE(569);
      if (lookahead == 'h') ADVANCE(459);
      if (lookahead == 'k') ADVANCE(547);
      if (lookahead == 'm') ADVANCE(453);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == 'p') ADVANCE(593);
      if (lookahead == 's') ADVANCE(447);
      if (lookahead == 't') ADVANCE(581);
      if (lookahead == 'u') ADVANCE(331);
      if (lookahead == 'w') ADVANCE(471);
      if (lookahead == 'y') ADVANCE(483);
      if (lookahead == 'z') ADVANCE(617);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'X') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x')) ADVANCE(377);
      END_STATE();
    case 190:
      if (eof) ADVANCE(193);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == ',') ADVANCE(194);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(209);
      if (lookahead == '[') ADVANCE(198);
      if (lookahead == ']') ADVANCE(199);
      if (lookahead == 'f') ADVANCE(237);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == 't') ADVANCE(329);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(190)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 191:
      if (eof) ADVANCE(193);
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ')') ADVANCE(412);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') ADVANCE(194);
      if (lookahead == '.') ADVANCE(416);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(234);
      if (lookahead == 'B') ADVANCE(489);
      if (lookahead == 'E') ADVANCE(604);
      if (lookahead == 'G') ADVANCE(568);
      if (lookahead == 'K') ADVANCE(546);
      if (lookahead == 'M') ADVANCE(558);
      if (lookahead == 'P') ADVANCE(592);
      if (lookahead == 'T') ADVANCE(580);
      if (lookahead == 'Y') ADVANCE(628);
      if (lookahead == 'Z') ADVANCE(616);
      if (lookahead == '[') ADVANCE(198);
      if (lookahead == ']') ADVANCE(199);
      if (lookahead == 'b') ADVANCE(492);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(466);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(570);
      if (lookahead == 'h') ADVANCE(460);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'k') ADVANCE(548);
      if (lookahead == 'm') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(594);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(448);
      if (lookahead == 't') ADVANCE(582);
      if (lookahead == 'u') ADVANCE(129);
      if (lookahead == 'w') ADVANCE(472);
      if (lookahead == 'y') ADVANCE(484);
      if (lookahead == 'z') ADVANCE(618);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(191)
      END_STATE();
    case 192:
      if (eof) ADVANCE(193);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(207);
      if (lookahead == '[') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(192)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(385);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(386);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(388);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(389);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(389);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(180);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(185);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(212);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(213);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (!aux_sym_unquoted_path_token1_character_set_5(lookahead)) ADVANCE(389);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      if (!aux_sym_unquoted_path_token1_character_set_5(lookahead)) ADVANCE(389);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '"') ADVANCE(405);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '"') ADVANCE(230);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '+') ADVANCE(184);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '/') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(312);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 's') ADVANCE(418);
      if (lookahead == 'u') ADVANCE(314);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(247);
      if (lookahead == 'b') ADVANCE(302);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(328);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(250);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(254);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(256);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(258);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(261);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(262);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(359);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(360);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(361);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(362);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(363);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(364);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(365);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(366);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(367);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(368);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(369);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(370);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(371);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(372);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(373);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(374);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == 'g') ADVANCE(241);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(326);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(305);
      if (lookahead == 'g') ADVANCE(242);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 't') ADVANCE(243);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(307);
      if (lookahead == 'r') ADVANCE(244);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(308);
      if (lookahead == 't') ADVANCE(352);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(309);
      if (lookahead == 't') ADVANCE(353);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == 'n') ADVANCE(357);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(322);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(323);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(324);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(325);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(449);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(423);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(433);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(443);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(310);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(493);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(224);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(226);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(455);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(529);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(611);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(575);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(511);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(553);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(499);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(563);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(505);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(599);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(523);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(587);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(517);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(633);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(623);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(541);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(535);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'h') ADVANCE(479);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(439);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(248);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(249);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(251);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(253);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(255);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(257);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(259);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(260);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'k') ADVANCE(473);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(228);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(332);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(301);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(311);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'n') ADVANCE(275);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'n') ADVANCE(320);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'n') ADVANCE(276);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'n') ADVANCE(277);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'n') ADVANCE(278);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(419);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(429);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(315);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(317);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(318);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(319);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(252);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(461);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(485);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(356);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(321);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(428);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(282);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(300);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(280);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(283);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(284);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(285);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(286);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(287);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(288);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(289);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(290);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(291);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(292);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(293);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(294);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(295);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(296);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(297);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(298);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(299);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(245);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 't') ADVANCE(246);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'u') ADVANCE(327);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'u') ADVANCE(314);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'u') ADVANCE(281);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'u') ADVANCE(335);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(467);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(336);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(337);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(338);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(339);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(340);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(341);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(342);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(343);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(344);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(345);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(346);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(347);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(348);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(349);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(350);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(351);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '+') ADVANCE(184);
      if (lookahead == '-') ADVANCE(387);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (!aux_sym_unquoted_path_token1_character_set_6(lookahead)) ADVANCE(389);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'c') ADVANCE(383);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'd') ADVANCE(400);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(409);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(186);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'l') ADVANCE(384);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(380);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(212);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(213);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (!aux_sym_unquoted_path_token1_character_set_5(lookahead)) ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      if (!aux_sym_unquoted_path_token1_character_set_5(lookahead)) ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(187);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == 'c') ADVANCE(396);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == 'c') ADVANCE(397);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(381);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(382);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 'n') ADVANCE(390);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 'n') ADVANCE(391);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == 'l') ADVANCE(398);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == 'l') ADVANCE(399);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == 'u') ADVANCE(392);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(401);
      if (lookahead == 'u') ADVANCE(393);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (lookahead == '/') ADVANCE(401);
      if (!aux_sym_unquoted_path_token1_character_set_4(lookahead)) ADVANCE(389);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_unquoted_path_token1);
      if (!aux_sym_unquoted_path_token1_character_set_2(lookahead)) ADVANCE(389);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_QMARK);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '?') ADVANCE(406);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_include);
      if (!aux_sym_unquoted_path_token1_character_set_1(lookahead)) ADVANCE(389);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_classpath);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_ns);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_ns);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_nano);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(421);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_nano);
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_nanos);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(272);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_nanos);
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_nanosecond);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(426);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_nanosecond);
      if (lookahead == 's') ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_nanoseconds);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_nanoseconds);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_us);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_us);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_micro);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(431);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_micro);
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_micros);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(273);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_micros);
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_microsecond);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(436);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_microsecond);
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_microseconds);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_microseconds);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_ms);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_milli);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(441);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_milli);
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_millis);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(274);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_millis);
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(446);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_millisecond);
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_milliseconds);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(271);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(452);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_second);
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_seconds);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_seconds);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(477);
      if (lookahead == 's') ADVANCE(438);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(458);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_minute);
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_minutes);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_minutes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(354);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(464);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_hour);
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_hours);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_hours);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(358);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(470);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_day);
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_days);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_days);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(279);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_w);
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(476);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_week);
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_weeks);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_weeks);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_mo);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'n') ADVANCE(333);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_mo);
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(482);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_month);
      if (lookahead == 's') ADVANCE(481);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_months);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_months);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(268);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(488);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 's') ADVANCE(487);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_years);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_years);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(334);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(496);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(495);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_kB);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_kB);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_kilobyte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(502);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_kilobyte);
      if (lookahead == 's') ADVANCE(501);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_kilobytes);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_kilobytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_MB);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_MB);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_megabyte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(508);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_megabyte);
      if (lookahead == 's') ADVANCE(507);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_megabytes);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_megabytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_GB);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_GB);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_gigabyte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(514);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_gigabyte);
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_gigabytes);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_gigabytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_TB);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_TB);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_terabyte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(520);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_terabyte);
      if (lookahead == 's') ADVANCE(519);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_terabytes);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_terabytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_PB);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_PB);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_petabyte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(526);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_petabyte);
      if (lookahead == 's') ADVANCE(525);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_petabytes);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_petabytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_EB);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_EB);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_exabyte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(532);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_exabyte);
      if (lookahead == 's') ADVANCE(531);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_exabytes);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_exabytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_ZB);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_ZB);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_zettabyte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(538);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_zettabyte);
      if (lookahead == 's') ADVANCE(537);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_zettabytes);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_zettabytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_YB);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_YB);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_yottabyte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(544);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_yottabyte);
      if (lookahead == 's') ADVANCE(543);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_yottabytes);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_yottabytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_K);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(549);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_K);
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(264);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead == 'B') ADVANCE(497);
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_Ki);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(552);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_Ki);
      if (lookahead == 'B') ADVANCE(551);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_KiB);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_KiB);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_kibibyte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(556);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_kibibyte);
      if (lookahead == 's') ADVANCE(555);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_kibibytes);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_kibibytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(559);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_M);
      if (lookahead == 'B') ADVANCE(503);
      if (lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_Mi);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(562);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_Mi);
      if (lookahead == 'B') ADVANCE(561);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_MiB);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_MiB);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_mebibyte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(566);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_mebibyte);
      if (lookahead == 's') ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_mebibytes);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_mebibytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_G);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(510);
      if (lookahead == 'i') ADVANCE(571);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_G);
      if (lookahead == 'B') ADVANCE(509);
      if (lookahead == 'i') ADVANCE(572);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(263);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_g);
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_Gi);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(574);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_Gi);
      if (lookahead == 'B') ADVANCE(573);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_GiB);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_GiB);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_gibibyte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(578);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_gibibyte);
      if (lookahead == 's') ADVANCE(577);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_gibibytes);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_gibibytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(516);
      if (lookahead == 'i') ADVANCE(583);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'B') ADVANCE(515);
      if (lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(356);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_Ti);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(586);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_Ti);
      if (lookahead == 'B') ADVANCE(585);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_TiB);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_TiB);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_tebibyte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(590);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_tebibyte);
      if (lookahead == 's') ADVANCE(589);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_tebibytes);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_tebibytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(522);
      if (lookahead == 'i') ADVANCE(595);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'B') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(266);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_Pi);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(598);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_Pi);
      if (lookahead == 'B') ADVANCE(597);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_PiB);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_PiB);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_pebibyte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(602);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_pebibyte);
      if (lookahead == 's') ADVANCE(601);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_pebibytes);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_pebibytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(528);
      if (lookahead == 'i') ADVANCE(607);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_E);
      if (lookahead == 'B') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(608);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'x') ADVANCE(239);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_Ei);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(610);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_Ei);
      if (lookahead == 'B') ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_EiB);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_EiB);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_exbibyte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(614);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_exbibyte);
      if (lookahead == 's') ADVANCE(613);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_exbibytes);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_exbibytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(534);
      if (lookahead == 'i') ADVANCE(619);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == 'B') ADVANCE(533);
      if (lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_z);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(269);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_z);
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_Zi);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(622);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_Zi);
      if (lookahead == 'B') ADVANCE(621);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_ZiB);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_ZiB);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_zebibyte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(626);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_zebibyte);
      if (lookahead == 's') ADVANCE(625);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_zebibytes);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_zebibytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(540);
      if (lookahead == 'i') ADVANCE(629);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == 'B') ADVANCE(539);
      if (lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_Yi);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 'B') ADVANCE(632);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_Yi);
      if (lookahead == 'B') ADVANCE(631);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_YiB);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_YiB);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_yobibyte);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == 's') ADVANCE(636);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_yobibyte);
      if (lookahead == 's') ADVANCE(635);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_yobibytes);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_yobibytes);
      if (lookahead == '/') ADVANCE(188);
      if (!aux_sym_unquoted_path_token1_character_set_3(lookahead)) ADVANCE(377);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 192},
  [2] = {.lex_state = 189},
  [3] = {.lex_state = 190},
  [4] = {.lex_state = 190},
  [5] = {.lex_state = 190},
  [6] = {.lex_state = 190},
  [7] = {.lex_state = 190},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 190},
  [17] = {.lex_state = 190},
  [18] = {.lex_state = 190},
  [19] = {.lex_state = 190},
  [20] = {.lex_state = 190},
  [21] = {.lex_state = 190},
  [22] = {.lex_state = 190},
  [23] = {.lex_state = 190},
  [24] = {.lex_state = 190},
  [25] = {.lex_state = 190},
  [26] = {.lex_state = 190},
  [27] = {.lex_state = 190},
  [28] = {.lex_state = 190},
  [29] = {.lex_state = 190},
  [30] = {.lex_state = 192},
  [31] = {.lex_state = 192},
  [32] = {.lex_state = 192},
  [33] = {.lex_state = 192},
  [34] = {.lex_state = 192},
  [35] = {.lex_state = 192},
  [36] = {.lex_state = 192},
  [37] = {.lex_state = 192},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 192},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 192},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 189},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 189},
  [57] = {.lex_state = 189},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 189},
  [60] = {.lex_state = 189},
  [61] = {.lex_state = 189},
  [62] = {.lex_state = 189},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 189},
  [65] = {.lex_state = 189},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 189},
  [68] = {.lex_state = 189},
  [69] = {.lex_state = 189},
  [70] = {.lex_state = 189},
  [71] = {.lex_state = 189},
  [72] = {.lex_state = 189},
  [73] = {.lex_state = 189},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 192},
  [76] = {.lex_state = 192},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE_QMARK] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_classpath] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [anon_sym_ns] = ACTIONS(1),
    [anon_sym_nano] = ACTIONS(1),
    [anon_sym_nanos] = ACTIONS(1),
    [anon_sym_nanosecond] = ACTIONS(1),
    [anon_sym_nanoseconds] = ACTIONS(1),
    [anon_sym_us] = ACTIONS(1),
    [anon_sym_micro] = ACTIONS(1),
    [anon_sym_micros] = ACTIONS(1),
    [anon_sym_microsecond] = ACTIONS(1),
    [anon_sym_microseconds] = ACTIONS(1),
    [anon_sym_ms] = ACTIONS(1),
    [anon_sym_milli] = ACTIONS(1),
    [anon_sym_millis] = ACTIONS(1),
    [anon_sym_millisecond] = ACTIONS(1),
    [anon_sym_milliseconds] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_second] = ACTIONS(1),
    [anon_sym_seconds] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_minute] = ACTIONS(1),
    [anon_sym_minutes] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_hour] = ACTIONS(1),
    [anon_sym_hours] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_day] = ACTIONS(1),
    [anon_sym_days] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_week] = ACTIONS(1),
    [anon_sym_weeks] = ACTIONS(1),
    [anon_sym_mo] = ACTIONS(1),
    [anon_sym_month] = ACTIONS(1),
    [anon_sym_months] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [anon_sym_years] = ACTIONS(1),
    [anon_sym_B] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_kB] = ACTIONS(1),
    [anon_sym_kilobyte] = ACTIONS(1),
    [anon_sym_kilobytes] = ACTIONS(1),
    [anon_sym_MB] = ACTIONS(1),
    [anon_sym_megabyte] = ACTIONS(1),
    [anon_sym_megabytes] = ACTIONS(1),
    [anon_sym_GB] = ACTIONS(1),
    [anon_sym_gigabyte] = ACTIONS(1),
    [anon_sym_gigabytes] = ACTIONS(1),
    [anon_sym_TB] = ACTIONS(1),
    [anon_sym_terabyte] = ACTIONS(1),
    [anon_sym_terabytes] = ACTIONS(1),
    [anon_sym_PB] = ACTIONS(1),
    [anon_sym_petabyte] = ACTIONS(1),
    [anon_sym_petabytes] = ACTIONS(1),
    [anon_sym_EB] = ACTIONS(1),
    [anon_sym_exabyte] = ACTIONS(1),
    [anon_sym_exabytes] = ACTIONS(1),
    [anon_sym_ZB] = ACTIONS(1),
    [anon_sym_zettabyte] = ACTIONS(1),
    [anon_sym_zettabytes] = ACTIONS(1),
    [anon_sym_YB] = ACTIONS(1),
    [anon_sym_yottabyte] = ACTIONS(1),
    [anon_sym_yottabytes] = ACTIONS(1),
    [anon_sym_K] = ACTIONS(1),
    [anon_sym_k] = ACTIONS(1),
    [anon_sym_Ki] = ACTIONS(1),
    [anon_sym_KiB] = ACTIONS(1),
    [anon_sym_kibibyte] = ACTIONS(1),
    [anon_sym_kibibytes] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_Mi] = ACTIONS(1),
    [anon_sym_MiB] = ACTIONS(1),
    [anon_sym_mebibyte] = ACTIONS(1),
    [anon_sym_mebibytes] = ACTIONS(1),
    [anon_sym_G] = ACTIONS(1),
    [anon_sym_g] = ACTIONS(1),
    [anon_sym_Gi] = ACTIONS(1),
    [anon_sym_GiB] = ACTIONS(1),
    [anon_sym_gibibyte] = ACTIONS(1),
    [anon_sym_gibibytes] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_Ti] = ACTIONS(1),
    [anon_sym_TiB] = ACTIONS(1),
    [anon_sym_tebibyte] = ACTIONS(1),
    [anon_sym_tebibytes] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_Pi] = ACTIONS(1),
    [anon_sym_PiB] = ACTIONS(1),
    [anon_sym_pebibyte] = ACTIONS(1),
    [anon_sym_pebibytes] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_Ei] = ACTIONS(1),
    [anon_sym_EiB] = ACTIONS(1),
    [anon_sym_exbibyte] = ACTIONS(1),
    [anon_sym_exbibytes] = ACTIONS(1),
    [anon_sym_Z] = ACTIONS(1),
    [anon_sym_z] = ACTIONS(1),
    [anon_sym_Zi] = ACTIONS(1),
    [anon_sym_ZiB] = ACTIONS(1),
    [anon_sym_zebibyte] = ACTIONS(1),
    [anon_sym_zebibytes] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_Yi] = ACTIONS(1),
    [anon_sym_YiB] = ACTIONS(1),
    [anon_sym_yobibyte] = ACTIONS(1),
    [anon_sym_yobibytes] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(90),
    [sym_object] = STATE(88),
    [sym_pair] = STATE(56),
    [sym_array] = STATE(88),
    [sym_string] = STATE(40),
    [sym_path] = STATE(50),
    [sym_unquoted_path] = STATE(40),
    [sym_include] = STATE(56),
    [aux_sym_path_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [aux_sym_unquoted_path_token1] = ACTIONS(15),
    [anon_sym_include] = ACTIONS(17),
  },
  [2] = {
    [sym_unit] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(21),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_null] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [sym_unquoted_string] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE_QMARK] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(21),
    [anon_sym_ns] = ACTIONS(25),
    [anon_sym_nano] = ACTIONS(25),
    [anon_sym_nanos] = ACTIONS(25),
    [anon_sym_nanosecond] = ACTIONS(25),
    [anon_sym_nanoseconds] = ACTIONS(25),
    [anon_sym_us] = ACTIONS(25),
    [anon_sym_micro] = ACTIONS(25),
    [anon_sym_micros] = ACTIONS(25),
    [anon_sym_microsecond] = ACTIONS(25),
    [anon_sym_microseconds] = ACTIONS(25),
    [anon_sym_ms] = ACTIONS(25),
    [anon_sym_milli] = ACTIONS(25),
    [anon_sym_millis] = ACTIONS(25),
    [anon_sym_millisecond] = ACTIONS(25),
    [anon_sym_milliseconds] = ACTIONS(25),
    [anon_sym_s] = ACTIONS(25),
    [anon_sym_second] = ACTIONS(25),
    [anon_sym_seconds] = ACTIONS(25),
    [anon_sym_m] = ACTIONS(25),
    [anon_sym_minute] = ACTIONS(25),
    [anon_sym_minutes] = ACTIONS(25),
    [anon_sym_h] = ACTIONS(25),
    [anon_sym_hour] = ACTIONS(25),
    [anon_sym_hours] = ACTIONS(25),
    [anon_sym_d] = ACTIONS(25),
    [anon_sym_day] = ACTIONS(25),
    [anon_sym_days] = ACTIONS(25),
    [anon_sym_w] = ACTIONS(25),
    [anon_sym_week] = ACTIONS(25),
    [anon_sym_weeks] = ACTIONS(25),
    [anon_sym_mo] = ACTIONS(25),
    [anon_sym_month] = ACTIONS(25),
    [anon_sym_months] = ACTIONS(25),
    [anon_sym_y] = ACTIONS(25),
    [anon_sym_year] = ACTIONS(25),
    [anon_sym_years] = ACTIONS(25),
    [anon_sym_B] = ACTIONS(25),
    [anon_sym_b] = ACTIONS(25),
    [anon_sym_byte] = ACTIONS(25),
    [anon_sym_bytes] = ACTIONS(25),
    [anon_sym_kB] = ACTIONS(25),
    [anon_sym_kilobyte] = ACTIONS(25),
    [anon_sym_kilobytes] = ACTIONS(25),
    [anon_sym_MB] = ACTIONS(25),
    [anon_sym_megabyte] = ACTIONS(25),
    [anon_sym_megabytes] = ACTIONS(25),
    [anon_sym_GB] = ACTIONS(25),
    [anon_sym_gigabyte] = ACTIONS(25),
    [anon_sym_gigabytes] = ACTIONS(25),
    [anon_sym_TB] = ACTIONS(25),
    [anon_sym_terabyte] = ACTIONS(25),
    [anon_sym_terabytes] = ACTIONS(25),
    [anon_sym_PB] = ACTIONS(25),
    [anon_sym_petabyte] = ACTIONS(25),
    [anon_sym_petabytes] = ACTIONS(25),
    [anon_sym_EB] = ACTIONS(25),
    [anon_sym_exabyte] = ACTIONS(25),
    [anon_sym_exabytes] = ACTIONS(25),
    [anon_sym_ZB] = ACTIONS(25),
    [anon_sym_zettabyte] = ACTIONS(25),
    [anon_sym_zettabytes] = ACTIONS(25),
    [anon_sym_YB] = ACTIONS(25),
    [anon_sym_yottabyte] = ACTIONS(25),
    [anon_sym_yottabytes] = ACTIONS(25),
    [anon_sym_K] = ACTIONS(25),
    [anon_sym_k] = ACTIONS(25),
    [anon_sym_Ki] = ACTIONS(25),
    [anon_sym_KiB] = ACTIONS(25),
    [anon_sym_kibibyte] = ACTIONS(25),
    [anon_sym_kibibytes] = ACTIONS(25),
    [anon_sym_M] = ACTIONS(25),
    [anon_sym_Mi] = ACTIONS(25),
    [anon_sym_MiB] = ACTIONS(25),
    [anon_sym_mebibyte] = ACTIONS(25),
    [anon_sym_mebibytes] = ACTIONS(25),
    [anon_sym_G] = ACTIONS(25),
    [anon_sym_g] = ACTIONS(25),
    [anon_sym_Gi] = ACTIONS(25),
    [anon_sym_GiB] = ACTIONS(25),
    [anon_sym_gibibyte] = ACTIONS(25),
    [anon_sym_gibibytes] = ACTIONS(25),
    [anon_sym_T] = ACTIONS(25),
    [anon_sym_t] = ACTIONS(25),
    [anon_sym_Ti] = ACTIONS(25),
    [anon_sym_TiB] = ACTIONS(25),
    [anon_sym_tebibyte] = ACTIONS(25),
    [anon_sym_tebibytes] = ACTIONS(25),
    [anon_sym_P] = ACTIONS(25),
    [anon_sym_p] = ACTIONS(25),
    [anon_sym_Pi] = ACTIONS(25),
    [anon_sym_PiB] = ACTIONS(25),
    [anon_sym_pebibyte] = ACTIONS(25),
    [anon_sym_pebibytes] = ACTIONS(25),
    [anon_sym_E] = ACTIONS(25),
    [anon_sym_e] = ACTIONS(25),
    [anon_sym_Ei] = ACTIONS(25),
    [anon_sym_EiB] = ACTIONS(25),
    [anon_sym_exbibyte] = ACTIONS(25),
    [anon_sym_exbibytes] = ACTIONS(25),
    [anon_sym_Z] = ACTIONS(25),
    [anon_sym_z] = ACTIONS(25),
    [anon_sym_Zi] = ACTIONS(25),
    [anon_sym_ZiB] = ACTIONS(25),
    [anon_sym_zebibyte] = ACTIONS(25),
    [anon_sym_zebibytes] = ACTIONS(25),
    [anon_sym_Y] = ACTIONS(25),
    [anon_sym_Yi] = ACTIONS(25),
    [anon_sym_YiB] = ACTIONS(25),
    [anon_sym_yobibyte] = ACTIONS(25),
    [anon_sym_yobibytes] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      sym_number,
    ACTIONS(46), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(49), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(29), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    ACTIONS(43), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(3), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [46] = 11,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(54), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(64), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(3), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [91] = 13,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(72), 1,
      anon_sym_LF,
    ACTIONS(74), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_array_repeat1,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(64), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(3), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [140] = 13,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_LF,
    ACTIONS(80), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_array_repeat1,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(64), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(3), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [189] = 11,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(84), 1,
      anon_sym_LF,
    ACTIONS(68), 2,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(64), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(3), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [233] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(68), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    ACTIONS(94), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(92), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(6), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [275] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(68), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    ACTIONS(100), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(7), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [317] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(68), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    ACTIONS(100), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(7), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [359] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(68), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    ACTIONS(100), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(7), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [401] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(68), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    ACTIONS(108), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(5), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [443] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(68), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    ACTIONS(100), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(7), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [485] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(68), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(112), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(4), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [524] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_number,
    ACTIONS(68), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_DOLLAR_LBRACE_QMARK,
    ACTIONS(100), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
    STATE(7), 6,
      aux_sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_multiline_string,
      sym_substitution,
  [563] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(116), 14,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [587] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(120), 14,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [611] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(124), 14,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [635] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(128), 14,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [659] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(132), 14,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [683] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(136), 14,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [707] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(140), 14,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [731] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(144), 14,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [755] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(148), 14,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [779] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(152), 14,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [803] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(156), 14,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [827] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(160), 14,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [851] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(164), 14,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [875] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(29), 14,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_unquoted_string,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_DOLLAR_LBRACE_QMARK,
      anon_sym_DOLLAR_LBRACE,
  [899] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_path,
    STATE(64), 2,
      sym_pair,
      sym_include,
    STATE(40), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [930] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_path,
    STATE(57), 2,
      sym_pair,
      sym_include,
    STATE(40), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [961] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_path,
    STATE(57), 2,
      sym_pair,
      sym_include,
    STATE(40), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [992] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_path,
    STATE(73), 2,
      sym_pair,
      sym_include,
    STATE(40), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1023] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_path,
    STATE(57), 2,
      sym_pair,
      sym_include,
    STATE(40), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1054] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_path,
    STATE(57), 2,
      sym_pair,
      sym_include,
    STATE(40), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1085] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_path,
    STATE(57), 2,
      sym_pair,
      sym_include,
    STATE(40), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1116] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_path,
    STATE(57), 2,
      sym_pair,
      sym_include,
    STATE(40), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1147] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      aux_sym_unquoted_path_token1,
    STATE(38), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
    ACTIONS(182), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [1169] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(17), 1,
      anon_sym_include,
    STATE(50), 1,
      sym_path,
    STATE(57), 2,
      sym_pair,
      sym_include,
    STATE(40), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      aux_sym_unquoted_path_token1,
    STATE(38), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
    ACTIONS(190), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [1219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_unquoted_path_repeat1,
    ACTIONS(194), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      aux_sym_unquoted_path_token1,
  [1238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_unquoted_path_repeat1,
    ACTIONS(198), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      aux_sym_unquoted_path_token1,
  [1257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_unquoted_path_repeat1,
    ACTIONS(202), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      aux_sym_unquoted_path_token1,
  [1276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      aux_sym_unquoted_path_token1,
      anon_sym_RPAREN,
  [1290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      aux_sym_unquoted_path_token1,
      anon_sym_RPAREN,
  [1304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      aux_sym_unquoted_path_token1,
      anon_sym_DOT,
  [1318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(207), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [1333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym_unquoted_path_token1,
    ACTIONS(194), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [1348] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_required,
    STATE(72), 2,
      sym_string,
      sym__resource_name,
    ACTIONS(215), 3,
      anon_sym_url,
      anon_sym_file,
      anon_sym_classpath,
  [1367] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym__pair_separator,
    STATE(65), 1,
      sym_value,
    STATE(68), 1,
      sym_object,
    ACTIONS(217), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [1388] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      aux_sym_unquoted_path_token1,
    STATE(93), 1,
      sym_path,
    STATE(40), 3,
      sym_string,
      sym_unquoted_path,
      aux_sym_path_repeat1,
  [1409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(87), 2,
      sym_string,
      sym__resource_name,
    ACTIONS(219), 3,
      anon_sym_url,
      anon_sym_file,
      anon_sym_classpath,
  [1425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [1436] = 6,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_LF,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_document_repeat1,
  [1455] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      aux_sym_string_content_token1,
    ACTIONS(235), 1,
      sym_escape_sequence,
    STATE(63), 1,
      aux_sym__string_content,
  [1471] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_LF,
    STATE(71), 1,
      aux_sym_document_repeat1,
  [1487] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1499] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      aux_sym_string_content_token1,
    ACTIONS(247), 1,
      sym_escape_sequence,
    STATE(74), 1,
      aux_sym__string_content,
  [1515] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_LF,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_document_repeat1,
  [1531] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_LF,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_array_repeat1,
  [1547] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_LF,
    STATE(61), 1,
      aux_sym_array_repeat1,
  [1563] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_LF,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_document_repeat1,
  [1579] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
    ACTIONS(275), 1,
      aux_sym_string_content_token1,
    ACTIONS(277), 1,
      sym_escape_sequence,
    STATE(66), 1,
      aux_sym__string_content,
  [1595] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_LF,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_document_repeat1,
  [1611] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1623] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      aux_sym_string_content_token1,
    ACTIONS(294), 1,
      sym_escape_sequence,
    STATE(66), 1,
      aux_sym__string_content,
  [1639] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_LF,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_array_repeat1,
  [1655] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1667] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1679] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(313), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1691] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_LF,
    STATE(54), 1,
      aux_sym_document_repeat1,
  [1707] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1719] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_LF,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_document_repeat1,
  [1735] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym_string_content_token1,
    ACTIONS(277), 1,
      sym_escape_sequence,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym__string_content,
  [1751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_string,
  [1761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_string,
  [1771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
  [1778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [1785] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(333), 1,
      aux_sym_multiline_string_token1,
  [1792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
  [1799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
  [1806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
  [1813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
  [1820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
  [1827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
  [1834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
  [1841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
  [1848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
  [1855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym_unquoted_path_token1,
  [1862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
  [1869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
  [1876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
  [1883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
  [1890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
  [1897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
  [1904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 189,
  [SMALL_STATE(8)] = 233,
  [SMALL_STATE(9)] = 275,
  [SMALL_STATE(10)] = 317,
  [SMALL_STATE(11)] = 359,
  [SMALL_STATE(12)] = 401,
  [SMALL_STATE(13)] = 443,
  [SMALL_STATE(14)] = 485,
  [SMALL_STATE(15)] = 524,
  [SMALL_STATE(16)] = 563,
  [SMALL_STATE(17)] = 587,
  [SMALL_STATE(18)] = 611,
  [SMALL_STATE(19)] = 635,
  [SMALL_STATE(20)] = 659,
  [SMALL_STATE(21)] = 683,
  [SMALL_STATE(22)] = 707,
  [SMALL_STATE(23)] = 731,
  [SMALL_STATE(24)] = 755,
  [SMALL_STATE(25)] = 779,
  [SMALL_STATE(26)] = 803,
  [SMALL_STATE(27)] = 827,
  [SMALL_STATE(28)] = 851,
  [SMALL_STATE(29)] = 875,
  [SMALL_STATE(30)] = 899,
  [SMALL_STATE(31)] = 930,
  [SMALL_STATE(32)] = 961,
  [SMALL_STATE(33)] = 992,
  [SMALL_STATE(34)] = 1023,
  [SMALL_STATE(35)] = 1054,
  [SMALL_STATE(36)] = 1085,
  [SMALL_STATE(37)] = 1116,
  [SMALL_STATE(38)] = 1147,
  [SMALL_STATE(39)] = 1169,
  [SMALL_STATE(40)] = 1197,
  [SMALL_STATE(41)] = 1219,
  [SMALL_STATE(42)] = 1238,
  [SMALL_STATE(43)] = 1257,
  [SMALL_STATE(44)] = 1276,
  [SMALL_STATE(45)] = 1290,
  [SMALL_STATE(46)] = 1304,
  [SMALL_STATE(47)] = 1318,
  [SMALL_STATE(48)] = 1333,
  [SMALL_STATE(49)] = 1348,
  [SMALL_STATE(50)] = 1367,
  [SMALL_STATE(51)] = 1388,
  [SMALL_STATE(52)] = 1409,
  [SMALL_STATE(53)] = 1425,
  [SMALL_STATE(54)] = 1436,
  [SMALL_STATE(55)] = 1455,
  [SMALL_STATE(56)] = 1471,
  [SMALL_STATE(57)] = 1487,
  [SMALL_STATE(58)] = 1499,
  [SMALL_STATE(59)] = 1515,
  [SMALL_STATE(60)] = 1531,
  [SMALL_STATE(61)] = 1547,
  [SMALL_STATE(62)] = 1563,
  [SMALL_STATE(63)] = 1579,
  [SMALL_STATE(64)] = 1595,
  [SMALL_STATE(65)] = 1611,
  [SMALL_STATE(66)] = 1623,
  [SMALL_STATE(67)] = 1639,
  [SMALL_STATE(68)] = 1655,
  [SMALL_STATE(69)] = 1667,
  [SMALL_STATE(70)] = 1679,
  [SMALL_STATE(71)] = 1691,
  [SMALL_STATE(72)] = 1707,
  [SMALL_STATE(73)] = 1719,
  [SMALL_STATE(74)] = 1735,
  [SMALL_STATE(75)] = 1751,
  [SMALL_STATE(76)] = 1761,
  [SMALL_STATE(77)] = 1771,
  [SMALL_STATE(78)] = 1778,
  [SMALL_STATE(79)] = 1785,
  [SMALL_STATE(80)] = 1792,
  [SMALL_STATE(81)] = 1799,
  [SMALL_STATE(82)] = 1806,
  [SMALL_STATE(83)] = 1813,
  [SMALL_STATE(84)] = 1820,
  [SMALL_STATE(85)] = 1827,
  [SMALL_STATE(86)] = 1834,
  [SMALL_STATE(87)] = 1841,
  [SMALL_STATE(88)] = 1848,
  [SMALL_STATE(89)] = 1855,
  [SMALL_STATE(90)] = 1862,
  [SMALL_STATE(91)] = 1869,
  [SMALL_STATE(92)] = 1876,
  [SMALL_STATE(93)] = 1883,
  [SMALL_STATE(94)] = 1890,
  [SMALL_STATE(95)] = 1897,
  [SMALL_STATE(96)] = 1904,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__value, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(30),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(12),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(55),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(3),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(79),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__value, 2), SHIFT_REPEAT(51),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(58),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(42),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_path, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_path, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_path_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_path_repeat1, 2), SHIFT_REPEAT(89),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_path, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(15),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(15),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_content, 2), SHIFT_REPEAT(66),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2), SHIFT_REPEAT(66),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 5),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 5),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__resource_name, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__resource_name, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [339] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hocon(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
