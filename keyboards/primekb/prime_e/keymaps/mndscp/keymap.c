#include QMK_KEYBOARD_H

enum layers {
  L_COLEMAK_QI,
  L_QWERTY,
  L_NUMPAD,
  L_NAVIGATION,
  L_SYMBOL,
  L_FUNCTION,
  L_CAPS,
  L_TAB,
  L_CTRL
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
#define LT_A      LT(L_A, KC_A)
#define LT_CTRL   LT(L_CTRL, KC_LCTL)
#define LT_Q      LT(L_Q, KC_Q)
#define LT_TAB    LT(L_TAB, KC_TAB)
#define LT_Z      LT(L_Z, KC_Z)
#define LT_SLSH   LT(L_SLSH, KC_SLSH)
#define NAV_BSP   LT(L_NAVIGATION, KC_BSPC)
#define NAV_MIN   LT(L_NAVIGATION, KC_MINS)
#define NAV_SPC   LT(L_NAVIGATION, KC_SPC)
#define NUM_ENT   LT(L_NUMPAD, KC_ENT)
#define SFT_ENT   SFT_T(KC_ENT)
#define SFT_F22   SFT_T(KC_F22)
#define SFT_GRV   SFT_T(KC_GRV)
#define SFT_SPC   SFT_T(KC_SPC)
#define SFT_Z     SFT_T(KC_Z)
#define SYM_ESC   LT(L_SYMBOL, KC_ESC)
#define SYM_SPC   LT(L_SYMBOL, KC_SPC)

// Custom keys
#define _SFTTAB   S(KC_TAB)
#define _DELWRD   C(KC_BSPC)
#define _LOCK     G(KC_L)

#define C_BSPC    C(KC_BSPC)
#define C_COMM    C(KC_COMM)
#define C_DOT     C(KC_DOT)
#define C_EQL     C(KC_EQL)
#define C_MINS    C(KC_MINS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_COLEMAK_QI] = LAYOUT(
    LT_TAB,  KC_Q,    KC_L,    KC_C,    KC_M,    KC_K,    KC_J,    KC_F,    KC_U,    KC_Y,    KC_QUOT, KC_MINS, KC_BSPC,
    LT_CTRL, KC_A,    HA_R,    HC_S,    HS_T,    KC_G,    KC_P,    HS_N,    HC_E,    HA_I,    KC_O,    KC_ENT,
    SFT_Z,   KC_X,    KC_W,    KC_D,    KC_V,    KC_ESC,  KC_ESC,  KC_B,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_DEL,
    KC_LCTL, KC_LALT,                   NUM_ENT, NAV_SPC,          SYM_SPC, FUN_PLY,                   KC_LEFT, KC_RGHT
  ),

  [L_QWERTY] = LAYOUT(
    _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    _______, _______,
    _______, KC_A,    HA_S,    HC_D,    HS_F,    KC_G,    KC_H,    HS_J,    HC_K,    HA_L,    KC_QUOT, _______,
    _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______, KC_N,    KC_M,    _______, _______, _______, _______,
    _______, _______,                   _______, _______,          _______, _______,                   _______, _______
  ),

  [L_NUMPAD] = LAYOUT(
    _______, _______, _______, _______, _______, _______, KC_PLUS, KC_7,    KC_8,    KC_9,    KC_SLSH, _______, _______,
    _______, _______, _______, _______, _______, KC_ENT,  KC_MINS, KC_4,    KC_5,    KC_6,    KC_DOT,  _______,
    _______, _______, KC_BSPC, KC_DEL,  _______, _______, _______, KC_ASTR, KC_1,    KC_2,    KC_3,    KC_EQL,  _______,
    _______, _______,                   XXXXXXX, _______,          KC_0,    KC_SPC,                    _______, _______
  ),

  [L_NAVIGATION] = LAYOUT(
    _______, _______, _______, _SFTTAB, KC_TAB,  _SFTTAB, _______, KC_BSPC, KC_UP,   KC_DEL,  KC_DQUO, KC_UNDS, _______,
    _______, KC_ESC,  KC_LALT, KC_LCTL, KC_LSFT, KC_PGUP, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  _______,
    _______, _______, C(KC_Z), C(KC_Y), KC_PGDN, _______, _______, _______, C(KC_C), C(KC_V), C(KC_X), _______, _______,
    _______, _______,                   _______, XXXXXXX,          SYM_ESC, _______,                   _______, _______
  ),

  [L_SYMBOL] = LAYOUT(
    _______, _______, KC_SCLN, KC_EXLM, KC_TILD, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, KC_COLN, KC_QUES, SFT_GRV, _______, _______, M_AE,    M_OE,    M_UE,    M_SZ,    _______,
    KC_BSLS, KC_PIPE, KC_SLSH, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______,                   KC_UNDS, NAV_MIN,          XXXXXXX, _______,                   _______, _______
  ),

  [L_FUNCTION] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, M_CLMK,  M_QWRT,  _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______,                   _______, _______,          _______, XXXXXXX,                   _______, RESET
  ),

  [L_CAPS] = LAYOUT(
    _______, S(KC_Q), S(KC_L), S(KC_C), S(KC_M), S(KC_K), S(KC_J), S(KC_F), S(KC_U), S(KC_Y), KC_DQUO, KC_UNDS, _______,
    _______, S(KC_A), S(KC_R), S(KC_S), S(KC_T), S(KC_G), S(KC_P), S(KC_N), S(KC_E), S(KC_I), S(KC_O), _______,
    S(KC_Z), S(KC_X), S(KC_W), S(KC_D), S(KC_V), _______, _______, S(KC_B), S(KC_H), KC_LABK, KC_RABK, KC_QUES, _______,
    _______, _______,                   _______, XXXXXXX,          XXXXXXX, _______,                   _______, _______
  ),

  [L_TAB] = LAYOUT(
    _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______, _______, _______, _______, _______, _______, _LOCK,
    _______, KC_A,    HA_S,    HC_D,    HS_F,    _______, _______, _______, _______, _______, _______, _______,
    _______, KC_Z,    KC_X,    KC_C,    _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_PSCR,                   KC_F21,  SFT_F22,          _______, _______,                   _______, _______
  ),

  [L_CTRL] = LAYOUT(
    _______, C(KC_Q), C(KC_W), C(KC_E), C(KC_R), C(KC_T), C(KC_Y), _______, _______, _______, KC_DQUO, _______, C_BSPC,
    _______, C(KC_A), C(KC_S), C(KC_D), C(KC_F), C(KC_G), C(KC_H), _______, _______, _______, _______, _______,
    _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_B), _______, _______, _______, C_COMM,  C_DOT,   _______, C(KC_0), _______, _______,                   KC_BSPC, SFT_ENT,          _______, _______,                   C_MINS,  C_EQL
  )

  // [L_TEMPLATE] = LAYOUT(
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______,                   _______, _______,          _______, _______,                   _______, _______
  // ),
};

