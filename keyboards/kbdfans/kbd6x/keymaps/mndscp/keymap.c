#include QMK_KEYBOARD_H

#define L_BASE    0
#define L_GAME    1
#define L_ESC     2
#define L_TAB     3
#define L_CAPS    4
#define L_A       5
#define L_E       6
#define L_I       7
#define L_SCLN    8

#define LT_ESC    LT(L_ESC, KC_ESC)
#define LT_TAB    LT(L_TAB, KC_TAB)
#define MO_CAPS   MO(L_CAPS)
#define LT_A      LT(L_A, KC_A)
#define LT_E      LT(L_E, KC_E)
#define LT_I      LT(L_I, KC_I)
#define LT_SCLN   LT(L_SCLN, KC_SCLN)
#define TG_GAME   TG(L_GAME)

#define ALT_S     LALT_T(KC_S)
#define CTL_D     LCTL_T(KC_D)
#define SFT_F     LSFT_T(KC_F)
#define SFT_J     RSFT_T(KC_J)
#define CTL_K     LCTL_T(KC_K)
#define ALT_L     LALT_T(KC_L)
#define SFT_LNG   RSFT_T(KC_HAEN)

#define C_TAB     C(KC_TAB)
#define C_BSPC    C(KC_BSPC)
#define C_ENT     C(KC_ENT)
#define C_QUOT    C(KC_QUOT)
#define C_COMM    C(KC_COMM)
#define C_DOT     C(KC_DOT)
#define C_MINS    C(KC_MINS)
#define C_EQL     C(KC_EQL)
#define C_GRV     C(KC_GRV)
#define C_0       C(KC_0)
#define C_1       C(KC_1)
#define C_2       C(KC_2)
#define C_3       C(KC_3)
#define C_Q       C(KC_Q)
#define C_W       C(KC_W)
#define C_E       C(KC_E)
#define C_R       C(KC_R)
#define C_T       C(KC_T)
#define C_Y       C(KC_Y)
#define C_U       C(KC_U)
#define C_I       C(KC_I)
#define C_O       C(KC_O)
#define C_P       C(KC_P)
#define C_A       C(KC_A)
#define C_S       C(KC_S)
#define C_D       C(KC_D)
#define C_F       C(KC_F)
#define C_G       C(KC_G)
#define C_H       C(KC_H)
#define C_J       C(KC_J)
#define C_K       C(KC_K)
#define C_L       C(KC_L)
#define C_Z       C(KC_Z)
#define C_X       C(KC_X)
#define C_C       C(KC_C)
#define C_V       C(KC_V)
#define C_B       C(KC_B)
#define C_N       C(KC_N)
#define C_M       C(KC_M)
#define S_TAB     S(KC_TAB)

