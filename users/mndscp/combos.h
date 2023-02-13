// Combos
// ----------------------------------------------------------------------------

enum combos {
//   C_SMILEY_1,
//   C_SMILEY_2,
//   C_SMILEY_3,
//   C_SMILEY_4,
//   C_SMILEY_5,
//   C_SMILEY_6,
//   C_PAREN_L,
//   C_PAREN_R,
//   C_BRACK_L,
//   C_BRACK_R,
//   C_CURLY_L,
//   C_CURLY_R,
//   C_EQUALS,
//   C_FATARROW,
  C_CUT,
  C_COPY,
  C_COPYALL,
  C_PASTE,
  C_PASTEALL,
  C_PASTEANDGO,
  C_SELECTALL,
  C_ESCAPE,
  C_DELWORD,
  C_RELOAD,
  C_ALTTAB,
  C_WINTOBG,
  C_CLOSEWIN,
  C_TAB,
  C_SPACEPLAY,
  C_UPENTER,
  C_HOMEPATH,
  C_GRV,
  C_ENTER,
  C_PRNS,
  C_LPRN,
  C_RPRN,
  C_BRCS,
  C_LBRC,
  C_RBRC,
  C_CBRS,
  C_LCBR,
  C_RCBR,
//   C_ABKS,
//   C_LABK,
//   C_RABK,
};

// const uint16_t PROGMEM COMBO_SMILEY_1[]   = {LT_E, KC_R, COMBO_END};      // :)
// const uint16_t PROGMEM COMBO_SMILEY_2[]   = {KC_Q, KC_R, COMBO_END};      // :P
// const uint16_t PROGMEM COMBO_SMILEY_3[]   = {KC_W, KC_R, COMBO_END};      // : D
// const uint16_t PROGMEM COMBO_SMILEY_4[]   = {KC_W, LT_E, COMBO_END};      // :D
// const uint16_t PROGMEM COMBO_SMILEY_5[]   = {KC_Q, KC_T, COMBO_END};      // ^_^
// const uint16_t PROGMEM COMBO_SMILEY_6[]   = {KC_W, KC_T, COMBO_END};      // : DDD
// const uint16_t PROGMEM COMBO_EQUALS[]     = {KC_M, KC_COMM, COMBO_END};   // " = "
// const uint16_t PROGMEM COMBO_FATARROW[]   = {KC_COMM, KC_DOT, COMBO_END}; // " => "
const uint16_t PROGMEM COMBO_GRV[]        = {HS_J, KC_SCLN, COMBO_END};   // `
const uint16_t PROGMEM COMBO_HOMEPATH[]   = {KC_M, KC_UP, COMBO_END};   // ~/
// const uint16_t PROGMEM COMBO_PAREN_L[]    = {LT_A, HS_F, COMBO_END};
// const uint16_t PROGMEM COMBO_PAREN_R[]    = {LT_A, KC_G, COMBO_END};
// const uint16_t PROGMEM COMBO_BRACK_L[]    = {LT_A, KC_V, COMBO_END};
// const uint16_t PROGMEM COMBO_BRACK_R[]    = {LT_A, KC_B, COMBO_END};
// const uint16_t PROGMEM COMBO_CURLY_L[]    = {LT_A, KC_R, COMBO_END};
// const uint16_t PROGMEM COMBO_CURLY_R[]    = {LT_A, KC_T, COMBO_END};
const uint16_t PROGMEM COMBO_COPY[]       = {KC_X, KC_V, COMBO_END};
const uint16_t PROGMEM COMBO_COPYALL[]    = {LT_Z, KC_V, COMBO_END};
const uint16_t PROGMEM COMBO_CUT[]        = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM COMBO_PASTE[]      = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM COMBO_PASTEALL[]   = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM COMBO_PASTEANDGO[] = {KC_V, NAV_SPC, COMBO_END};
const uint16_t PROGMEM COMBO_SELECTALL[]  = {LT_Z, KC_C, COMBO_END};
const uint16_t PROGMEM COMBO_ESCAPE[]     = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM COMBO_DELWORD[]    = {HS_J, KC_QUOT, COMBO_END};
const uint16_t PROGMEM COMBO_RELOAD[]     = {HS_F, KC_W, COMBO_END};
const uint16_t PROGMEM COMBO_ALTTAB[]     = {HA_S, KC_V, COMBO_END};
const uint16_t PROGMEM COMBO_WINTOBG[]    = {HA_S, KC_R, COMBO_END};
const uint16_t PROGMEM COMBO_CLOSEWIN[]   = {HC_D, KC_V, COMBO_END};
const uint16_t PROGMEM COMBO_TAB[]        = {HS_F, KC_G, COMBO_END};
const uint16_t PROGMEM COMBO_SPACEPLAY[]  = {KC_0, KC_MPLY, COMBO_END};
const uint16_t PROGMEM COMBO_UPENTER[]    = {NAV_SPC, KC_C, COMBO_END};
const uint16_t PROGMEM COMBO_ENTER[]      = {NAV_SPC, HS_F, COMBO_END};

