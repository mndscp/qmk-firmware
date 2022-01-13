#include QMK_KEYBOARD_H

enum layers {
  L_SNUG,
  L_SNUGX,
  L_QWERTY,
  L_NUMPAD,
  L_NAVIGATION,
  L_SYMBOL,
  L_FUNCTION,
  L_CAPS,
  L_TAB,
  L_CTRL,
  L_A,
  L_D,
  L_Q,
  L_Z,
  L_SLSH
};

// Mod and Layer keys
#define ALT_BSP   LALT_T(KC_BSPC)
#define ALT_DEL   LALT_T(KC_DEL)
#define ALT_ESC   LALT_T(KC_ESC)
#define ALT_SPC   LALT_T(KC_SPC)
#define CTL_BSP   LCTL_T(KC_BSPC)
#define CTL_ENT   LCTL_T(KC_ENT)
#define CTL_ESC   LCTL_T(KC_ESC)
#define CTL_SPC   LCTL_T(KC_SPC)
#define DF_DST    DF(L_DONTSTARVE)
#define FUN_ESC   LT(L_FUNCTION, KC_ESC)
#define FUN_PLY   LT(L_FUNCTION, KC_MPLY)
#define FUN_TAB   LT(L_FUNCTION, KC_TAB)
#define LT_A      LT(L_CTRL, KC_A)
#define LT_C      LT(L_NUMPAD, KC_C)
#define LT_D      LT(L_NUMPAD, KC_D)
#define LT_I      LT(L_A, KC_I)
#define LT_Q      LT(L_Q, KC_Q)
#define LT_S      LT(L_A, KC_S)
#define LT_SLSH   LT(L_SLSH, KC_SLSH)
#define LT_X      LT(L_Q, KC_X)
#define LT_Y      LT(L_Z, KC_Y)
#define LT_Z      LT(L_Z, KC_Z)
#define NAV_BSP   LT(L_NAVIGATION, KC_BSPC)
#define NAV_ENT   LT(L_NAVIGATION, KC_ENT)
#define NAV_MIN   LT(L_NAVIGATION, KC_MINS)
#define NAV_SPC   LT(L_NAVIGATION, KC_SPC)
#define NUM_BSP   LT(L_NUMPAD, KC_BSPC)
#define NUM_DEL   LT(L_NUMPAD, KC_DEL)
#define NUM_ENT   LT(L_NUMPAD, KC_ENT)
#define NUM_TAB   LT(L_NUMPAD, KC_TAB)
#define SFT_BSP   LSFT_T(KC_BSPC)
#define SFT_DEL   LSFT_T(KC_DEL)
#define SFT_ENT   LSFT_T(KC_ENT)
#define SFT_F22   LSFT_T(KC_F22)
#define SFT_GRV   LSFT_T(KC_GRV)
#define SFT_MIN   LSFT_T(KC_MINS)
#define SFT_QUO   LSFT_T(KC_QUOT)
#define SFT_SPC   LSFT_T(KC_SPC)
#define SFT_Z     LSFT_T(KC_Z)
#define SFT_TAB   LSFT_T(KC_TAB)
#define SYM_ESC   LT(L_SYMBOL, KC_ESC)
#define SYM_SPC   LT(L_SYMBOL, KC_SPC)
#define NAV_SFT   LT(L_NAVIGATION, XXXXXXX)
#define LT_CTRL   LT(L_CTRL, KC_LCTL)
#define LT_TAB    LT(L_TAB, KC_TAB)
#define LT_Z      LT(L_Z, KC_Z)

// Custom keys
#define C_BSPC    C(KC_BSPC)
#define C_COMM    C(KC_COMM)
#define C_DOT     C(KC_DOT)
#define C_EQL     C(KC_EQL)
#define C_MINS    C(KC_MINS)
#define LOCK      G(KC_L)
#define BACKTAB   S(KC_TAB)
#define ZOOMIN    C(KC_PLUS)
#define ZOOMOUT   C(KC_MINS)
#define EMOJI     G(KC_DOT)

#include "adaptivekeys.c"
#include "macros.h"
#include "mndscp.h"
#include "combos.h"