#define _DSKTP    G(KC_D)
#define _LOCK     G(KC_L)
#define _UNDO     C(KC_Z)
#define _REDO     C(S(KC_Z))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_BASE] = LAYOUT(
    LT_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_GRV,  KC_MPLY,
    LT_TAB,  KC_Q,    KC_W,    LT_E,    KC_R,    KC_T,    KC_Y,    KC_U,    LT_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    MO_CAPS, LT_A,    ALT_S,   CTL_D,   SFT_F,   KC_G,    KC_H,    SFT_J,   CTL_K,   ALT_L,   LT_SCLN, KC_QUOT,          KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          SFT_LNG, KC_DEL,
    KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                             KC_LCTL, KC_LEFT, KC_RGHT
  ),

  [L_GAME] = LAYOUT(
    LT_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_GRV,  KC_MPLY,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_DEL,
    KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                             KC_RALT, KC_LEFT, KC_RGHT
  ),

  [L_ESC] = LAYOUT(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _LOCK,
    _______, _DSKTP,  KC_MYCM, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
    RESET,   _______, TG_GAME,                   _______,                            _______, _______, _______
  ),

  [L_TAB] = LAYOUT(
    _______, KC_F21,  KC_F22,  KC_PSCR, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
    _______, _______, _______,                   _______,                            _______, _______, _______
  ),

  [L_CAPS] = LAYOUT(
    _______, C_1,     C_2,     C_3,     _______, _______, _______, _______, _______, _______, C_0,     C_MINS,  C_EQL,   C_GRV,   _______,
    C_TAB,   C_Q,     C_W,     C_E,     C_R,     C_T,     _______, _______, _______, _______, _______, _______, _______, C_BSPC,
    _______, C_A,     C_S,     C_D,     C_F,     C_G,     _______, _______, _______, _______, _______, C_QUOT,           C_ENT,
    _______, C_Z,     C_X,     C_C,     C_V,     C_B,     _______, _______, C_COMM,  _______, _______,          _______, _______,
    _______, _______, KC_BSPC,                   KC_ENT,                             _______, KC_PGUP, KC_PGDN
  ),

  [L_A] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LPRN, KC_RPRN, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _UNDO,   KC_HOME, KC_UP,   KC_END,  _REDO,   KC_LCBR, KC_RCBR, _______,
    _______, _______, KC_LALT, KC_LCTL, KC_LSFT, S_TAB,   KC_TAB,  KC_LEFT, KC_DOWN, KC_RGHT, KC_COLN, KC_DQUO,          KC_ESC,
    _______, _______, _______, KC_BSPC, KC_DEL,  _______, KC_BSPC, KC_DEL,  C_X,     C_C,     C_V,              _______, _______,
    _______, _______, _______,                   KC_ENT,                             _______, _______, _______
  ),

  [L_E] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_BTN1, KC_MS_U, KC_BTN2, KC_BTN3, _______, _______, _______,
    _______, _______, _______, _______, KC_BTN1, _______, _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______,          _______,
    _______, _______, _______, _______, _______, _______, KC_BTN1, KC_WH_U, KC_MPLY, KC_WH_D, _______,          _______, _______,
    _______, _______, _______,                   _______,                            _______, _______, _______
  ),

  [L_I] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_BSLS, KC_7,    KC_8,    KC_9,    KC_GRV,  _______, KC_BSPC, _______, _______, _______, _______, _______, _______,
    _______, KC_COMM, KC_4,    KC_5,    KC_6,    KC_EQL,  KC_ASTR, KC_LSFT, _______, KC_SPC,  _______, _______,          _______,
    _______, KC_DOT,  KC_1,    KC_2,    KC_3,    KC_MINS, KC_SLSH, _______, _______, _______, _______,          _______, _______,
    _______, _______, _______,                   KC_0,                               _______, _______, _______
  ),

  [L_SCLN] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
    _______, _______, _______,                   _______,                            _______, _______, _______
  ),
};

// void matrix_init_user(void)
// {
//   //user initialization
// }

// void matrix_scan_user(void)
// {
//   //user matrix
// }

// bool process_record_user(uint16_t keycode, keyrecord_t *record)
// {
//   return true;
// }

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ALT_S:
    case ALT_L:
    case CTL_D:
    case CTL_K:
    case LT_E:
    case LT_I:
    case LT_ESC:
      return TAPPING_TERM + 100;
    case LT_TAB:
      return 120;
    default:
      return TAPPING_TERM;
  }
}

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case SFT_F:
    case SFT_J:
      return true;
    default:
      return false;
  }
}

layer_state_t layer_state_set_user(layer_state_t state)
{
  static bool TAB_is_pressed;

  if (layer_state_cmp(state, L_TAB)) {
    register_code(KC_F14);
    TAB_is_pressed = true;
  } else {
    if (TAB_is_pressed) unregister_code(KC_F14);
    TAB_is_pressed = false;
  }

  static bool CAPS_is_pressed;

  if (layer_state_cmp(state, L_CAPS)) {
    register_code(KC_F13);
    CAPS_is_pressed = true;
  } else {
    if (CAPS_is_pressed) unregister_code(KC_F13);
    CAPS_is_pressed = false;
  }

  static bool A_is_pressed;

  if (layer_state_cmp(state, L_A)) {
    register_code(KC_F16);
    A_is_pressed = true;
  } else {
    if (A_is_pressed) unregister_code(KC_F16);
    A_is_pressed = false;
  }

  static bool SCLN_is_pressed;

  if (layer_state_cmp(state, L_SCLN)) {
    register_code(KC_F17);
    SCLN_is_pressed = true;
  } else {
    if (SCLN_is_pressed) unregister_code(KC_F17);
    SCLN_is_pressed = false;
  }

  return state;
}
