#include QMK_KEYBOARD_H

enum layers {
  L_COLEMAK,
  L_QWERTY,
  L_GAME,
  L_NAVIGATION,
  L_NUMPAD,
  L_SYMBOL,
  L_FUNCTION,
  L_Q,
  L_A
};

enum combos {
  C_SMILEY_1,
  C_SMILEY_2,
  C_SMILEY_3,
  C_SMILEY_4,
  C_PAREN_L,
  C_PAREN_R,
  C_CURLY_L,
  C_CURLY_R,
  C_BRACK_L,
  C_BRACK_R,
  C_ANGLE_L,
  C_ANGLE_R
};

enum macros {
  _CLMK = SAFE_RANGE,
  _QWRT,
  // GAME,
  // LOWER,
  // RAISE,
  // LEFT,
  // RIGHT,
  // AE,      // ä
  // OE,      // ö
  // UE,      // ü
  // SZ,      // ß
  // AE_CAP,  // Ä
  // OE_CAP,  // Ö
  // UE_CAP   // Ü
};

// Homerow mods Colemak
#define HA_4      LALT_T(KC_KP_4)
#define HC_5      LCTL_T(KC_KP_5)
#define HS_6      LSFT_T(KC_KP_6)
#define HA_R      LALT_T(KC_R)
#define HC_S      LCTL_T(KC_S)
#define HS_T      LSFT_T(KC_T)
#define HS_N      RSFT_T(KC_N)
#define HC_E      LCTL_T(KC_E)
#define HA_I      LALT_T(KC_I)

// Homerow mods QWERTY
#define HA_S      LALT_T(KC_S)
#define HC_D      LCTL_T(KC_D)
#define HS_F      LSFT_T(KC_F)
#define HS_J      RSFT_T(KC_J)
#define HC_K      LCTL_T(KC_K)
#define HA_L      LALT_T(KC_L)

// Hold-taps
#define FUN_PLY   LT(L_FUNCTION, KC_MPLY)
#define LT_A      LT(L_A, KC_A)
#define LT_Q      LT(L_Q, KC_Q)
#define NAV_BSP   LT(L_NAVIGATION, KC_BSPC)
#define NUM_ENT   LT(L_NUMPAD, KC_ENT)
#define SFT_F22   SFT_T(KC_F22)
#define SYM_SPC   LT(L_SYMBOL, KC_SPC)

// Custom keys
#define _BCKTAB   S(KC_TAB)
#define _COPY     C(KC_C)
#define _CUT      C(KC_X)
#define _DELWRD   C(KC_BSPC)
#define _LOCK     G(KC_L)
#define _PASTE    C(KC_V)
#define _REDO     C(KC_Y)
#define _UNDO     C(KC_Z)

#define C_A       C(KC_A)
#define C_B       C(KC_B)
#define C_C       C(KC_C)
#define C_D       C(KC_D)
#define C_E       C(KC_E)
#define C_F       C(KC_F)
#define C_G       C(KC_G)
#define C_H       C(KC_H)
#define C_Q       C(KC_Q)
#define C_R       C(KC_R)
#define C_S       C(KC_S)
#define C_T       C(KC_T)
#define C_V       C(KC_V)
#define C_W       C(KC_W)
#define C_X       C(KC_X)
#define C_Y       C(KC_Y)
#define C_Z       C(KC_Z)
#define C_0       C(KC_0)
#define C_BSPC    C(KC_BSPC)
#define C_COMM    C(KC_COMM)
#define C_DOT     C(KC_DOT)
#define C_EQL     C(KC_EQL)
#define C_MINS    C(KC_MINS)

