#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_halt_definition = 1,
  anon_sym_COLON = 2,
  anon_sym_POUND = 3,
  aux_sym_comment_definition_token1 = 4,
  sym_read_definition = 5,
  anon_sym_PUSH = 6,
  sym_sub_definition = 7,
  anon_sym_PRINT = 8,
  anon_sym_JUMP_DOTEQ_DOT0 = 9,
  anon_sym_JUMP_DOTGT_DOT0 = 10,
  sym_number_type = 11,
  sym_label_type = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_text_type_token1 = 14,
  sym_source_file = 15,
  sym__definition = 16,
  sym_label_definition = 17,
  sym_comment_definition = 18,
  sym_push_definition = 19,
  sym_print_definition = 20,
  sym_jump_eq_0_definition = 21,
  sym_jump_gt_0_definition = 22,
  sym_text_type = 23,
  aux_sym_source_file_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_halt_definition] = "halt_definition",
  [anon_sym_COLON] = ":",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_definition_token1] = "comment_definition_token1",
  [sym_read_definition] = "read_definition",
  [anon_sym_PUSH] = "PUSH",
  [sym_sub_definition] = "sub_definition",
  [anon_sym_PRINT] = "PRINT",
  [anon_sym_JUMP_DOTEQ_DOT0] = "JUMP.EQ.0",
  [anon_sym_JUMP_DOTGT_DOT0] = "JUMP.GT.0",
  [sym_number_type] = "number_type",
  [sym_label_type] = "label_type",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_text_type_token1] = "text_type_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_label_definition] = "label_definition",
  [sym_comment_definition] = "comment_definition",
  [sym_push_definition] = "push_definition",
  [sym_print_definition] = "print_definition",
  [sym_jump_eq_0_definition] = "jump_eq_0_definition",
  [sym_jump_gt_0_definition] = "jump_gt_0_definition",
  [sym_text_type] = "text_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_halt_definition] = sym_halt_definition,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_definition_token1] = aux_sym_comment_definition_token1,
  [sym_read_definition] = sym_read_definition,
  [anon_sym_PUSH] = anon_sym_PUSH,
  [sym_sub_definition] = sym_sub_definition,
  [anon_sym_PRINT] = anon_sym_PRINT,
  [anon_sym_JUMP_DOTEQ_DOT0] = anon_sym_JUMP_DOTEQ_DOT0,
  [anon_sym_JUMP_DOTGT_DOT0] = anon_sym_JUMP_DOTGT_DOT0,
  [sym_number_type] = sym_number_type,
  [sym_label_type] = sym_label_type,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_text_type_token1] = aux_sym_text_type_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_label_definition] = sym_label_definition,
  [sym_comment_definition] = sym_comment_definition,
  [sym_push_definition] = sym_push_definition,
  [sym_print_definition] = sym_print_definition,
  [sym_jump_eq_0_definition] = sym_jump_eq_0_definition,
  [sym_jump_gt_0_definition] = sym_jump_gt_0_definition,
  [sym_text_type] = sym_text_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_halt_definition] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_read_definition] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PUSH] = {
    .visible = true,
    .named = false,
  },
  [sym_sub_definition] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PRINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JUMP_DOTEQ_DOT0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JUMP_DOTGT_DOT0] = {
    .visible = true,
    .named = false,
  },
  [sym_number_type] = {
    .visible = true,
    .named = true,
  },
  [sym_label_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_type_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_label_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_push_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_print_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_jump_eq_0_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_jump_gt_0_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_text_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '"', 66,
        '#', 33,
        ':', 32,
        'H', 7,
        'J', 25,
        'P', 20,
        'R', 12,
        'S', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'B') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(19);
      if (lookahead == 'G') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'H') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'I') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'L') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'M') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 19:
      if (lookahead == 'Q') ADVANCE(3);
      END_STATE();
    case 20:
      if (lookahead == 'R') ADVANCE(14);
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'S') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'T') ADVANCE(4);
      END_STATE();
    case 25:
      if (lookahead == 'U') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'U') ADVANCE(9);
      END_STATE();
    case 27:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == 'H') ADVANCE(48);
      if (lookahead == 'J') ADVANCE(63);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == 'R') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_halt_definition);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_halt_definition);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_comment_definition_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_comment_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_read_definition);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_read_definition);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PUSH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PUSH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_sub_definition);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_sub_definition);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PRINT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PRINT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_JUMP_DOTEQ_DOT0);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_JUMP_DOTGT_DOT0);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'A') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'A') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'B') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'D') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'E') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'H') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'I') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'L') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'M') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'N') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'P') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'R') ADVANCE(54);
      if (lookahead == 'U') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'S') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'T') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'T') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'U') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_label_type);
      if (lookahead == 'U') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_label_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_text_type_token1);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_text_type_token1);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_halt_definition] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_read_definition] = ACTIONS(1),
    [anon_sym_PUSH] = ACTIONS(1),
    [sym_sub_definition] = ACTIONS(1),
    [anon_sym_PRINT] = ACTIONS(1),
    [anon_sym_JUMP_DOTEQ_DOT0] = ACTIONS(1),
    [anon_sym_JUMP_DOTGT_DOT0] = ACTIONS(1),
    [sym_number_type] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym__definition] = STATE(2),
    [sym_label_definition] = STATE(2),
    [sym_comment_definition] = STATE(2),
    [sym_push_definition] = STATE(2),
    [sym_print_definition] = STATE(2),
    [sym_jump_eq_0_definition] = STATE(2),
    [sym_jump_gt_0_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_halt_definition] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_read_definition] = ACTIONS(5),
    [anon_sym_PUSH] = ACTIONS(9),
    [sym_sub_definition] = ACTIONS(5),
    [anon_sym_PRINT] = ACTIONS(11),
    [anon_sym_JUMP_DOTEQ_DOT0] = ACTIONS(13),
    [anon_sym_JUMP_DOTGT_DOT0] = ACTIONS(15),
    [sym_label_type] = ACTIONS(17),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_label_definition] = STATE(3),
    [sym_comment_definition] = STATE(3),
    [sym_push_definition] = STATE(3),
    [sym_print_definition] = STATE(3),
    [sym_jump_eq_0_definition] = STATE(3),
    [sym_jump_gt_0_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_halt_definition] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_read_definition] = ACTIONS(21),
    [anon_sym_PUSH] = ACTIONS(9),
    [sym_sub_definition] = ACTIONS(21),
    [anon_sym_PRINT] = ACTIONS(11),
    [anon_sym_JUMP_DOTEQ_DOT0] = ACTIONS(13),
    [anon_sym_JUMP_DOTGT_DOT0] = ACTIONS(15),
    [sym_label_type] = ACTIONS(17),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_label_definition] = STATE(3),
    [sym_comment_definition] = STATE(3),
    [sym_push_definition] = STATE(3),
    [sym_print_definition] = STATE(3),
    [sym_jump_eq_0_definition] = STATE(3),
    [sym_jump_gt_0_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_halt_definition] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(28),
    [sym_read_definition] = ACTIONS(25),
    [anon_sym_PUSH] = ACTIONS(31),
    [sym_sub_definition] = ACTIONS(25),
    [anon_sym_PRINT] = ACTIONS(34),
    [anon_sym_JUMP_DOTEQ_DOT0] = ACTIONS(37),
    [anon_sym_JUMP_DOTGT_DOT0] = ACTIONS(40),
    [sym_label_type] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_JUMP_DOTEQ_DOT0,
      anon_sym_JUMP_DOTGT_DOT0,
    ACTIONS(48), 6,
      sym_halt_definition,
      sym_read_definition,
      anon_sym_PUSH,
      sym_sub_definition,
      anon_sym_PRINT,
      sym_label_type,
  [15] = 2,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_JUMP_DOTEQ_DOT0,
      anon_sym_JUMP_DOTGT_DOT0,
    ACTIONS(52), 6,
      sym_halt_definition,
      sym_read_definition,
      anon_sym_PUSH,
      sym_sub_definition,
      anon_sym_PRINT,
      sym_label_type,
  [30] = 2,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_JUMP_DOTEQ_DOT0,
      anon_sym_JUMP_DOTGT_DOT0,
    ACTIONS(56), 6,
      sym_halt_definition,
      sym_read_definition,
      anon_sym_PUSH,
      sym_sub_definition,
      anon_sym_PRINT,
      sym_label_type,
  [45] = 2,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_JUMP_DOTEQ_DOT0,
      anon_sym_JUMP_DOTGT_DOT0,
    ACTIONS(60), 6,
      sym_halt_definition,
      sym_read_definition,
      anon_sym_PUSH,
      sym_sub_definition,
      anon_sym_PRINT,
      sym_label_type,
  [60] = 2,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_JUMP_DOTEQ_DOT0,
      anon_sym_JUMP_DOTGT_DOT0,
    ACTIONS(64), 6,
      sym_halt_definition,
      sym_read_definition,
      anon_sym_PUSH,
      sym_sub_definition,
      anon_sym_PRINT,
      sym_label_type,
  [75] = 2,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_JUMP_DOTEQ_DOT0,
      anon_sym_JUMP_DOTGT_DOT0,
    ACTIONS(68), 6,
      sym_halt_definition,
      sym_read_definition,
      anon_sym_PUSH,
      sym_sub_definition,
      anon_sym_PRINT,
      sym_label_type,
  [90] = 2,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_JUMP_DOTEQ_DOT0,
      anon_sym_JUMP_DOTGT_DOT0,
    ACTIONS(72), 6,
      sym_halt_definition,
      sym_read_definition,
      anon_sym_PUSH,
      sym_sub_definition,
      anon_sym_PRINT,
      sym_label_type,
  [105] = 2,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_text_type,
  [112] = 1,
    ACTIONS(76), 1,
      aux_sym_comment_definition_token1,
  [116] = 1,
    ACTIONS(78), 1,
      sym_number_type,
  [120] = 1,
    ACTIONS(80), 1,
      sym_label_type,
  [124] = 1,
    ACTIONS(82), 1,
      sym_label_type,
  [128] = 1,
    ACTIONS(84), 1,
      anon_sym_COLON,
  [132] = 1,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
  [136] = 1,
    ACTIONS(88), 1,
      aux_sym_text_type_token1,
  [140] = 1,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 30,
  [SMALL_STATE(7)] = 45,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 75,
  [SMALL_STATE(10)] = 90,
  [SMALL_STATE(11)] = 105,
  [SMALL_STATE(12)] = 112,
  [SMALL_STATE(13)] = 116,
  [SMALL_STATE(14)] = 120,
  [SMALL_STATE(15)] = 124,
  [SMALL_STATE(16)] = 128,
  [SMALL_STATE(17)] = 132,
  [SMALL_STATE(18)] = 136,
  [SMALL_STATE(19)] = 140,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_definition, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_definition, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push_definition, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_definition, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_definition, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_definition, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_eq_0_definition, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump_eq_0_definition, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_gt_0_definition, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump_gt_0_definition, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_definition, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_definition, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_type, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_type, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [86] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_jan(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
