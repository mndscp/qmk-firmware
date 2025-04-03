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
  C_PASTE,
  C_PASTEANDGO,
  C_SELECTALL,
  C_SCREENSHOT,
  C_ESCAPE,
};

const uint16_t PROGMEM COMBO_SMILEY_1[]   = {LT_C, KC_M, COMBO_END};      // :)
const uint16_t PROGMEM COMBO_SMILEY_2[]   = {LT_Q, KC_M, COMBO_END};      // :P
const uint16_t PROGMEM COMBO_SMILEY_3[]   = {KC_L, KC_M, COMBO_END};      // : D
const uint16_t PROGMEM COMBO_SMILEY_4[]   = {KC_L, LT_C, COMBO_END};      // :D
const uint16_t PROGMEM COMBO_SMILEY_5[]   = {KC_L, KC_K, COMBO_END};      // ^_^
const uint16_t PROGMEM COMBO_PAREN_L[]    = {HS_T, KC_G, COMBO_END};      // (
const uint16_t PROGMEM COMBO_PAREN_R[]    = {KC_P, HS_N, COMBO_END};      // )
const uint16_t PROGMEM COMBO_BRACK_L[]    = {KC_D, KC_V, COMBO_END};      // [
const uint16_t PROGMEM COMBO_BRACK_R[]    = {KC_B, KC_H, COMBO_END};      // ]
const uint16_t PROGMEM COMBO_CURLY_L[]    = {KC_M, KC_K, COMBO_END};      // {
const uint16_t PROGMEM COMBO_CURLY_R[]    = {KC_J, KC_F, COMBO_END};      // }
const uint16_t PROGMEM COMBO_EQUALS[]     = {KC_H, KC_COMM, COMBO_END};   // " = "
const uint16_t PROGMEM COMBO_FATARROW[]   = {KC_COMM, KC_DOT, COMBO_END}; // " => "
const uint16_t PROGMEM COMBO_COPY[]       = {KC_X, KC_D, COMBO_END};
const uint16_t PROGMEM COMBO_CUT[]        = {KC_X, KC_W, COMBO_END};
const uint16_t PROGMEM COMBO_PASTE[]      = {KC_W, KC_D, COMBO_END};
const uint16_t PROGMEM COMBO_PASTEANDGO[] = {KC_D, LT_ENT, COMBO_END};
const uint16_t PROGMEM COMBO_SELECTALL[]  = {LT_Z, KC_D, COMBO_END};
const uint16_t PROGMEM COMBO_SCREENSHOT[] = {KC_L, LT_C, KC_M, COMBO_END};
const uint16_t PROGMEM COMBO_ESCAPE[]     = {LT_A, HS_T, COMBO_END};

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
  [C_CUT]        = COMBO_ACTION(COMBO_CUT),
  [C_PASTE]      = COMBO_ACTION(COMBO_PASTE),
  [C_PASTEANDGO] = COMBO_ACTION(COMBO_PASTEANDGO),
  [C_SELECTALL]  = COMBO_ACTION(COMBO_SELECTALL),
  [C_SCREENSHOT] = COMBO_ACTION(COMBO_SCREENSHOT),
  [C_ESCAPE]     = COMBO_ACTION(COMBO_ESCAPE),
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
    case C_CUT:
      if (pressed) tap_code16(C(KC_X));
      break;
    case C_PASTE:
      if (pressed) tap_code16(C(KC_V));
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
    case C_SCREENSHOT:
      if (pressed) tap_code16(KC_PSCR);
      break;
    case C_ESCAPE:
      if (pressed) tap_code16(KC_ESC);
      break;
  }
};