#define S_A       S(KC_A)
#define S_B       S(KC_B)
#define S_C       S(KC_C)
#define S_D       S(KC_D)
#define S_E       S(KC_E)
#define S_F       S(KC_F)
#define S_G       S(KC_G)
#define S_H       S(KC_H)
#define S_I       S(KC_I)
#define S_J       S(KC_J)
#define S_K       S(KC_K)
#define S_L       S(KC_L)
#define S_M       S(KC_M)
#define S_N       S(KC_N)
#define S_O       S(KC_O)
#define S_P       S(KC_P)
#define S_Q       S(KC_Q)
#define S_R       S(KC_R)
#define S_S       S(KC_S)
#define S_T       S(KC_T)
#define S_U       S(KC_U)
#define S_V       S(KC_V)
#define S_W       S(KC_W)
#define S_X       S(KC_X)
#define S_Y       S(KC_Y)
#define S_Z       S(KC_Z)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_COLEMAK] = LAYOUT(
    LT_Q,    KC_L,    KC_C,    KC_M,    KC_K,             KC_J,    KC_F,    KC_U,    KC_Y,    KC_QUOT,
    LT_A,    HA_R,    HC_S,    HS_T,    KC_G,             KC_P,    HS_N,    HC_E,    HA_I,    KC_O,
    KC_Z,    KC_X,    KC_W,    KC_D,    KC_V,             KC_B,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
                               NUM_ENT, NAV_BSP,          SYM_SPC, FUN_PLY
  ),

  [L_QWERTY] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    HA_S,    HC_D,    HS_F,    KC_G,             KC_H,    HS_J,    HC_K,    HA_L,    KC_SCLN,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                               _______, _______,          _______, _______
  ),

  [L_GAME] = LAYOUT(
    KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,           _______, _______, _______, _______, _______,
    KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,           _______, _______, _______, _______, _______,
    KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,           _______, _______, _______, _______, _______,
                                 _______, KC_SPC,         _______, _______
  ),

  [L_NAVIGATION] = LAYOUT(
    _______, _______, _BCKTAB, KC_TAB,  _______,          _______, KC_BSPC, KC_UP,   KC_DEL,  _______,
    _______, KC_LALT, KC_LCTL, KC_LSFT, KC_PGUP,          KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,
    _______, _______, _UNDO,   _REDO,   KC_PGDN,          _______, _COPY,   _PASTE,  _CUT,    _______,
                               _______, _______,          _______, _______
  ),

  [L_NUMPAD] = LAYOUT(
    _______, _______, _______, _______, _______,          _______, KC_7,    KC_8,    KC_9,    _______,
    _______, KC_LALT, KC_LCTL, KC_LSFT, _______,          _______, KC_4,    KC_5,    KC_6,    KC_DOT,
    _______, _______, _______, _______, _______,          _______, KC_1,    KC_2,    KC_3,    KC_COMM,
                               _______, _______,          KC_0,    _______
  ),

  [L_SYMBOL] = LAYOUT(
    _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
                               _______, _______,          _______, _______
  ),

  [L_FUNCTION] = LAYOUT(
    _______, _______, _______, _______, _______,          _______, _______, _______, _______, _LOCK,
    _______, _______, _______, _______, _______,          _______, _CLMK,   _QWRT,   _______, _______,
    _______, _______, _______, _______, _______,          _______, _______, _______, _______, RESET,
                               _______, _______,          _______, _______
  ),

  [L_A] = LAYOUT(
    _______, C_W,     C_E,     C_R,     C_T,              _______, _______, _______, _______, _______,
    _______, C_S,     C_D,     C_F,     C_G,              _______, _______, _______, _______, _______,
    _______, C_X,     C_C,     KC_SPC,  _______,          _______, _______, _______, _______, _______,
                               _______, KC_LSFT,          _______, _______
  ),

  [L_Q] = LAYOUT(
    _______, KC_Q,    KC_W,    KC_E,    KC_R,             _______, _______, _______, _______, _______,
    _______, KC_A,    KC_S,    KC_D,    KC_F,             _______, _______, _______, _______, _______,
    _______, KC_Z,    KC_X,    KC_C,    KC_V,             _______, _______, _______, _______, _______,
                               KC_F21,  SFT_F22,          _______, _______
  )

  // [L_TEMPLATE] = LAYOUT(
  //   _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______,
  //                              _______, _______,     _______, _______
  // )
};

// Different tapping terms for slow fingers
// ----------------------------------------------------------------------------

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case HA_I:
    case HA_R:
      return TAPPING_TERM + 85;
    // case LT_A:
    //   return 100;
    // case LT_Q:
    //   return 120;
    default:
      return TAPPING_TERM;
  }
};

