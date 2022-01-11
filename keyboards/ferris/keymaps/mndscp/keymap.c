#include QMK_KEYBOARD_H

enum layers {
  L_COLEMAK_QIOU,
  L_SNUG,
  L_SNUGX,
  L_QWERTY,
  L_DONTSTARVE,
  L_NUMPAD,
  L_NAVIGATION,
  L_SYMBOL,
  L_FUNCTION,
  L_QIOUCAPS,
  L_SNUGCAPS,
  L_Q,
  L_A,
  L_Z,
  L_C,
  L_SLSH,
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
#define LT_A      LT(L_A, KC_A)
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
#define SFT_TAB   LSFT_T(KC_TAB)
#define SYM_ESC   LT(L_SYMBOL, KC_ESC)
#define SYM_SPC   LT(L_SYMBOL, KC_SPC)
#define NAV_SFT   LT(L_NAVIGATION, XXXXXXX)

// Custom keys
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
  [L_COLEMAK_QIOU] = LAYOUT_wrapper(
    ______________COLEMAK_QIOU_L1______________,          ______________COLEMAK_QIOU_R1______________,
    ______________COLEMAK_QIOU_L2______________,          ______________COLEMAK_QIOU_R2______________,
    ______________COLEMAK_QIOU_L3______________,          ______________COLEMAK_QIOU_R3______________,
                               NUM_ENT, NAV_SFT,          SYM_SPC, FUN_PLY
  ),

  [L_SNUG] = LAYOUT_wrapper(
    __________________SNUG_L1__________________,          __________________SNUG_R1__________________,
    __________________SNUG_L2__________________,          __________________SNUG_R2__________________,
    __________________SNUG_L3__________________,          __________________SNUG_R3__________________,
                               _______, _______,          _______, _______
  ),

  [L_SNUGX] = LAYOUT_wrapper(
    _________________SNUGX_L1__________________,          _________________SNUGX_R1__________________,
    _________________SNUGX_L2__________________,          _________________SNUGX_R2__________________,
    _________________SNUGX_L3__________________,          _________________SNUGX_R3__________________,
                               _______, _______,          _______, _______
  ),

  [L_QWERTY] = LAYOUT_wrapper(
    _________________QWERTY_L1_________________,          _________________QWERTY_R1_________________,
    _________________QWERTY_L2_________________,          _________________QWERTY_R2_________________,
    _________________QWERTY_L3_________________,          _________________QWERTY_R3_________________,
                               _______, _______,          _______, _______
  ),

  [L_DONTSTARVE] = LAYOUT_wrapper(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,             _______, _______, _______, _______, _______,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,             _______, _______, _______, _______, _______,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,             _______, _______, _______, _______, _______,
                               KC_LALT, KC_SPC,           _______, _______
  ),

  [L_NUMPAD] = LAYOUT_wrapper(
    KC_EQL,  KC_7,    KC_8,    KC_9,    KC_ASTR,          KC_ASTR, KC_7,    KC_8,    KC_9,    KC_EQL,
    KC_0,    KC_4,    KC_5,    KC_6,    KC_PLUS,          KC_PLUS, KC_4,    KC_5,    KC_6,    KC_DOT,
    KC_DOT,  KC_1,    KC_2,    KC_3,    KC_MINS,          KC_MINS, KC_1,    KC_2,    KC_3,    KC_SLSH,
                               XXXXXXX, SFT_ENT,          KC_0,    KC_BSPC
  ),

  [L_NAVIGATION] = LAYOUT_wrapper(
    _______________NAVIGATION_L1_______________,          _______________NAVIGATION_R1_______________,
    _______________NAVIGATION_L2_______________,          _______________NAVIGATION_R2_______________,
    _______________NAVIGATION_L3_______________,          _______________NAVIGATION_R3_______________,
                               EMOJI,   XXXXXXX,          SYM_ESC, _______
  ),

  [L_SYMBOL] = LAYOUT_wrapper(
    _________________SYMBOL_L1_________________,          _________________SYMBOL_R1_________________,
    _________________SYMBOL_L2_________________,          _________________SYMBOL_R2_________________,
    _________________SYMBOL_L3_________________,          _________________SYMBOL_R3_________________,
                               KC_UNDS, NAV_ENT,          XXXXXXX, KC_TILD
  ),

