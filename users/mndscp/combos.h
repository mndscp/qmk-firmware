// Combos
// ----------------------------------------------------------------------------

enum combos {
  C_SMILEY_1,
  C_SMILEY_2,
  C_SMILEY_3,
  C_SMILEY_4,
  C_SMILEY_5,
  C_PAREN_L,
  C_PAREN_R,
  C_BRACK_L,
  C_BRACK_R,
  C_CURLY_L,
  C_CURLY_R,
  C_EQUALS,
  C_FATARROW,
  C_CUT,
  C_COPY,
  C_COPYALL,
  C_PASTE,
  C_PASTEALL,
  C_PASTEANDGO,
  C_SELECTALL,
  C_ESCAPE,
  // C_ESCAPE2,
  C_DELWORD,
  C_RELOAD,
  C_ALTTAB,
  C_WINTOBG,
  C_CLOSEWIN,
  C_TAB,
  // C_AE,
  // C_OE,
  // C_UE,
  // C_SZ,
};

// Snug
const uint16_t PROGMEM COMBO_SMILEY_1[]   = {LT_D, KC_M, COMBO_END};      // :)
const uint16_t PROGMEM COMBO_SMILEY_2[]   = {LT_X, KC_M, COMBO_END};      // :P
const uint16_t PROGMEM COMBO_SMILEY_3[]   = {KC_L, KC_M, COMBO_END};      // : D
const uint16_t PROGMEM COMBO_SMILEY_4[]   = {KC_L, LT_D, COMBO_END};      // :D
const uint16_t PROGMEM COMBO_SMILEY_5[]   = {KC_L, KC_B, COMBO_END};      // ^_^
const uint16_t PROGMEM COMBO_EQUALS[]     = {KC_H, KC_COMM, COMBO_END};   // " = "
const uint16_t PROGMEM COMBO_FATARROW[]   = {KC_COMM, KC_DOT, COMBO_END}; // " => "
const uint16_t PROGMEM COMBO_PAREN_L[]    = {LT_S, HS_C, COMBO_END};
const uint16_t PROGMEM COMBO_PAREN_R[]    = {LT_S, KC_G, COMBO_END};
const uint16_t PROGMEM COMBO_BRACK_L[]    = {LT_S, KC_W, COMBO_END};
const uint16_t PROGMEM COMBO_BRACK_R[]    = {LT_S, KC_V, COMBO_END};
const uint16_t PROGMEM COMBO_CURLY_L[]    = {LT_S, KC_M, COMBO_END};
const uint16_t PROGMEM COMBO_CURLY_R[]    = {LT_S, KC_B, COMBO_END};
const uint16_t PROGMEM COMBO_COPY[]       = {KC_J, KC_W, COMBO_END};
const uint16_t PROGMEM COMBO_COPYALL[]    = {LT_Z, KC_W, COMBO_END};
const uint16_t PROGMEM COMBO_CUT[]        = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM COMBO_PASTE[]      = {KC_K, KC_W, COMBO_END};
const uint16_t PROGMEM COMBO_PASTEALL[]   = {KC_W, KC_V, COMBO_END};
const uint16_t PROGMEM COMBO_PASTEANDGO[] = {KC_W, NAV_SFT, COMBO_END};
const uint16_t PROGMEM COMBO_SELECTALL[]  = {LT_Z, KC_K, COMBO_END};
const uint16_t PROGMEM COMBO_ESCAPE[]     = {LT_X, KC_L, COMBO_END};
// const uint16_t PROGMEM COMBO_ESCAPE2[]    = {LT_S, HS_C, COMBO_END};
const uint16_t PROGMEM COMBO_DELWORD[]    = {HS_N, KC_A, COMBO_END};
const uint16_t PROGMEM COMBO_RELOAD[]     = {HA_R, NAV_SFT, COMBO_END};
const uint16_t PROGMEM COMBO_ALTTAB[]     = {HA_R, KC_M, COMBO_END};
const uint16_t PROGMEM COMBO_WINTOBG[]    = {HA_R, KC_W, COMBO_END};
const uint16_t PROGMEM COMBO_CLOSEWIN[]   = {HC_T, KC_W, COMBO_END};
const uint16_t PROGMEM COMBO_TAB[]        = {HS_C, KC_G, COMBO_END};