// Turn off key repeat for index shift keys
// ----------------------------------------------------------------------------

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case HS_N:
    case HS_T:
      return true;
    default:
      return false;
  }
};

// Wrap keypresses from layers in F keys for AHK
// ----------------------------------------------------------------------------

layer_state_t layer_state_set_user(layer_state_t state)
{
  static bool Q_is_pressed;

  if (layer_state_cmp(state, L_Q)) {
    register_code(KC_F14);
    Q_is_pressed = true;
  } else {
    if (Q_is_pressed) unregister_code(KC_F14);
    Q_is_pressed = false;
  }

  static bool A_is_pressed;

  if (layer_state_cmp(state, L_A)) {
    register_code(KC_F13);
    A_is_pressed = true;
  } else {
    if (A_is_pressed) unregister_code(KC_F13);
    A_is_pressed = false;
  }

  return state;
};

// Combos
// ----------------------------------------------------------------------------

const uint16_t PROGMEM COMBO_SMILEY_1[] = {KC_L, KC_M, COMBO_END};      // :)
const uint16_t PROGMEM COMBO_SMILEY_2[] = {KC_X, KC_D, COMBO_END};      // :P
const uint16_t PROGMEM COMBO_SMILEY_3[] = {KC_F, KC_Y, COMBO_END};      // : D
const uint16_t PROGMEM COMBO_SMILEY_4[] = {KC_H, KC_DOT, COMBO_END};    // :D
const uint16_t PROGMEM COMBO_PAREN_L[]  = {KC_L, KC_C, COMBO_END};      // (
const uint16_t PROGMEM COMBO_PAREN_R[]  = {KC_C, KC_M, COMBO_END};      // )
const uint16_t PROGMEM COMBO_BRACK_L[]  = {KC_X, KC_W, COMBO_END};      // [
const uint16_t PROGMEM COMBO_BRACK_R[]  = {KC_W, KC_D, COMBO_END};      // ]
const uint16_t PROGMEM COMBO_CURLY_L[]  = {KC_F, KC_U, COMBO_END};      // {
const uint16_t PROGMEM COMBO_CURLY_R[]  = {KC_U, KC_Y, COMBO_END};      // }
const uint16_t PROGMEM COMBO_ANGLE_L[]  = {KC_H, KC_COMM, COMBO_END};   // <
const uint16_t PROGMEM COMBO_ANGLE_R[]  = {KC_COMM, KC_DOT, COMBO_END}; // >

combo_t key_combos[COMBO_COUNT] = {
  [C_SMILEY_1] = COMBO_ACTION(COMBO_SMILEY_1),
  [C_SMILEY_2] = COMBO_ACTION(COMBO_SMILEY_2),
  [C_SMILEY_3] = COMBO_ACTION(COMBO_SMILEY_3),
  [C_SMILEY_4] = COMBO_ACTION(COMBO_SMILEY_4),
  [C_PAREN_L]  = COMBO_ACTION(COMBO_PAREN_L),
  [C_PAREN_R]  = COMBO_ACTION(COMBO_PAREN_R),
  [C_BRACK_L]  = COMBO_ACTION(COMBO_BRACK_L),
  [C_BRACK_R]  = COMBO_ACTION(COMBO_BRACK_R),
  [C_CURLY_L]  = COMBO_ACTION(COMBO_CURLY_L),
  [C_CURLY_R]  = COMBO_ACTION(COMBO_CURLY_R),
  [C_ANGLE_L]  = COMBO_ACTION(COMBO_ANGLE_L),
  [C_ANGLE_R]  = COMBO_ACTION(COMBO_ANGLE_R)
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
    case C_PAREN_L:
      if (pressed) {
        tap_code16(KC_LPRN);
      }
      break;
    case C_PAREN_R:
      if (pressed) {
        tap_code16(KC_RPRN);
      }
      break;
    case C_BRACK_L:
      if (pressed) {
        tap_code16(KC_LBRC);
      }
      break;
    case C_BRACK_R:
      if (pressed) {
        tap_code16(KC_RBRC);
      }
      break;
    case C_CURLY_L:
      if (pressed) {
        tap_code16(KC_LCBR);
      }
      break;
    case C_CURLY_R:
      if (pressed) {
        tap_code16(KC_RCBR);
      }
      break;
    case C_ANGLE_L:
      if (pressed) {
        tap_code16(KC_LABK);
      }
      break;
    case C_ANGLE_R:
      if (pressed) {
        tap_code16(KC_RABK);
      }
      break;
  }
};

