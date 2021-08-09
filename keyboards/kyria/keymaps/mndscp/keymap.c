#include QMK_KEYBOARD_H

enum layers {
  L_COLEMAK,
  L_QWERTY,
  L_GAME,
  L_LOWER,
  L_RAISE,
  L_ADJUST
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
  C_BRACE_L,
  C_BRACE_R,
  C_ANGLE_L,
  C_ANGLE_R,
  C_CAPSLOCK
};

// Custom keys
#define _CLMK     DF(L_COLEMAK)
#define _COPY     C(KC_C)
#define _CUT      C(KC_X)
#define _LOCK     G(KC_L)
#define _PASTE    C(KC_V)
#define _QWERTY   DF(L_QWERTY)
#define _REDO     C(KC_Y)
#define _SELALL   C(KC_A)
#define _UNDO     C(KC_Z)

#define _AE       KC_F17 // Ä
#define _OE       KC_F20 // Ö
#define _UE       KC_F19 // Ü
#define _SZ       KC_F18 // ẞ

// Homerow mods
#define HG_A      LGUI_T(KC_A)
#define HA_R      LALT_T(KC_R)
#define HC_S      LCTL_T(KC_S)
#define HS_T      LSFT_T(KC_T)
#define HS_N      RSFT_T(KC_N)
#define HC_E      LCTL_T(KC_E)
#define HA_I      LALT_T(KC_I)
#define HG_O      RGUI_T(KC_O)