const uint16_t PROGMEM COMBO_PRNS[]       = {KC_W, KC_R, COMBO_END};        // ()
const uint16_t PROGMEM COMBO_LPRN[]       = {KC_W, LT_E, COMBO_END};        // (
const uint16_t PROGMEM COMBO_RPRN[]       = {LT_E, KC_R, COMBO_END};        // )

const uint16_t PROGMEM COMBO_BRCS[]       = {KC_U, KC_O, COMBO_END};        // []
const uint16_t PROGMEM COMBO_LBRC[]       = {KC_U, LT_I, COMBO_END};        // [
const uint16_t PROGMEM COMBO_RBRC[]       = {LT_I, KC_O, COMBO_END};        // ]

const uint16_t PROGMEM COMBO_CBRS[]       = {KC_M, KC_DOT, COMBO_END};      // {}
const uint16_t PROGMEM COMBO_LCBR[]       = {KC_M, KC_COMM, COMBO_END};     // {
const uint16_t PROGMEM COMBO_RCBR[]       = {KC_DOT, KC_COMM, COMBO_END};   // }

// const uint16_t PROGMEM COMBO_AKBS[]       = {HA_S, HS_F, COMBO_END};
// const uint16_t PROGMEM COMBO_LAKB[]       = {KC_M, KC_COMM, COMBO_END};
// const uint16_t PROGMEM COMBO_RAKB[]       = {KC_COMM, KC_DOT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
//   [C_SMILEY_1]   = COMBO_ACTION(COMBO_SMILEY_1),
//   [C_SMILEY_2]   = COMBO_ACTION(COMBO_SMILEY_2),
//   [C_SMILEY_3]   = COMBO_ACTION(COMBO_SMILEY_3),
//   [C_SMILEY_4]   = COMBO_ACTION(COMBO_SMILEY_4),
//   [C_SMILEY_5]   = COMBO_ACTION(COMBO_SMILEY_5),
//   [C_SMILEY_6]   = COMBO_ACTION(COMBO_SMILEY_6),
//   [C_PAREN_L]    = COMBO_ACTION(COMBO_PAREN_L),
//   [C_PAREN_R]    = COMBO_ACTION(COMBO_PAREN_R),
//   [C_BRACK_L]    = COMBO_ACTION(COMBO_BRACK_L),
//   [C_BRACK_R]    = COMBO_ACTION(COMBO_BRACK_R),
//   [C_CURLY_L]    = COMBO_ACTION(COMBO_CURLY_L),
//   [C_CURLY_R]    = COMBO_ACTION(COMBO_CURLY_R),
//   [C_EQUALS]     = COMBO_ACTION(COMBO_EQUALS),
//   [C_FATARROW]   = COMBO_ACTION(COMBO_FATARROW),
  [C_COPY]       = COMBO_ACTION(COMBO_COPY),
  [C_COPYALL]    = COMBO_ACTION(COMBO_COPYALL),
  [C_CUT]        = COMBO_ACTION(COMBO_CUT),
  [C_PASTE]      = COMBO_ACTION(COMBO_PASTE),
  [C_PASTEALL]   = COMBO_ACTION(COMBO_PASTEALL),
  [C_PASTEANDGO] = COMBO_ACTION(COMBO_PASTEANDGO),
  [C_SELECTALL]  = COMBO_ACTION(COMBO_SELECTALL),
  [C_ESCAPE]     = COMBO_ACTION(COMBO_ESCAPE),
  [C_DELWORD]    = COMBO_ACTION(COMBO_DELWORD),
  [C_RELOAD]     = COMBO_ACTION(COMBO_RELOAD),
  [C_ALTTAB]     = COMBO_ACTION(COMBO_ALTTAB),
  [C_WINTOBG]    = COMBO_ACTION(COMBO_WINTOBG),
  [C_CLOSEWIN]   = COMBO_ACTION(COMBO_CLOSEWIN),
  [C_TAB]        = COMBO_ACTION(COMBO_TAB),
  [C_SPACEPLAY]  = COMBO_ACTION(COMBO_SPACEPLAY),
  [C_UPENTER]    = COMBO_ACTION(COMBO_UPENTER),
  [C_HOMEPATH]   = COMBO_ACTION(COMBO_HOMEPATH),
  [C_GRV]        = COMBO_ACTION(COMBO_GRV),
  [C_ENTER]      = COMBO_ACTION(COMBO_ENTER),

  [C_PRNS]       = COMBO_ACTION(COMBO_PRNS),
  [C_LPRN]       = COMBO_ACTION(COMBO_LPRN),
  [C_RPRN]       = COMBO_ACTION(COMBO_RPRN),

  [C_BRCS]       = COMBO_ACTION(COMBO_BRCS),
  [C_LBRC]       = COMBO_ACTION(COMBO_LBRC),
  [C_RBRC]       = COMBO_ACTION(COMBO_RBRC),

  [C_CBRS]       = COMBO_ACTION(COMBO_CBRS),
  [C_LCBR]       = COMBO_ACTION(COMBO_LCBR),
  [C_RCBR]       = COMBO_ACTION(COMBO_RCBR),
