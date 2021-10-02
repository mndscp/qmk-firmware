#include QMK_KEYBOARD_H

// Homerow mods
// #define HA_4      LALT_T(KC_KP_4)
// #define HC_5      LCTL_T(KC_KP_5)
// #define HS_6      LSFT_T(KC_KP_6)
#define HA_R      LALT_T(KC_R)
#define HC_S      LCTL_T(KC_S)
#define HS_T      LSFT_T(KC_T)
#define HS_N      RSFT_T(KC_N)
#define HC_E      LCTL_T(KC_E)
#define HA_I      LALT_T(KC_I)

enum ferris_layers {
  _COLEMAK,
  _LOWER,
  _RAISE
};

enum ferris_tap_dances {
  TD_Q_ESC
};

#define KC_CTSC RCTL_T(KC_SCLN)
#define KC_CTLA LCTL_T(KC_A)
#define KC_LSHZ LSFT_T(KC_Z)
#define KC_RLSH RSFT_T(KC_SLSH)
#define KC_SPM2 LT(2, KC_SPC)
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_GUTA GUI_T(KC_TAB)
#define KC_CLGV CTL_T(KC_GRV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT(
    KC_Q,    KC_L,    KC_C,    KC_M,    KC_K,            KC_J,    KC_F,    KC_U,    KC_Y,    KC_QUOT,
    KC_A,    HA_R,    HC_S,    HS_T,    KC_G,            KC_P,    HS_N,    HC_E,    HA_I,    KC_O,
    KC_Z,    KC_X,    KC_W,    KC_D,    KC_V,         KC_ESC,  KC_B,    KC_H,    KC_COMM, KC_DOT,
                                    KC_CLGV, KC_BSM1, KC_SPM2, KC_GUTA
  ),

  [_LOWER] = LAYOUT(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_GESC, KC_HOME, KC_PGDN, KC_PGUP, KC_END,          KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_QUOT,
    _______, _______, _______, KC_BTN1, KC_BTN2,         KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_ENT,
                                    _______, _______, _______, _______
  ),

  [_RAISE] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    KC_TAB,  _______, _______, _______, _______,         KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_PIPE,
    _______, _______, _______, _______, _______,         KC_UNDS, KC_PLUS, _______, _______, RESET,
                                    _______, _______, _______, _______
  )
};

// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Q, twice for ESC
    [TD_Q_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC)
};