// Hold-taps
#define ALT_ESC   ALT_T(KC_ESC)
#define CTL_BSP   CTL_T(KC_BSPC)
#define CTL_ENT   CTL_T(KC_ENT)
#define CTL_SPC   CTL_T(KC_SPC)
#define CTL_TAB   CTL_T(KC_TAB)
#define LOW_A     LT(L_LOWER, KC_A)
#define LOW_BSP   LT(L_LOWER, KC_BSPC)
#define LOW_ENT   LT(L_LOWER, KC_ENT)
#define LOW_SPC   LT(L_LOWER, KC_SPC)
#define LT_CTRL   LT(L_CTRL, KC_ESC)
#define MO_LOWR   MO(L_LOWER)
#define MO_RAIS   MO(L_RAISE)
#define RAI_BSP   LT(L_RAISE, KC_BSPC)
#define RAI_ENT   LT(L_RAISE, KC_ENT)
#define RAI_SPC   LT(L_RAISE, KC_SPC)
#define SFT_ENT   SFT_T(KC_ENT)
#define SFT_ESC   SFT_T(KC_ESC)
#define SFT_SPC   SFT_T(KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_COLEMAK] = LAYOUT( /*                                              Colemak-Qi
   ,-----------------------------------------------------.                                     ,-----------------------------------------------------.
   |   Alt  |    Q   |    L   |    C   |    M   |    K   |                                     |    J   |    F   |    U   |    Y   |    '   |    !   |
   |--------+--------+--------+--------+--------+--------|                                     |--------+--------+--------+--------+--------+--------|
   |  Shift |    A   |    R   |    S   |    T   |    G   |                                     |    P   |    N   |    E   |    I   |    O   |    ?   |
   |--------+--------+--------+--------+--------+--------+-----------------. ,-----------------+--------+--------+--------+--------+--------+--------|
   |   Alt  |    Z   |    X   |    W   |    D   |    V   |        |  Play  | |        |        |    B   |    H   |    ,   |    .   |    /   |    ;   |
   `--------------------------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------------------------'
                              |  Play  |   Del  |  Enter |  Bspc  |  Space | |        |  Space |   Tab  |        |  AltGr |
                              |        |        |  Ctrl  |  Lower |  Raise | |        |  Lower |        |        |        |
                              `--------------------------------------------' `--------------------------------------------'                         */
    ALT_ESC, KC_Q,    KC_L,    KC_C,    KC_M,    KC_K,                                          KC_J,    KC_F,    KC_U,    KC_Y,    KC_QUOT, KC_EXLM,
    SFT_ESC, HG_A,    HA_R,    HC_S,    HS_T,    KC_G,                                          KC_P,    HS_N,    HC_E,    HA_I,    HG_O,    KC_QUES,
    KC_LALT, KC_Z,    KC_X,    KC_W,    KC_D,    KC_V,    _______, KC_MPLY,   _______, _______, KC_B,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_SCLN,
                               KC_MPLY, MO_RAIS, CTL_ENT, LOW_BSP, RAI_SPC,   KC_DEL,  LOW_SPC, KC_TAB,  _______, KC_RALT
  ),

  [L_QWERTY] = LAYOUT( /*                                                 QWERTY
   ,-----------------------------------------------------.                                     ,-----------------------------------------------------.
   |        |    Q   |    W   |    E   |    R   |    T   |                                     |    Y   |    U   |    I   |    O   |    P   |        |
   |--------+--------+--------+--------+--------+--------|                                     |--------+--------+--------+--------+--------+--------|
   |        |    A   |    S   |    D   |    F   |    G   |                                     |    H   |    J   |    K   |    L   |    ;   |        |
   |--------+--------+--------+--------+--------+--------+-----------------. ,-----------------+--------+--------+--------+--------+--------+--------|
   |        |    Z   |    X   |    C   |    V   |    B   |        |        | |        |        |    N   |    M   |    ,   |    .   |    /   |        |
   `--------------------------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------------------------'
                              |        |        |        |        |        | |        |        |        |        |        |
                              |        |        |        |        |        | |        |        |        |        |        |
                              `--------------------------------------------' `--------------------------------------------'                         */
    _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    _______,
    _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, _______,
    _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______, _______,   _______, _______, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
                               _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______
  ),

  [L_LOWER] = LAYOUT( /*                                 Lower: Navigation and text manipulation
   ,-----------------------------------------------------.                                     ,-----------------------------------------------------.
   |        |  PgUp  |  Home  |   Up   |   End  |  PgDn  |                                     |        |        |        |        |        |        |
   |--------+--------+--------+--------+--------+--------|                                     |--------+--------+--------+--------+--------+--------|
   |        |   Esc  |  Left  |  Down  |  Right |  Bspc  |                                     |  PgUp  |  Shift |  Ctrl  |   Alt  |   GUI  |        |
   |--------+--------+--------+--------+--------+--------+-----------------. ,-----------------+--------+--------+--------+--------+--------+--------|
   |        | SelAll |   Cut  |  Copy  |  Paste |   Del  |        |        | |        |        |  PgDn  |  Undo  |  Redo  |        |        |        |
   `--------------------------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------------------------'
                              |        |        |        |        |        | |        |        |        |        |        |
                              |        |        |        |        |        | |        |        |        |        |        |
                              `--------------------------------------------' `--------------------------------------------'                         */
    _______, KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_PGDN,                                       _______, _______, _______, _______, _______, _______,
    _______, SFT_ESC, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC,                                       KC_PGUP, KC_RSFT, KC_LCTL, KC_LALT, KC_RGUI, _______,
    _______, _SELALL, _CUT,    _COPY,   _PASTE,  KC_DEL,  _______, _______,   _______, _______, KC_PGDN, _UNDO,   _REDO,   _______, _______, _______,
                               _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______
  ),

  [L_RAISE] = LAYOUT( /*                                                  Raise
   ,-----------------------------------------------------.                                     ,-----------------------------------------------------.
   |        |        |    7   |    8   |    9   |    /   |                                     |        |        |        |        |        |        |
   |--------+--------+--------+--------+--------+--------|                                     |--------+--------+--------+--------+--------+--------|
   |        |    0   |    4   |    5   |    6   |    +   |                                     |        |        |        |        |        |        |
   |--------+--------+--------+--------+--------+--------+-----------------. ,-----------------+--------+--------+--------+--------+--------+--------|
   |        |        |    1   |    2   |    3   |    -   |        |        | |        |        |        |        |        |        |        |        |
   `--------------------------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------------------------'
                              |        |        |        |        |        | |        |        |        |        |        |
                              |        |        |        |        |        | |        |        |        |        |        |
                              `--------------------------------------------' `--------------------------------------------'                         */
    _______, _______, KC_7,    KC_8,    KC_9,    _______,                                       _______, _______, _______, _______, _______, _______,
    _______, KC_0,    KC_4,    KC_5,    KC_6,    _______,                                       _______, _______, _______, _______, _______, _______,
    _______, _______, KC_1,    KC_2,    KC_3,    _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______, _______,
                               _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______
  ),

  [L_ADJUST] = LAYOUT( /*                                                 Adjust
   ,-----------------------------------------------------.                                     ,-----------------------------------------------------.
   |        |   F12  |   F7   |   F8   |   F9   |        |                                     |        |        |        |        |        |        |
   |--------+--------+--------+--------+--------+--------|                                     |--------+--------+--------+--------+--------+--------|
   |        |   F11  |   F4   |   F5   |   F6   | Colemak|                                     |        |        |        |        |        |        |
   |--------+--------+--------+--------+--------+--------+-----------------. ,-----------------+--------+--------+--------+--------+--------+--------|
   |        |   F10  |   F1   |   F2   |   F3   | QWERTY |        |        | |        |        |        |        |        |        |        |        |
   `--------------------------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------------------------'
                              |        |        |        |        |        | |        |        |        |        |        |
                              |        |        |        |        |        | |        |        |        |        |        |
                              `--------------------------------------------' `--------------------------------------------'                         */
    _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,   _______,                                       _______, _______, _______, _______, _______, _______,
    _______, KC_F11,  KC_F4,   KC_F5,   KC_F6,   _CLMK,                                         _______, _______, _______, _______, _______, _______,
    _______, KC_F10,  KC_F1,   KC_F2,   KC_F3,   _QWERTY, _______, _______,   _______, _______, _______, _______, _______, _______, _______, _______,
                               _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______
  ),

  // [L_TEMPLATE] = LAYOUT( /*                                              Template
  //  ,-----------------------------------------------------.                                     ,-----------------------------------------------------.
  //  |        |        |        |        |        |        |                                     |        |        |        |        |        |        |
  //  |--------+--------+--------+--------+--------+--------|                                     |--------+--------+--------+--------+--------+--------|
  //  |        |        |        |        |        |        |                                     |        |        |        |        |        |        |
  //  |--------+--------+--------+--------+--------+--------+-----------------. ,-----------------+--------+--------+--------+--------+--------+--------|
  //  |        |        |        |        |        |        |        |        | |        |        |        |        |        |        |        |        |
  //  `--------------------------+--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------+--------------------------'
  //                             |        |        |        |        |        | |        |        |        |        |        |
  //                             |        |        |        |        |        | |        |        |        |        |        |
  //                             `--------------------------------------------' `--------------------------------------------'                         */
  //   _______, _______, _______, _______, _______, _______,                                       _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______, _______,                                       _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______, _______,
  //                              _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______
  // ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, L_LOWER, L_RAISE, L_ADJUST);
}