  [L_FUNCTION] = LAYOUT_wrapper(
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,           RESET,   KC_F15,  KC_F16,  KC_F17,  LOCK,
    _______, KC_F4,   KC_F5,   KC_F6,   KC_F11,           M_SNUX,  M_SNUG,  M_QWRT,  DF_DST,  _______,
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F12,           _______, ZOOMOUT, C(KC_0), ZOOMIN,  _______,
                               _______, _______,          KC_MPLY, XXXXXXX
  ),

  [L_QIOUCAPS] = LAYOUT_wrapper(
    ____________COLEMAK_QIOU_CAPS_L1___________,          ____________COLEMAK_QIOU_CAPS_R1___________,
    ____________COLEMAK_QIOU_CAPS_L2___________,          ____________COLEMAK_QIOU_CAPS_R2___________,
    ____________COLEMAK_QIOU_CAPS_L3___________,          ____________COLEMAK_QIOU_CAPS_R3___________,
                               _______, XXXXXXX,          XXXXXXX, _______
  ),

  [L_SNUGCAPS] = LAYOUT_wrapper(
    _______________SNUG_CAPS_L1________________,          _______________SNUG_CAPS_R1________________,
    _______________SNUG_CAPS_L2________________,          _______________SNUG_CAPS_R2________________,
    _______________SNUG_CAPS_L3________________,          _______________SNUG_CAPS_R3________________,
                               _______, XXXXXXX,          XXXXXXX, _______
  ),

  [L_Q] = LAYOUT_wrapper(
    XXXXXXX, KC_Q,    KC_W,    KC_E,    KC_R,             _______, _______, _______, _______, _______,
    _______, KC_A,    KC_S,    KC_D,    KC_F,             _______, _______, _______, _______, _______,
    _______, KC_Z,    KC_X,    KC_C,    KC_V,             _______, _______, _______, _______, _______,
                               KC_F21,  SFT_F22,          _______, _______
  ),

  [L_A] = LAYOUT_wrapper(
    _______, C(KC_Q), C(KC_W), C(KC_E), C(KC_R),          _______, _______, _______, _______, _______,
    XXXXXXX, C(KC_A), C(KC_S), C(KC_D), C(KC_F),          _______, _______, _______, _______, _______,
    _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V),          _______, _______, _______, _______, _______,
                               ALT_SPC, SFT_ENT,          _______, _______
  ),

  [L_Z] = LAYOUT_wrapper(
    _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
    _______, KC_BSPC, KC_UP,   KC_DEL,  _______,          _______, _______, _______, _______, _______,
    XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, _______,          _______, _______, _______, _______, _______,
                               KC_LSFT, CTL_SPC,          _______, _______
  ),

  [L_C] = LAYOUT_wrapper(
    _______, _______, XXXXXXX, _______, _______,          KC_ASTR, KC_7,    KC_8,    KC_9,    KC_EQL,
    _______, _______, _______, _______, _______,          KC_MINS, KC_4,    KC_5,    KC_6,    KC_PLUS,
    _______, _______, _______, _______, _______,          KC_SLSH, KC_1,    KC_2,    KC_3,    KC_EQL,
                               _______, _______,          KC_0,    KC_DOT
  ),

  [L_SLSH] = LAYOUT_wrapper(
    _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,          _______, KC_BSPC, KC_UP,   KC_DEL,  _______,
    _______, _______, _______, _______, _______,          _______, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,
                               _______, _______,          CTL_SPC, KC_LSFT
  )

  // [L_TEMPLATE] = LAYOUT_wrapper(
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
      return TAPPING_TERM + 115;
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

  static bool thumb2_is_pressed;

  if (layer_state_cmp(state, L_NAVIGATION)) {
    register_code(KC_F13);
    thumb2_is_pressed = true;
  } else {
    if (thumb2_is_pressed) unregister_code(KC_F13);
    thumb2_is_pressed = false;
  }

  // static bool A_is_pressed;

  // if (layer_state_cmp(state, L_A)) {
  //   register_code(KC_F13);
  //   A_is_pressed = true;
  // } else {
  //   if (A_is_pressed) unregister_code(KC_F13);
  //   A_is_pressed = false;
  // }

  return update_tri_layer_state(state, L_NAVIGATION, L_SYMBOL, L_SNUGCAPS);
  // return update_tri_layer_state(state, L_NAVIGATION, L_SYMBOL, L_QIOUCAPS);
};
