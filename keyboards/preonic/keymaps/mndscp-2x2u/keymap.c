#include QMK_KEYBOARD_H
#include "muse.h"

enum preonic_layers {
  L_COLEMAK_QI,
  L_QWERTY,
  L_GAME,
  L_NUMPAD,
  L_NAVIGATION,
  L_SYMBOL,
  L_FUNCTION,
  L_CAPS,
  L_TAB,
  L_CTRL,
  L_LSFT,
};

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
};

enum macros {
  M_CLMK = SAFE_RANGE,
  M_CLMQ,
  M_QWRT,
  M_AE,
  M_OE,
  M_UE,
  M_SZ,
};

// enum tap_dances {
//   TD_EXCLAMATIONMARK,
//   TD_QUESTIONMARK,
// };

// Hold-taps
#define LT_TAB    LT(L_TAB, KC_TAB)
#define LT_CTRL   LT(L_CTRL, KC_ESC)
#define LT_I      LT(L_NAVIGATION, KC_I)
#define LT_R      LT(L_NAVIGATION, KC_R)
#define LT_ENT    LT(L_NAVIGATION, KC_ENT)
#define LT_LSFT   MO(L_LSFT)
#define SFT_MIN   SFT_T(KC_MINS)
#define SFT_TAB   SFT_T(KC_TAB)

// Homerow mods Colemak
#define HS_6      LALT_T(KC_6)
#define HC_E      LCTL_T(KC_E)
#define HS_N      RSFT_T(KC_N)
#define HA_R      LALT_T(KC_R)
#define HA_S      LALT_T(KC_S)
#define HC_S      LCTL_T(KC_S)
#define HS_T      RSFT_T(KC_T)
#define HA_I      LALT_T(KC_I)

// Homerow mods Qwerty
#define HC_D      LCTL_T(KC_D)
#define HS_F      LSFT_T(KC_F)
#define HS_J      RSFT_T(KC_J)
#define HC_K      LCTL_T(KC_K)
#define HA_L      LALT_T(KC_L)

// Modified keys
#define C_TAB     C(KC_TAB)
#define C_BSPC    C(KC_BSPC)
#define C_QUOT    C(KC_QUOT)
#define C_COMM    C(KC_COMM)
#define C_DOT     C(KC_DOT)
#define C_SLSH    C(KC_SLSH)
#define C_MINS    C(KC_MINS)
#define C_EQL     C(KC_EQL)
#define C_DOWN    C(KC_DOWN)
#define C_LEFT    C(KC_LEFT)
#define C_RGHT    C(KC_RGHT)
#define C_UP      C(KC_UP)
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

// Mod and Layer keys
#define ALT_BSP   LALT_T(KC_BSPC)
#define ALT_DEL   LALT_T(KC_DEL)
#define ALT_SPC   LALT_T(KC_SPC)
#define CTL_BSP   LCTL_T(KC_BSPC)
#define CTL_ESC   LCTL_T(KC_ESC)
#define CTL_ENT   LCTL_T(KC_ENT)
#define CTL_SPC   LCTL_T(KC_SPC)
#define DF_DST    DF(L_DONTSTARVE)
#define FUN_ESC   LT(L_FUNCTION, KC_ESC)
#define FUN_PLY   LT(L_FUNCTION, KC_MPLY)
#define LT_A      LT(L_NAVIGATION, KC_A)
#define LT_SLSH   LT(L_SLSH, KC_SLSH)
#define NAV_BSP   LT(L_NAVIGATION, KC_BSPC)
#define NAV_MIN   LT(L_NAVIGATION, KC_MINS)
#define NAV_SPC   LT(L_NAVIGATION, KC_SPC)
#define NAV_ENT   LT(L_NAVIGATION, KC_ENT)
#define NUM_DEL   LT(L_NUMPAD, KC_DEL)
#define NUM_ENT   LT(L_NUMPAD, KC_ENT)
#define NUM_BSP   LT(L_NUMPAD, KC_BSPC)
#define NUM_TAB   LT(L_NUMPAD, KC_TAB)
#define SFT_BSP   LSFT_T(KC_BSPC)
#define SFT_DEL   LSFT_T(KC_DEL)
#define SFT_ENT   LSFT_T(KC_ENT)
#define SFT_F22   LSFT_T(KC_F22)
#define SFT_GRV   LSFT_T(KC_GRV)
#define SFT_QUO   LSFT_T(KC_QUOT)
#define SFT_SPC   LSFT_T(KC_SPC)
#define SYM_ESC   LT(L_SYMBOL, KC_ESC)
#define SYM_SPC   LT(L_SYMBOL, KC_SPC)
#define LOW_SPC   LT(L_SYMBOL, KC_SPC)
#define TD_EXLM   TD(TD_EXCLAMATIONMARK)
#define TD_QUES   TD(TD_QUESTIONMARK)

