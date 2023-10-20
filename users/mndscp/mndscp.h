// Homerow mods
// ----------------------------------------------------------------------------

#define HG_A      LGUI_T(KC_A)
#define HA_R      LALT_T(KC_R)
#define HC_S      LCTL_T(KC_S)
#define HS_T      LSFT_T(KC_T)
#define HS_N      RSFT_T(KC_N)
#define HC_E      LCTL_T(KC_E)
#define HA_I      LALT_T(KC_I)
#define HG_O      LGUI_T(KC_O)
#define HA_A      LALT_T(KC_A)
#define HC_T      LCTL_T(KC_T)
#define HS_W      RSFT_T(KC_W)
#define HS_G      RSFT_T(KC_G)
#define HA_S      LALT_T(KC_S)
#define HC_D      LCTL_T(KC_D)
#define HS_C      LSFT_T(KC_C)
#define HS_F      LSFT_T(KC_F)
#define HS_J      RSFT_T(KC_J)
#define HC_K      LCTL_T(KC_K)
#define HA_L      LALT_T(KC_L)

// Layer row definitions
// ----------------------------------------------------------------------------

// QWERTY
#define _________________QWERTY_L1_________________    LT_Q,    KC_W,    LT_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________    LT_A,    HA_S,    HC_D,    HS_F,    KC_G
#define _________________QWERTY_L3_________________    LT_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________    KC_H,    HS_J,    HC_K,    HA_L,    KC_QUOT
#define _________________QWERTY_R3_________________    KC_N,    KC_M,    KC_COMM, KC_DOT,  LT_SLSH

#define ______________QWERTY_CAPS_L1_______________    S(KC_Q), S(KC_W), S(KC_E), S(KC_R), S(KC_T)
#define ______________QWERTY_CAPS_L2_______________    S(KC_A), S(KC_S), S(KC_D), S(KC_F), S(KC_G)
#define ______________QWERTY_CAPS_L3_______________    S(KC_Z), S(KC_X), S(KC_C), S(KC_V), S(KC_B)

#define ______________QWERTY_CAPS_R1_______________    S(KC_Y), S(KC_U), S(KC_I), S(KC_O), S(KC_P)
#define ______________QWERTY_CAPS_R2_______________    S(KC_H), S(KC_J), S(KC_K), S(KC_L), KC_DQUO
#define ______________QWERTY_CAPS_R3_______________    S(KC_N), S(KC_M), KC_LABK, KC_RABK, KC_QUES

// Navigation
#define _______________NAVIGATION_L1_______________    KC_PSCR, BACKTAB, KC_SPC,  KC_TAB,  _______
#define _______________NAVIGATION_L2_______________    KC_LCTL, ALT_ESC, CTL_BSP, SFT_ENT, KC_PGUP
#define _______________NAVIGATION_L3_______________    C(KC_S), C(KC_Y), C(KC_Z), KC_DEL,  KC_PGDN

#define _______________NAVIGATION_R1_______________    _______, KC_BSPC, KC_UP,   KC_DEL,  KC_DQUO
#define _______________NAVIGATION_R2_______________    KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END
#define _______________NAVIGATION_R3_______________    C(KC_Z), C(KC_C), C(KC_V), C(KC_X), _______

// Symbols
#define _________________SYMBOL_L1_________________    KC_ASTR, KC_AT,   KC_EXLM, KC_DQUO, KC_LCBR
#define _________________SYMBOL_L2_________________    KC_SCLN, KC_COLN, KC_QUES, SFT_QUO, KC_LPRN
#define _________________SYMBOL_L3_________________    KC_BSLS, KC_PIPE, KC_MINS, KC_GRV,  KC_LBRC

#define _________________SYMBOL_R1_________________    KC_RCBR, KC_DLR,  KC_PERC, KC_HASH, KC_AMPR
#define _________________SYMBOL_R2_________________    KC_RPRN, M_AE,    M_OE,    M_UE,    M_SZ
#define _________________SYMBOL_R3_________________    KC_RBRC, KC_LABK, KC_EQL,  KC_RABK, KC_CIRC

// Always enable numlock
// ----------------------------------------------------------------------------

void led_set_keymap(uint8_t usb_led) {
  if (!(usb_led & (1<<USB_LED_NUM_LOCK))) {
    register_code(KC_NUMLOCK);
    unregister_code(KC_NUMLOCK);
  }
}