// Wrap keypresses from layers in F keys for AHK
// ----------------------------------------------------------------------------

layer_state_t layer_state_set_user(layer_state_t state) {
  static bool TAB_is_pressed;

  if (layer_state_cmp(state, L_TAB)) {
    register_code(KC_F14);
    TAB_is_pressed = true;
  } else {
    if (TAB_is_pressed) unregister_code(KC_F14);
    TAB_is_pressed = false;
  }

  static bool CTRL_is_pressed;

  if (layer_state_cmp(state, L_CTRL)) {
    register_code(KC_F13);
    CTRL_is_pressed = true;
  } else {
    if (CTRL_is_pressed) unregister_code(KC_F13);
    CTRL_is_pressed = false;
  }

  return update_tri_layer_state(state, L_NAVIGATION, L_SYMBOL, L_CAPS);
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
    case LT_CTRL:
      return 100;
    case LT_TAB:
      return 120;
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

// Combos
// ----------------------------------------------------------------------------

const uint16_t PROGMEM COMBO_SMILEY_1[] = {KC_L, KC_M, COMBO_END};      // :)
const uint16_t PROGMEM COMBO_SMILEY_2[] = {KC_W, KC_V, COMBO_END};      // :P
const uint16_t PROGMEM COMBO_SMILEY_3[] = {KC_F, KC_Y, COMBO_END};      // : D
const uint16_t PROGMEM COMBO_SMILEY_4[] = {KC_H, KC_DOT, COMBO_END};    // :D
const uint16_t PROGMEM COMBO_PAREN_L[]  = {KC_L, KC_C, COMBO_END};      // (
const uint16_t PROGMEM COMBO_PAREN_R[]  = {KC_C, KC_M, COMBO_END};      // )
const uint16_t PROGMEM COMBO_BRACK_L[]  = {KC_W, KC_D, COMBO_END};      // [
const uint16_t PROGMEM COMBO_BRACK_R[]  = {KC_D, KC_V, COMBO_END};      // ]
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
// Always enable numlock
// ----------------------------------------------------------------------------

void led_set_keymap(uint8_t usb_led) {
  if (!(usb_led & (1<<USB_LED_NUM_LOCK))) {
    register_code(KC_NUMLOCK);
    unregister_code(KC_NUMLOCK);
  }
}

// void matrix_init_user(void) {
//   // set CapsLock LED to output and low
//   setPinOutput(B1);
//   writePinLow(B1);
//   // set NumLock LED to output and low
//   setPinOutput(B2);
//   writePinLow(B2);
//   // set ScrollLock LED to output and low
//   setPinOutput(B3);
//   writePinLow(B3);
// }

// void matrix_scan_user(void) {

// }


// void led_set_user(uint8_t usb_led) {
//   if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {
//     writePinHigh(B2);
//   } else {
//     writePinLow(B2);
//   }
//   if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
//     writePinHigh(B1);
//   } else {
//     writePinLow(B1);
//   }
// }

// //function for layer indicator LED
// layer_state_t layer_state_set_user(layer_state_t state)
// {
//   if (get_highest_layer(state) == 1) {
//     writePinHigh(B3);
// 	} else {
// 		writePinLow(B3);
//   }

//   return state;
// }