// Custom keys
#define LOCK      G(KC_L)
#define BACKTAB   S(KC_TAB)
#define ZOOMIN    C(KC_PLUS)
#define ZOOMOUT   C(KC_MINS)
#define EMOJI     G(KC_DOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_COLEMAK_QI] = LAYOUT_preonic_2x2u(
  // ,-----------------------------------------------------------------------------------.
  // |  Esc |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Mply |
  // |------+------+------+------+------+------+------+------+------+------+------+------|
  // |  Tab |   Q  |   L  |   C  |   M  |   K  |   J  |   F  |   U  |   Y  |   '  | Bksp |
  // |------+------+------+------+------+------+------+------+------+------+------+------|
  // | Ctrl |   A  |   R  |   S  |   T  |   G  |   P  |   N  |   E  |   I  |   O  | Enter|
  // |------+------+------+------+------+------+------+------+------+------+------+------|
  // | Shift|   Z  |   X  |   W  |   D  |   V  |   B  |   H  |   ,  |   .  |   /  |  Del |
  // |------+------+------+------+------+------+------+------+------+------+------+------|
  // | Ctrl |  GUI |  Alt | Lower|     Nav     |    Space    | Raise| Left |  Up  | Right|
  // `-----------------------------------------------------------------------------------'
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MPLY,
    LT_TAB,  KC_Q,    KC_L,    KC_C,    KC_M,    KC_K,    KC_J,    KC_F,    KC_U,    KC_Y,    KC_QUOT, KC_BSPC,
    LT_CTRL, LT_A,    HA_R,    HC_S,    HS_T,    KC_G,    KC_P,    HS_N,    HC_E,    HA_I,    KC_O,    KC_ENT,
    LT_LSFT, KC_Z,    KC_X,    KC_W,    KC_D,    KC_V,    KC_B,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_DEL,
    KC_LCTL, KC_LGUI, KC_LALT, NUM_DEL,      NAV_ENT,        SYM_SPC,       FUN_PLY,          KC_LEFT, KC_UP,   KC_RGHT
  ),

  [L_QWERTY] = LAYOUT_preonic_2x2u(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    _______,
    _______, LT_A,    HA_S,    HC_D,    HS_F,    KC_G,    KC_H,    HS_J,    HC_K,    HA_L,    KC_SCLN, _______,
    _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    _______, _______, KC_SLSH, _______,
    _______, _______, _______, _______,      _______,        _______,       _______, _______, _______, _______
  ),

  [L_GAME] = LAYOUT_preonic_2x2u(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    _______,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, _______,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    _______, _______, KC_SLSH, _______,
    _______, _______, _______, _______,      _______,        _______,       _______, _______, _______, _______
  ),

  [L_NUMPAD] = LAYOUT_preonic_2x2u(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_EQL,  KC_7,    KC_8,    KC_9,    KC_ASTR, KC_ASTR, KC_7,    KC_8,    KC_9,    KC_EQL,  _______,
    _______, KC_0,    KC_4,    KC_5,    HS_6,    KC_PLUS, KC_PLUS, KC_4,    KC_5,    KC_6,    KC_DOT,  _______,
    _______, KC_DOT,  KC_1,    KC_2,    KC_3,    KC_MINS, KC_MINS, KC_1,    KC_2,    KC_3,    KC_SLSH, _______,
    _______, _______, _______, XXXXXXX,      _______,        KC_0,          _______, _______, _______, _______
  ),

  [L_NAVIGATION] = LAYOUT_preonic_2x2u(
  // ,-----------------------------------------------------------------------------------.
  // |      |      |      |      |      |      |      |   &  |   *  |   (  |   )  |   ~  |
  // |------+------+------+------+------+------+------+------+------+------+------+------|
  // |      |      | PrScr| S+Tab|  Tab | PgUp |      | Bspc |  Up  |  Del |   "  | C+Bsp|
  // |------+------+------+------+------+------+------+------+------+------+------+------|
  // |      |      | Space| Bksp | Enter|  Del | Home | Left | Down | Right|  End |  C+' |
  // |------+------+------+------+------+------+------+------+------+------+------+------|
  // |      |      | Save | Undo | Redo | PgDn |      | Copy | Paste|  Cut |      |      |
  // |------+------+------+------+------+------+------+------+------+------+------+------|
  // |      |      |      | Emoji|             |     Esc     |      |      |      |      |
  // `-----------------------------------------------------------------------------------'
    _______, _______, _______, _______, _______, _______, _______, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,
    _______, _______, KC_PSCR, BACKTAB, KC_TAB,  KC_PGUP, _______, KC_BSPC, KC_UP,   KC_DEL,  KC_DQUO, C_BSPC,
    _______, _______, ALT_SPC, CTL_BSP, SFT_ENT, KC_DEL,  KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  C_QUOT,
    _______, _______, C(KC_S), C(KC_Z), C(KC_Y), KC_PGDN, _______, C(KC_C), C(KC_V), C(KC_X), _______, _______,
    _______, _______, _______, EMOJI,        XXXXXXX,        SYM_ESC,       _______, _______, _______, _______
  ),

  [L_SYMBOL] = LAYOUT_preonic_2x2u(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_COMM, KC_AT,   KC_SCLN, KC_EXLM, KC_DQUO, KC_LCBR, KC_RCBR, KC_DLR,  KC_PERC, KC_HASH, KC_AMPR, _______,
    _______, KC_SCLN, KC_COLN, KC_QUES, SFT_QUO, KC_LPRN, KC_RPRN, M_AE,    M_OE,    M_UE,    M_SZ,    _______,
    _______, KC_BSLS, KC_PIPE, KC_UNDS, KC_GRV,  KC_LBRC, KC_RBRC, KC_LABK, KC_EQL,  KC_RABK, KC_CIRC, _______,
    _______, _______, _______, KC_MINS,      NAV_ENT,        XXXXXXX,       KC_TILD, _______, _______, _______
  ),

  [L_CTRL] = LAYOUT_preonic_2x2u(
    _______, C_1,     C_2,     C_3,     _______, _______, _______, _______, _______, _______, _______, LOCK,
    C_TAB,   C_Q,     C_W,     C_E,     C_R,     C_T,     C_Y,     _______, _______, _______, _______, _______,
    _______, C_A,     C_S,     C_D,     C_F,     C_G,     C_H,     _______, _______, _______, _______, _______,
    _______, C_Z,     C_X,     C_C,     C_V,     C_B,     C_N,     _______, C_COMM,  C_DOT,   C_SLSH,  _______,
    _______, _______, _______, KC_BSPC,      SFT_ENT,        _______,       _______, C_MINS,  C_0,     C_EQL
  ),

  [L_FUNCTION] = LAYOUT_preonic_2x2u(
    RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    RGB_TOG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_F12,
    _______, _______, _______, _______, _______, _______, _______, M_CLMK,  M_QWRT,  ZOOMOUT, C(KC_0), ZOOMIN,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, C_UP,    _______,
    _______, _______, _______, _______,      _______,        _______,       XXXXXXX, C_LEFT,  C_DOWN,  C_RGHT
  ),

  [L_CAPS] = LAYOUT_preonic_2x2u(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, S(KC_Q), S(KC_L), S(KC_C), S(KC_M), S(KC_K), S(KC_J), S(KC_F), S(KC_U), S(KC_Y), KC_DQUO, _______,
    _______, S(KC_A), S(KC_R), S(KC_S), S(KC_T), S(KC_G), S(KC_P), S(KC_N), S(KC_E), S(KC_I), S(KC_O), _______,
    _______, S(KC_Z), S(KC_X), S(KC_W), S(KC_D), S(KC_V), S(KC_B), S(KC_H), KC_LABK, KC_RABK, KC_QUES, _______,
    _______, _______, _______, _______,      XXXXXXX,        XXXXXXX,       _______, _______, _______, _______
  ),

  [L_TAB] = LAYOUT_preonic_2x2u(
    _______, KC_F21,  KC_F22,  KC_PSCR, _______, _______, _______, _______, _______, _______, _______, _______,
    XXXXXXX, C_Q,     C_W,     C_E,     C_R,     _______, _______, _______, _______, _______, _______, _______,
    _______, C_A,     C_S,     C_D,     C_F,     _______, _______, _______, _______, _______, _______, _______,
    _______, C_Z,     C_X,     C_C,     C_V,     _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______,      _______,        _______,       _______, _______, _______, _______
  ),

  [L_LSFT] = LAYOUT_preonic_2x2u(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_BSPC, KC_UP,   KC_DEL,  _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, KC_LSFT,      CTL_SPC,        _______,       _______, _______, _______, _______
  ),

  // [TEMPLATE] = LAYOUT_preonic_2x2u(
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______,      _______,        _______,       _______, _______, _______, _______
  // )
};