// Always enable numlock
// ----------------------------------------------------------------------------

void led_set_keymap(uint8_t usb_led) {
  if (!(usb_led & (1<<USB_LED_NUM_LOCK))) {
    register_code(KC_NUMLOCK);
    unregister_code(KC_NUMLOCK);
  }
}

// Macros
// ----------------------------------------------------------------------------

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case _CLMK:
      if (record->event.pressed) {
        tap_code16(KC_HAEN);
        set_single_persistent_default_layer(L_COLEMAK);
      }
      return false;
      break;
    case _QWRT:
      if (record->event.pressed) {
        tap_code16(KC_HAEN);
        set_single_persistent_default_layer(L_QWERTY);
      }
      return false;
      break;
    // case LOWER:
    //   if (record->event.pressed) {
    //     layer_on(L_LOWER);
    //     update_tri_layer(L_LOWER, L_RAISE, L_ADJUST);
    //   } else {
    //     layer_off(L_LOWER);
    //     update_tri_layer(L_LOWER, L_RAISE, L_ADJUST);
    //   }
    //   return false;
    //   break;
    // case AE:
    //   if (record->event.pressed) {
    //     register_code(KC_LALT);
    //     tap_code16(KC_KP_1);
    //     tap_code16(KC_KP_3);
    //     tap_code16(KC_KP_2);
    //     unregister_code(KC_LALT);
    //   }
    //   return false;
    //   break;
    // case OE:
    //   if (record->event.pressed) {
    //     register_code(KC_LALT);
    //     tap_code16(KC_KP_1);
    //     tap_code16(KC_KP_4);
    //     tap_code16(KC_KP_8);
    //     unregister_code(KC_LALT);
    //   }
    //   return false;
    //   break;
    // case UE:
    //   if (record->event.pressed) {
    //     register_code(KC_LALT);
    //     tap_code16(KC_KP_0);
    //     tap_code16(KC_KP_2);
    //     tap_code16(KC_KP_5);
    //     tap_code16(KC_KP_2);
    //     unregister_code(KC_LALT);
    //   }
    //   return false;
    //   break;
    // case SZ:
    //   if (record->event.pressed) {
    //     register_code(KC_LALT);
    //     tap_code16(KC_KP_2);
    //     tap_code16(KC_KP_2);
    //     tap_code16(KC_KP_5);
    //     unregister_code(KC_LALT);
    //   }
    //   return false;
    //   break;
    // case AE_CAP:
    //   if (record->event.pressed) {
    //     register_code(KC_LALT);
    //     tap_code16(KC_KP_0);
    //     tap_code16(KC_KP_1);
    //     tap_code16(KC_KP_9);
    //     tap_code16(KC_KP_6);
    //     unregister_code(KC_LALT);
    //   }
    //   return false;
    //   break;
    // case OE_CAP:
    //   if (record->event.pressed) {
    //     register_code(KC_LALT);
    //     tap_code16(KC_KP_0);
    //     tap_code16(KC_KP_2);
    //     tap_code16(KC_KP_1);
    //     tap_code16(KC_KP_4);
    //     unregister_code(KC_LALT);
    //   }      return false;
    //   break;
    // case UE_CAP:
    //   if (record->event.pressed) {
    //     register_code(KC_LALT);
    //     tap_code16(KC_KP_0);
    //     tap_code16(KC_KP_2);
    //     tap_code16(KC_KP_2);
    //     tap_code16(KC_KP_0);
    //     unregister_code(KC_LALT);
    //   }
    //   return false;
    //   break;
    }

  return true;
};