#ifdef ENCODER_ENABLE
  bool encoder_update_user(uint8_t index, bool clockwise) {
    // If no mods down send mouse wheel up/down
    // Modifier bitmask is GASC(R)GASC(L)
    if (get_mods() == 00000000) {
      if (clockwise) {
        tap_code(KC_WH_D);
      } else {
        tap_code(KC_WH_U);
      }
    // If only ctrl down send undo/redo
    } else if (get_mods() == 00000001) {
      if (clockwise) {
        tap_code(KC_Y);
      } else {
        tap_code(KC_Z);
      }
    } else {
      if (clockwise) {
        tap_code(KC_WH_U);
      } else {
        tap_code(KC_WH_D);
      }
    }

    return false;
  }
#endif

// Different tapping terms for slow fingers
// ----------------------------------------------------------------------------

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case HA_I:
    case HA_R:
    case HG_A:
    case HG_O:
      return TAPPING_TERM + 85;
    default:
      return TAPPING_TERM;
  }
}

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
}

// Combos
// ----------------------------------------------------------------------------

const uint16_t PROGMEM COMBO_SMILEY_1[] = {KC_L, KC_M, COMBO_END};        // :)
const uint16_t PROGMEM COMBO_SMILEY_2[] = {KC_X, KC_D, COMBO_END};        // :P
const uint16_t PROGMEM COMBO_SMILEY_3[] = {KC_F, KC_Y, COMBO_END};        // : D
const uint16_t PROGMEM COMBO_SMILEY_4[] = {KC_H, KC_DOT, COMBO_END};      // :D
const uint16_t PROGMEM COMBO_PAREN_L[]  = {KC_L, KC_C, COMBO_END};        // (
const uint16_t PROGMEM COMBO_PAREN_R[]  = {KC_C, KC_M, COMBO_END};        // )
const uint16_t PROGMEM COMBO_BRACE_L[]  = {KC_X, KC_W, COMBO_END};        // [
const uint16_t PROGMEM COMBO_BRACE_R[]  = {KC_W, KC_D, COMBO_END};        // ]
const uint16_t PROGMEM COMBO_CURLY_L[]  = {KC_F, KC_U, COMBO_END};        // {
const uint16_t PROGMEM COMBO_CURLY_R[]  = {KC_U, KC_Y, COMBO_END};        // }
const uint16_t PROGMEM COMBO_ANGLE_L[]  = {KC_H, KC_COMM, COMBO_END};     // <
const uint16_t PROGMEM COMBO_ANGLE_R[]  = {KC_COMM, KC_DOT, COMBO_END};   // >
const uint16_t PROGMEM COMBO_CAPSLOCK[] = {KC_G, KC_P, COMBO_END};        // Capslock

combo_t key_combos[COMBO_COUNT] = {
  [C_SMILEY_1] = COMBO_ACTION(COMBO_SMILEY_1),
  [C_SMILEY_2] = COMBO_ACTION(COMBO_SMILEY_2),
  [C_SMILEY_3] = COMBO_ACTION(COMBO_SMILEY_3),
  [C_SMILEY_4] = COMBO_ACTION(COMBO_SMILEY_4),
  [C_PAREN_L]  = COMBO_ACTION(COMBO_PAREN_L),
  [C_PAREN_R]  = COMBO_ACTION(COMBO_PAREN_R),
  [C_BRACE_L]  = COMBO_ACTION(COMBO_BRACE_L),
  [C_BRACE_R]  = COMBO_ACTION(COMBO_BRACE_R),
  [C_CURLY_L]  = COMBO_ACTION(COMBO_CURLY_L),
  [C_CURLY_R]  = COMBO_ACTION(COMBO_CURLY_R),
  [C_ANGLE_L]  = COMBO_ACTION(COMBO_ANGLE_L),
  [C_ANGLE_R]  = COMBO_ACTION(COMBO_ANGLE_R),
  [C_CAPSLOCK] = COMBO_ACTION(COMBO_CAPSLOCK)
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
    case C_BRACE_L:
      if (pressed) {
        tap_code16(KC_LBRC);
      }
      break;
    case C_BRACE_R:
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
    case C_CAPSLOCK:
      if (pressed) {
        tap_code16(KC_CAPS);
      }
      break;
  }
}