// Using a wrapper enables expanding of imported row definitions
#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_SNUG] = LAYOUT_wrapper(
    LT_TAB,  __________________SNUG_L1__________________, __________________SNUG_R1__________________, KC_MINS, KC_BSPC,
    LT_CTRL, __________________SNUG_L2__________________, __________________SNUG_R2__________________, KC_ENT,
    SFT_Z,   __________________SNUG_L3__________________, _______, __________________SNUG_R3__________________, KC_DEL,
    KC_LCTL, KC_LALT,                   NUM_ENT, NAV_SPC,          SYM_SPC, FUN_PLY,                   KC_LEFT, KC_RGHT
  ),

  [L_SNUGX] = LAYOUT_wrapper(
    LT_TAB,  __________________SNUG_L1__________________, __________________SNUG_R1__________________, KC_MINS, KC_BSPC,
    LT_CTRL, __________________SNUG_L2__________________, __________________SNUG_R2__________________, KC_ENT,
    SFT_Z,   __________________SNUG_L3__________________, _______, __________________SNUG_R3__________________, KC_DEL,
    KC_LCTL, KC_LALT,                   NUM_ENT, NAV_SPC,          SYM_SPC, FUN_PLY,                   KC_LEFT, KC_RGHT
  ),

  [L_QWERTY] = LAYOUT_wrapper(
    _______, _________________QWERTY_L1_________________, _________________QWERTY_R1_________________, _______, _______,
    _______, _________________QWERTY_L2_________________, _________________QWERTY_R2_________________, _______,
    _______, _________________QWERTY_L3_________________, _______, _________________QWERTY_R3_________________, _______,
    _______, _______,                   _______, _______,          _______, _______,                   _______, _______
  ),

  [L_NUMPAD] = LAYOUT_wrapper(
    _______, KC_EQL,  KC_7,    KC_8,    KC_9,    KC_ASTR, KC_ASTR, KC_7,    KC_8,    KC_9,    KC_EQL,  _______, _______,
    _______, KC_0,    KC_4,    KC_5,    KC_6,    KC_PLUS, KC_PLUS, KC_4,    KC_5,    KC_6,    KC_DOT,  _______,
    _______, KC_DOT,  KC_1,    KC_2,    KC_3,    KC_MINS, _______, KC_MINS, KC_1,    KC_2,    KC_3,    KC_SLSH, _______,
    _______, _______,                   XXXXXXX, SFT_ENT,          KC_0,    KC_SPC,                    _______, _______
  ),

  [L_NAVIGATION] = LAYOUT_wrapper(
    _______, _______________NAVIGATION_L1_______________, _______________NAVIGATION_R1_______________, KC_UNDS, _______,
    _______, _______________NAVIGATION_L2_______________, _______________NAVIGATION_R2_______________, _______,
    _______, _______________NAVIGATION_L3_______________, _______, _______________NAVIGATION_R3_______________, _______,
    _______, _______,                   EMOJI,   XXXXXXX,          SYM_ESC, _______,                   _______, _______
  ),

  [L_SYMBOL] = LAYOUT_wrapper(
    _______, _________________SYMBOL_L1_________________, _________________SYMBOL_R1_________________, _______, _______,
    _______, _________________SYMBOL_L2_________________, _________________SYMBOL_R2_________________, _______,
    KC_BSLS, _________________SYMBOL_L3_________________, _______, _________________SYMBOL_R3_________________, _______,
    _______, _______,                   KC_UNDS, NAV_ENT,          XXXXXXX, KC_TILD,                   _______, _______
  ),

  [L_FUNCTION] = LAYOUT_wrapper(
    _______, _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  RESET,   KC_F15,  KC_F16,  KC_F17,  _______, _______, LOCK,
    _______, _______, KC_F4,   KC_F5,   KC_F6,   KC_F11,  M_SNUX,  M_SNUG,  M_QWRT,  _______, _______, _______,
    _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F12,  _______, _______, ZOOMOUT, C(KC_0), ZOOMIN,  _______, _______,
    _______, _______,                   _______, _______,          KC_MPLY, XXXXXXX,                   _______, RESET
  ),

  [L_CAPS] = LAYOUT_wrapper(
    _______, _______________SNUG_CAPS_L1________________, _______________SNUG_CAPS_R1________________, KC_UNDS, _______,
    _______, _______________SNUG_CAPS_L2________________, _______________SNUG_CAPS_R2________________, _______,
    S(KC_Z), _______________SNUG_CAPS_L3________________, _______, _______________SNUG_CAPS_R3________________, _______,
    _______, _______,                   _______, XXXXXXX,          XXXXXXX, _______,                   _______, _______
  ),

  [L_TAB] = LAYOUT_wrapper(
    XXXXXXX, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______, _______, _______, _______, _______, _______, _______,
    _______, KC_A,    HA_S,    HC_D,    HS_F,    KC_G,    _______, _______, _______, _______, _______, _______,
    _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______, _______, _______, _______, _______, _______, _______,
    _______, KC_PSCR,                   KC_F21,  SFT_F22,          _______, _______,                   _______, _______
  ),

  [L_CTRL] = LAYOUT_wrapper(
    _______, C(KC_Q), C(KC_W), C(KC_E), C(KC_R), C(KC_T), C(KC_Y), _______, _______, _______, KC_DQUO, _______, C_BSPC,
    XXXXXXX, C(KC_A), C(KC_S), C(KC_D), C(KC_F), C(KC_G), C(KC_H), _______, _______, _______, _______, _______,
    _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_B), _______, _______, _______, C_COMM,  C_DOT,   _______, C(KC_0), _______, _______,                   ALT_SPC, SFT_ENT,          _______, _______,                   C_MINS,  C_EQL
  ),
  
  [L_A] = LAYOUT_wrapper(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______,                   _______, _______,          _______, _______,                   _______, _______
  ),

  [L_Q] = LAYOUT_wrapper(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______,                   _______, _______,          _______, _______,                   _______, _______
  ),

  [L_Z] = LAYOUT_wrapper(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______,                   _______, _______,          _______, _______,                   _______, _______
  ),

  [L_SLSH] = LAYOUT_wrapper(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______,                   _______, _______,          _______, _______,                   _______, _______
  )

  // [L_TEMPLATE] = LAYOUT_wrapper(
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

  static bool thumb2_is_pressed;

  if (layer_state_cmp(state, L_NAVIGATION)) {
    register_code(KC_F13);
    thumb2_is_pressed = true;
  } else {
    if (thumb2_is_pressed) unregister_code(KC_F13);
    thumb2_is_pressed = false;
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
      return TAPPING_TERM + 115;
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
    case LT_A:
    case HS_F:
    case HS_J:
    case HC_K:
    // case HS_W:
    case HS_N:
    case HS_T:
    case NUM_ENT:
    case SYM_SPC:
      return true;
    default:
      return false;
  }
};