//   [C_ABKS]       = COMBO_ACTION(COMBO_ABKS),
//   [C_LABK]       = COMBO_ACTION(COMBO_LABK),
//   [C_RABK]       = COMBO_ACTION(COMBO_RABK),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    // case C_SMILEY_1:
    //   if (pressed) {
    //     tap_code16(KC_COLN);
    //     tap_code16(KC_RPRN);
    //   }

    //   break;
    // case C_SMILEY_2:
    //   if (pressed) {
    //     tap_code16(KC_COLN);
    //     tap_code16(S(KC_P));
    //   }

    //   break;
    // case C_SMILEY_3:
    //   if (pressed) {
    //     tap_code16(KC_COLN);
    //     tap_code16(KC_SPC);
    //     tap_code16(S(KC_D));
    //   }

    //   break;
    // case C_SMILEY_4:
    //   if (pressed) {
    //     tap_code16(KC_COLN);
    //     tap_code16(S(KC_D));
    //   }

    //   break;
    // case C_SMILEY_5:
    //   if (pressed) {
    //     tap_code16(KC_CIRC);
    //     tap_code16(KC_UNDS);
    //     tap_code16(KC_CIRC);
    //   }

    //   break;
    // case C_SMILEY_6:
    //   if (pressed) {
    //     tap_code16(KC_COLN);
    //     tap_code16(KC_SPC);
    //     tap_code16(S(KC_D));
    //     tap_code16(S(KC_D));
    //     tap_code16(S(KC_D));
    //   }

    //   break;
    // case C_PAREN_L:
    //   if (pressed) tap_code16(KC_LPRN);
    //   break;
    // case C_PAREN_R:
    //   if (pressed) tap_code16(KC_RPRN);
    //   break;
    // case C_BRACK_L:
    //   if (pressed) tap_code16(KC_LBRC);
    //   break;
    // case C_BRACK_R:
    //   if (pressed) tap_code16(KC_RBRC);
    //   break;
    // case C_CURLY_L:
    //   if (pressed) tap_code16(KC_LCBR);
    //   break;
    // case C_CURLY_R:
    //   if (pressed) tap_code16(KC_RCBR);
    //   break;
    // case C_EQUALS:
    //   if (pressed) {
    //     tap_code16(KC_SPACE);
    //     tap_code16(KC_EQL);
    //     tap_code16(KC_SPACE);
    //   }

    //   break;
    // case C_FATARROW:
    //   if (pressed) {
    //     tap_code16(KC_SPACE);
    //     tap_code16(KC_EQL);
    //     tap_code16(KC_RABK);
    //     tap_code16(KC_SPACE);
    //   }

    //   break;
    case C_COPY:
      if (pressed) tap_code16(C(KC_C));
      break;
    case C_COPYALL:
      if (pressed) {
        tap_code16(C(KC_A));
        tap_code16(C(KC_C));
      }

      break;
    case C_CUT:
      if (pressed) tap_code16(C(KC_X));
      break;
    case C_PASTE:
      if (pressed) tap_code16(C(KC_V));
      break;
    case C_PASTEALL:
      if (pressed) {
        tap_code16(C(KC_A));
        tap_code16(C(KC_V));
      }

      break;
    case C_PASTEANDGO:
      if (pressed) {
        tap_code16(C(KC_V));
        tap_code16(KC_ENT);
      }

      break;
    case C_SELECTALL:
      if (pressed) tap_code16(C(KC_A));
      break;
    case C_ESCAPE:
      if (pressed) tap_code16(KC_ESC);
      break;
    case C_DELWORD:
      if (pressed) tap_code16(C(KC_BSPC));
      break;
    case C_RELOAD:
      if (pressed) tap_code16(C(KC_R));
      break;
    case C_ALTTAB:
      if (pressed) tap_code16(A(KC_TAB));
      break;
    case C_WINTOBG:
      if (pressed) tap_code16(A(KC_ESC));
      break;
    case C_CLOSEWIN:
      if (pressed) tap_code16(C(KC_W));
      break;
    case C_TAB:
      if (pressed) tap_code16(KC_TAB);
      break;
    case C_SPACEPLAY:
      if (pressed) {
        tap_code16(KC_SPC);
        tap_code16(KC_MPLY);
      }

      break;
    case C_UPENTER:
      if (pressed) {
        tap_code16(KC_UP);
        tap_code16(KC_ENTER);
      }

      break;
    case C_HOMEPATH:
      if (pressed) {
        tap_code16(S(KC_GRV));
        tap_code16(KC_SLSH);
      }

      break;
    case C_GRV:
      if (pressed) {
        tap_code16(KC_GRV);
      }

      break;
    case C_ENTER:
      if (pressed) {
        tap_code16(KC_ENTER);
      }

      break;
    case C_PRNS:
      if (pressed) {
        tap_code16(KC_LPRN);
        tap_code16(KC_RPRN);
      }

      break;
    case C_LPRN:
      if (pressed) {
        tap_code16(KC_LPRN);
      }

      break;
    case C_RPRN:
      if (pressed) {
        tap_code16(KC_RPRN);
      }

      break;
    case C_BRCS:
      if (pressed) {
        tap_code16(KC_LBRC);
        tap_code16(KC_RBRC);
      }

      break;
    case C_LBRC:
      if (pressed) {
        tap_code16(KC_LBRC);
      }

      break;
    case C_RBRC:
      if (pressed) {
        tap_code16(KC_RBRC);
      }

      break;
    case C_CBRS:
      if (pressed) {
        tap_code16(KC_LCBR);
        tap_code16(KC_RCBR);
      }

      break;
    case C_LCBR:
      if (pressed) {
        tap_code16(KC_LCBR);
      }

      break;
    case C_RCBR:
      if (pressed) {
        tap_code16(KC_RCBR);
      }

      break;
    // case C_ABKS:
    //   if (pressed) {
    //     tap_code16(KC_LABK);
    //     tap_code16(KC_RABK);
    //   }

    //   break;
    // case C_LABK:
    //   if (pressed) {
    //     tap_code16(KC_LABK);
    //   }

    //   break;
    // case C_RABK:
    //   if (pressed) {
    //     tap_code16(KC_RABK);
    //   }

    //   break;
  }
};

