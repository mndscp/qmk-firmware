#include QMK_KEYBOARD_H

enum layers {
  L_COLEMAK_QI,
  L_QWERTY,
  L_DONTSTARVE,
  L_NUMPAD,
  L_NAVIGATION,
  L_SYMBOL,
  L_FUNCTION,
  L_CAPS,
  L_Q,
  L_A,
  L_Z,
  L_SLSH
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
  M_CLMK = SAFE_RANGE,
  M_QWRT,

  // Additional German letters
  M_AE,
  M_OE,
  M_UE,
  M_SZ
};

// Homerow mods Colemak-Qi
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

// Mod and Layer keys
#define FUN_PLY   LT(L_FUNCTION, KC_MPLY)
#define LT_Q      LT(L_Q, KC_Q)
#define LT_A      LT(L_A, KC_A)
#define LT_Z      LT(L_Z, KC_Z)
#define LT_SLSH   LT(L_SLSH, KC_SLSH)
#define NAV_BSP   LT(L_NAVIGATION, KC_BSPC)
#define NAV_MIN   LT(L_NAVIGATION, KC_MINS)
#define NUM_ENT   LT(L_NUMPAD, KC_ENT)
#define SFT_F22   SFT_T(KC_F22)
#define SFT_GRV   SFT_T(KC_GRV)
#define SFT_SPC   SFT_T(KC_SPC)
#define SYM_ESC   LT(L_SYMBOL, KC_ESC)
#define SYM_SPC   LT(L_SYMBOL, KC_SPC)

// Custom keys
#define _SFTTAB   S(KC_TAB)
#define _DELWRD   C(KC_BSPC)
#define _LOCK     G(KC_L)
#define _UNDO
#define DF_DST    DF(L_DONTSTARVE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_COLEMAK_QI] = LAYOUT(
    LT_Q,    KC_L,    KC_C,    KC_M,    KC_K,             KC_J,    KC_F,    KC_U,    KC_Y,    KC_QUOT,
    LT_A,    HA_R,    HC_S,    HS_T,    KC_G,             KC_P,    HS_N,    HC_E,    HA_I,    KC_O,
    LT_Z,    KC_X,    KC_W,    KC_D,    KC_V,             KC_B,    KC_H,    KC_COMM, KC_DOT,  LT_SLSH,
                               NUM_ENT, NAV_BSP,          SYM_SPC, FUN_PLY
  ),

  [L_QWERTY] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    HA_S,    HC_D,    HS_F,    KC_G,             KC_H,    HS_J,    HC_K,    HA_L,    KC_SCLN,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_N,    KC_M,    KC_COMM, KC_DOT,  LT_SLSH,
                               _______, _______,          _______, _______
  ),

  [L_DONTSTARVE] = LAYOUT(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,             _______, _______, _______, _______, _______,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,             _______, _______, _______, _______, _______,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,             _______, _______, _______, _______, _______,
                               KC_LALT, KC_SPC,           _______, _______
  ),

  [L_NUMPAD] = LAYOUT(
    _______, _______, _______, _______, _______,          KC_PLUS, KC_7,    KC_8,    KC_9,    KC_SLSH,
    _______, _______, _______, _______, KC_ENT,           KC_MINS, KC_4,    KC_5,    KC_6,    KC_DOT,
    RESET,   _______, KC_BSPC, KC_DEL,  _______,          KC_ASTR, KC_1,    KC_2,    KC_3,    KC_EQL,
                               XXXXXXX, _______,          KC_0,    KC_SPC
  ),

  [L_NAVIGATION] = LAYOUT(
    KC_ESC,  _______, _SFTTAB, KC_TAB,  _SFTTAB,          _______, KC_BSPC, KC_UP,   KC_DEL,  KC_DQUO,
    KC_ESC,  KC_LALT, KC_LCTL, KC_LSFT, KC_PGUP,          KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,
    _______, _______, C(KC_Z), C(KC_Y), KC_PGDN,          _______, C(KC_C), C(KC_V), C(KC_X), _______,
                               KC_PSCR, XXXXXXX,          SYM_ESC, _______
  ),

  [L_SYMBOL] = LAYOUT(
    _______, KC_SCLN, KC_EXLM, KC_TILD, _______,          _______, _______, _______, _______, _______,
    _______, KC_COLN, KC_QUES, SFT_GRV, _______,          _______, M_AE,    M_OE,    M_UE,    M_SZ,
    KC_BSLS, KC_PIPE, KC_SLSH, _______, _______,          _______, _______, _______, _______, _______,
                               _______, NAV_MIN,          XXXXXXX, _______
  ),

  [L_FUNCTION] = LAYOUT(
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,           _______, _______, _______, _______, _LOCK,
    _______, KC_F4,   KC_F5,   KC_F6,   KC_F11,           _______, M_CLMK,  M_QWRT,  DF_DST,  _______,
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F12,           _______, _______, _______, _______, RESET,
                               _______, _______,          _______, XXXXXXX
  ),

  [L_CAPS] = LAYOUT(
    S(KC_Q), S(KC_L), S(KC_C), S(KC_M), S(KC_K),          S(KC_J), S(KC_F), S(KC_U), S(KC_Y), KC_DQUO,
    S(KC_A), S(KC_R), S(KC_S), S(KC_T), S(KC_G),          S(KC_P), S(KC_N), S(KC_E), S(KC_I), S(KC_O),
    S(KC_Z), S(KC_X), S(KC_W), S(KC_D), S(KC_V),          S(KC_B), S(KC_H), KC_LABK, KC_RABK, KC_QUES,
                               _______, XXXXXXX,          XXXXXXX, _______
  ),

  [L_Q] = LAYOUT(
    XXXXXXX, KC_Q,    KC_W,    KC_E,    KC_R,             _______, _______, _______, _______, _______,
    _______, KC_A,    KC_S,    KC_D,    KC_F,             _______, _______, _______, _______, _______,
    _______, KC_Z,    KC_X,    KC_C,    KC_V,             _______, _______, _______, _______, _______,
                               KC_F21,  SFT_F22,          _______, _______
  ),

  [L_A] = LAYOUT(
    _______, C(KC_W), C(KC_E), C(KC_R), C(KC_T),          _______, _______, _______, _______, _______,
    XXXXXXX, C(KC_S), C(KC_D), C(KC_F), C(KC_G),          _______, _______, _______, _______, _______,
    _______, C(KC_X), C(KC_C), C(KC_V), C(KC_B),          _______, _______, _______, _______, _______,
                               _______, SFT_SPC,          _______, _______
  ),

  [L_Z] = LAYOUT(
    _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
    _______, _______, KC_UP,   _______, _______,          _______, _______, _______, _______, _______,
    XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,           _______, _______, _______, _______, _______,
                               KC_LSFT, KC_LCTL,          _______, _______
  ),

  [L_SLSH] = LAYOUT(
    _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,          _______, _______, KC_UP,   _______, _______,
    _______, _______, _______, _______, _______,          KC_DEL,  KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,
                               _______, _______,          KC_LCTL, KC_LSFT
  ),

  // [L_TEMPLATE] = LAYOUT(
  //   _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
  //                              _______, _______,          _______, _______
  // ),
};