// Set different tapping terms for some key groups
// ----------------------------------------------------------------------------

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case HA_I:
    case HA_L:
    case HA_R:
    case HA_S:
    case HC_E:
      return TAPPING_TERM + 65;
    default:
      return TAPPING_TERM;
  }
};

// Turn off key repeat for a few keys
// ----------------------------------------------------------------------------

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LT_A:
    case LT_R:
    case HS_F:
    case HS_J:
    case HC_K:
    case HS_N:
    case HS_T:
    case NUM_ENT:
    case SYM_SPC:
      return true;
    default:
      return false;
  }
}

// Wrap keypresses from mod-tap layers in F keys for AHK
// ----------------------------------------------------------------------------

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

  static bool CTRL_is_pressed;

  if (layer_state_cmp(state, L_CTRL)) {
    register_code(KC_F13);
    CTRL_is_pressed = true;
  } else {
    if (CTRL_is_pressed) unregister_code(KC_F13);
    CTRL_is_pressed = false;
  }

  static bool A_is_pressed;

  if (layer_state_cmp(state, L_NAVIGATION)) {
    register_code(KC_F13);
    A_is_pressed = true;
  } else {
    if (A_is_pressed) unregister_code(KC_F13);
    A_is_pressed = false;
  }

  return update_tri_layer_state(state, L_NAVIGATION, L_SYMBOL, L_CAPS);
}