// // CRST
// const uint16_t PROGMEM COMBO_SMILEY_1[]   = {LT_K, KC_M, COMBO_END};      // :)
// const uint16_t PROGMEM COMBO_SMILEY_2[]   = {LT_Q, KC_M, COMBO_END};      // :P
// const uint16_t PROGMEM COMBO_SMILEY_3[]   = {KC_L, KC_M, COMBO_END};      // : D
// const uint16_t PROGMEM COMBO_SMILEY_4[]   = {KC_L, LT_K, COMBO_END};      // :D
// const uint16_t PROGMEM COMBO_SMILEY_5[]   = {KC_L, KC_B, COMBO_END};      // ^_^
// const uint16_t PROGMEM COMBO_EQUALS[]     = {KC_H, KC_COMM, COMBO_END};   // " = "
// const uint16_t PROGMEM COMBO_FATARROW[]   = {KC_COMM, KC_DOT, COMBO_END}; // " => "
// const uint16_t PROGMEM COMBO_PAREN_L[]    = {LT_C, HS_T, COMBO_END};
// const uint16_t PROGMEM COMBO_PAREN_R[]    = {LT_C, KC_G, COMBO_END};
// const uint16_t PROGMEM COMBO_BRACK_L[]    = {LT_C, KC_D, COMBO_END};
// const uint16_t PROGMEM COMBO_BRACK_R[]    = {LT_C, KC_V, COMBO_END};
// const uint16_t PROGMEM COMBO_CURLY_L[]    = {LT_C, KC_M, COMBO_END};
// const uint16_t PROGMEM COMBO_CURLY_R[]    = {LT_C, KC_B, COMBO_END};
// const uint16_t PROGMEM COMBO_COPY[]       = {KC_X, KC_D, COMBO_END};
// const uint16_t PROGMEM COMBO_COPYALL[]    = {LT_Z, KC_D, COMBO_END};
// const uint16_t PROGMEM COMBO_CUT[]        = {KC_X, KC_W, COMBO_END};
// const uint16_t PROGMEM COMBO_PASTE[]      = {KC_W, KC_D, COMBO_END};
// const uint16_t PROGMEM COMBO_PASTEALL[]   = {KC_D, KC_V, COMBO_END};
// const uint16_t PROGMEM COMBO_PASTEANDGO[] = {KC_D, NAV_SPC, COMBO_END};
// const uint16_t PROGMEM COMBO_SELECTALL[]  = {LT_Z, KC_W, COMBO_END};
// const uint16_t PROGMEM COMBO_ESCAPE[]     = {LT_Q, KC_L, COMBO_END};
// // const uint16_t PROGMEM COMBO_ESCAPE2[]    = {LT_C, HS_T, COMBO_END};
// const uint16_t PROGMEM COMBO_DELWORD[]    = {HS_N, KC_A, COMBO_END};
// const uint16_t PROGMEM COMBO_RELOAD[]     = {HA_R, NAV_SPC, COMBO_END};
// const uint16_t PROGMEM COMBO_ALTTAB[]     = {HA_R, KC_M, COMBO_END};
// const uint16_t PROGMEM COMBO_WINTOBG[]    = {HA_R, KC_D, COMBO_END};
// const uint16_t PROGMEM COMBO_CLOSEWIN[]   = {HC_S, KC_D, COMBO_END};
// const uint16_t PROGMEM COMBO_TAB[]        = {HS_T, KC_G, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [C_SMILEY_1]   = COMBO_ACTION(COMBO_SMILEY_1),
  [C_SMILEY_2]   = COMBO_ACTION(COMBO_SMILEY_2),
  [C_SMILEY_3]   = COMBO_ACTION(COMBO_SMILEY_3),
  [C_SMILEY_4]   = COMBO_ACTION(COMBO_SMILEY_4),
  [C_SMILEY_5]   = COMBO_ACTION(COMBO_SMILEY_5),
  [C_PAREN_L]    = COMBO_ACTION(COMBO_PAREN_L),
  [C_PAREN_R]    = COMBO_ACTION(COMBO_PAREN_R),
  [C_BRACK_L]    = COMBO_ACTION(COMBO_BRACK_L),
  [C_BRACK_R]    = COMBO_ACTION(COMBO_BRACK_R),
  [C_CURLY_L]    = COMBO_ACTION(COMBO_CURLY_L),
  [C_CURLY_R]    = COMBO_ACTION(COMBO_CURLY_R),
  [C_EQUALS]     = COMBO_ACTION(COMBO_EQUALS),
  [C_FATARROW]   = COMBO_ACTION(COMBO_FATARROW),
  [C_COPY]       = COMBO_ACTION(COMBO_COPY),
  [C_COPYALL]    = COMBO_ACTION(COMBO_COPYALL),
  [C_CUT]        = COMBO_ACTION(COMBO_CUT),
  [C_PASTE]      = COMBO_ACTION(COMBO_PASTE),
  [C_PASTEALL]   = COMBO_ACTION(COMBO_PASTEALL),
  [C_PASTEANDGO] = COMBO_ACTION(COMBO_PASTEANDGO),
  [C_SELECTALL]  = COMBO_ACTION(COMBO_SELECTALL),
  [C_ESCAPE]     = COMBO_ACTION(COMBO_ESCAPE),
  // [C_ESCAPE2]    = COMBO_ACTION(COMBO_ESCAPE2),
  [C_DELWORD]    = COMBO_ACTION(COMBO_DELWORD),
  [C_RELOAD]     = COMBO_ACTION(COMBO_RELOAD),
  [C_ALTTAB]     = COMBO_ACTION(COMBO_ALTTAB),
  [C_WINTOBG]    = COMBO_ACTION(COMBO_WINTOBG),
  [C_CLOSEWIN]   = COMBO_ACTION(COMBO_CLOSEWIN),
  [C_TAB]        = COMBO_ACTION(COMBO_TAB),
  // [C_AE]         = COMBO_ACTION(COMBO_AE),
  // [C_OE]         = COMBO_ACTION(COMBO_OE),
  // [C_UE]         = COMBO_ACTION(COMBO_UE),
  // [C_SZ]         = COMBO_ACTION(COMBO_SZ),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case C_SMILEY_1:
      if (pressed) {
        tap_code16(KC_COLN);
        tap_code16(KC_RPRN);
      }

      break;
    case C_SMILEY_2:
      if (pressed) {
        tap_code16(KC_COLN);
        tap_code16(S(KC_P));
      }

      break;
    case C_SMILEY_3:
      if (pressed) {
        tap_code16(KC_COLN);
        tap_code16(KC_SPC);
        tap_code16(S(KC_D));
      }

      break;
    case C_SMILEY_4:
      if (pressed) {
        tap_code16(KC_COLN);
        tap_code16(S(KC_D));
      }

      break;
    case C_SMILEY_5:
      if (pressed) {
        tap_code16(KC_CIRC);
        tap_code16(KC_UNDS);
        tap_code16(KC_CIRC);
      }

      break;
    case C_PAREN_L:
      if (pressed) tap_code16(KC_LPRN);
      break;
    case C_PAREN_R:
      if (pressed) tap_code16(KC_RPRN);
      break;
    case C_BRACK_L:
      if (pressed) tap_code16(KC_LBRC);
      break;
    case C_BRACK_R:
      if (pressed) tap_code16(KC_RBRC);
      break;
    case C_CURLY_L:
      if (pressed) tap_code16(KC_LCBR);
      break;
    case C_CURLY_R:
      if (pressed) tap_code16(KC_RCBR);
      break;
    case C_EQUALS:
      if (pressed) {
        tap_code16(KC_SPACE);
        tap_code16(KC_EQL);
        tap_code16(KC_SPACE);
      }

      break;
    case C_FATARROW:
      if (pressed) {
        tap_code16(KC_SPACE);
        tap_code16(KC_EQL);
        tap_code16(KC_RABK);
        tap_code16(KC_SPACE);
      }

      break;
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
    // case C_ESCAPE2:
    //   if (pressed) tap_code16(KC_ESC);
    //   break;
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
    // case C_AE:
    //   if (pressed) {
    //     if ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT)) {
    //       unregister_code(KC_LSFT);
    //       register_code(KC_LALT);
    //       tap_code16(KC_KP_0);
    //       tap_code16(KC_KP_1);
    //       tap_code16(KC_KP_9);
    //       tap_code16(KC_KP_6);
    //       unregister_code(KC_LALT);
    //       register_code(KC_LSFT);
    //     } else {
    //       register_code(KC_LALT);
    //       tap_code16(KC_KP_1);
    //       tap_code16(KC_KP_3);
    //       tap_code16(KC_KP_2);
    //       unregister_code(KC_LALT);
    //     }
    //   }
    //   break;
    // case C_OE:
    //   if (pressed) {
    //     if ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT)) {
    //       unregister_code(KC_LSFT);
    //       register_code(KC_LALT);
    //       tap_code16(KC_KP_0);
    //       tap_code16(KC_KP_2);
    //       tap_code16(KC_KP_1);
    //       tap_code16(KC_KP_4);
    //       unregister_code(KC_LALT);
    //       register_code(KC_LSFT);
    //     } else {
    //       register_code(KC_LALT);
    //       tap_code16(KC_KP_1);
    //       tap_code16(KC_KP_4);
    //       tap_code16(KC_KP_8);
    //       unregister_code(KC_LALT);
    //     }
    //   }
    //   break;
    // case C_UE:
    //   if (pressed) {
    //     if ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT)) {
    //       unregister_code(KC_LSFT);
    //       register_code(KC_LALT);
    //       tap_code16(KC_KP_0);
    //       tap_code16(KC_KP_2);
    //       tap_code16(KC_KP_2);
    //       tap_code16(KC_KP_0);
    //       unregister_code(KC_LALT);
    //       register_code(KC_LSFT);
    //     } else {
    //       register_code(KC_LALT);
    //       tap_code16(KC_KP_0);
    //       tap_code16(KC_KP_2);
    //       tap_code16(KC_KP_5);
    //       tap_code16(KC_KP_2);
    //       unregister_code(KC_LALT);
    //     }
    //   }
    //   break;
    // case C_SZ:
    //   if (pressed) {
    //     register_code(KC_LALT);
    //     tap_code16(KC_KP_2);
    //     tap_code16(KC_KP_2);
    //     tap_code16(KC_KP_5);
    //     unregister_code(KC_LALT);
    //   }
    //   break;
  }
};