// Different tapping terms for slow fingers
// ----------------------------------------------------------------------------

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case HA_I:
    case HA_L:
    case HA_R:
    case HA_S:
      return TAPPING_TERM + 85;
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

layer_state_t layer_state_set_user(layer_state_t state) {
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

  return update_tri_layer_state(state, L_NAVIGATION, L_SYMBOL, L_CAPS);
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
    case M_CLMK:
      if (record->event.pressed) {
        tap_code16(KC_HAEN);
        set_single_persistent_default_layer(L_COLEMAK_QI);
      }

      return false;
      break;
    case M_QWRT:
      if (record->event.pressed) {
        tap_code16(KC_HAEN);
        set_single_persistent_default_layer(L_QWERTY);
      }

      return false;
      break;
    case M_AE:
      if (record->event.pressed) {
        if ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT)) {
          unregister_code(KC_LSFT);
          register_code(KC_LALT);
          tap_code16(KC_KP_0);
          tap_code16(KC_KP_1);
          tap_code16(KC_KP_9);
          tap_code16(KC_KP_6);
          unregister_code(KC_LALT);
          register_code(KC_LSFT);
        } else {
          register_code(KC_LALT);
          tap_code16(KC_KP_1);
          tap_code16(KC_KP_3);
          tap_code16(KC_KP_2);
          unregister_code(KC_LALT);
        }
      }

      return false;
      break;
    case M_OE:
      if (record->event.pressed) {
        if ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT)) {
          unregister_code(KC_LSFT);
          register_code(KC_LALT);
          tap_code16(KC_KP_0);
          tap_code16(KC_KP_2);
          tap_code16(KC_KP_1);
          tap_code16(KC_KP_4);
          unregister_code(KC_LALT);
          register_code(KC_LSFT);
        } else {
          register_code(KC_LALT);
          tap_code16(KC_KP_1);
          tap_code16(KC_KP_4);
          tap_code16(KC_KP_8);
          unregister_code(KC_LALT);
        }
      }

      return false;
      break;
    case M_UE:
      if (record->event.pressed) {
        if ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT)) {
          unregister_code(KC_LSFT);
          register_code(KC_LALT);
          tap_code16(KC_KP_0);
          tap_code16(KC_KP_2);
          tap_code16(KC_KP_2);
          tap_code16(KC_KP_0);
          unregister_code(KC_LALT);
          register_code(KC_LSFT);
        } else {
          register_code(KC_LALT);
          tap_code16(KC_KP_0);
          tap_code16(KC_KP_2);
          tap_code16(KC_KP_5);
          tap_code16(KC_KP_2);
          unregister_code(KC_LALT);
        }
      }

      return false;
      break;
    case M_SZ:
      if (record->event.pressed) {
        register_code(KC_LALT);
        tap_code16(KC_KP_2);
        tap_code16(KC_KP_2);
        tap_code16(KC_KP_5);
        unregister_code(KC_LALT);
      }

      return false;
      break;
    }

  return true;
};