// Combos
// ----------------------------------------------------------------------------

const uint16_t PROGMEM COMBO_SMILEY_1[]   = {KC_L, KC_M, COMBO_END};      // :)
const uint16_t PROGMEM COMBO_SMILEY_2[]   = {KC_L, KC_C, COMBO_END};      // :P
const uint16_t PROGMEM COMBO_SMILEY_3[]   = {KC_C, KC_K, COMBO_END};      // : D
const uint16_t PROGMEM COMBO_SMILEY_4[]   = {KC_C, KC_M, COMBO_END};      // :D
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
const uint16_t PROGMEM COMBO_SELECTALL[]  = {KC_Z, KC_D, COMBO_END};

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

// Preonic
// ----------------------------------------------------------------------------

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//         case LOWER:
//           if (record->event.pressed) {
//             layer_on(L_SYMBOL);
//             update_tri_layer(L_SYMBOL, L_FUNCTION, L_ADJUST);
//           } else {
//             layer_off(L_SYMBOL);
//             update_tri_layer(L_SYMBOL, L_FUNCTION, L_ADJUST);
//           }
//           return false;
//           break;
//         case RAISE:
//           if (record->event.pressed) {
//             layer_on(L_FUNCTION);
//             update_tri_layer(L_SYMBOL, L_FUNCTION, L_ADJUST);
//           } else {
//             layer_off(L_FUNCTION);
//             update_tri_layer(L_SYMBOL, L_FUNCTION, L_ADJUST);
//           }
//           return false;
//           break;
//       }
//     return true;
// };

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

// void dip_switch_update_user(uint8_t index, bool active) {
//     switch (index) {
//         case 0:
//             if (active) {
//                 layer_on(L_ADJUST);
//             } else {
//                 layer_off(L_ADJUST);
//             }
//             break;
//         case 1:
//             if (active) {
//                 muse_mode = true;
//             } else {
//                 muse_mode = false;
//             }
//     }
// }

void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

// bool music_mask_user(uint16_t keycode) {
//   switch (keycode) {
//     case RAISE:
//     case LOWER:
//       return false;
//     default:
//       return true;
//   }
// }
