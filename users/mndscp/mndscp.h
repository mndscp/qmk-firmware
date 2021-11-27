// Homerow mods Colemak
// ----------------------------------------------------------------------------

#define HG_A      LGUI_T(KC_A)
#define HA_R      LALT_T(KC_R)
#define HC_S      LCTL_T(KC_S)
#define HS_T      LSFT_T(KC_T)

#define HS_N      RSFT_T(KC_N)
#define HC_E      LCTL_T(KC_E)
#define HA_I      LALT_T(KC_I)
#define HG_O      LGUI_T(KC_O)

// #define HA_A      LALT_T(KC_A)
#define HC_T      LCTL_T(KC_T)
#define HS_W      RSFT_T(KC_W)

// Layer row definitions
// ----------------------------------------------------------------------------

// Colemak-Qi
#define _______________COLEMAK_QI_L1_______________    LT_Q,    KC_L,    LT_C,    KC_M,    KC_K
#define _______________COLEMAK_QI_L2_______________    LT_A,    HA_R,    HC_S,    HS_T,    KC_G
#define _______________COLEMAK_QI_L3_______________    LT_Z,    KC_X,    KC_W,    KC_D,    KC_V

#define _______________COLEMAK_QI_R1_______________    KC_J,    KC_F,    KC_U,    KC_Y,    KC_QUOT
#define _______________COLEMAK_QI_R2_______________    KC_P,    HS_N,    HC_E,    HA_I,    KC_O
#define _______________COLEMAK_QI_R3_______________    KC_B,    KC_H,    KC_COMM, KC_DOT,  LT_SLSH

#define _____________COLEMAK_QI_CAPS_L1____________    S(KC_Q), S(KC_L), S(KC_C), S(KC_M), S(KC_K)
#define _____________COLEMAK_QI_CAPS_L2____________    S(KC_A), S(KC_R), S(KC_S), S(KC_T), S(KC_G)
#define _____________COLEMAK_QI_CAPS_L3____________    S(KC_Z), S(KC_X), S(KC_W), S(KC_D), S(KC_V)

#define _____________COLEMAK_QI_CAPS_R1____________    S(KC_J), S(KC_F), S(KC_U), S(KC_Y), KC_DQUO
#define _____________COLEMAK_QI_CAPS_R2____________    S(KC_P), S(KC_N), S(KC_E), S(KC_I), S(KC_O)
#define _____________COLEMAK_QI_CAPS_R3____________    S(KC_B), S(KC_H), KC_MINS, KC_EXLM, KC_QUES

// IRST
#define __________________IRST_L1__________________    LT_Q,    KC_L,    LT_C,    KC_M,    KC_K
#define __________________IRST_L2__________________    LT_I,    HA_R,    HC_S,    HS_T,    KC_G
#define __________________IRST_L3__________________    LT_Z,    KC_X,    KC_W,    KC_D,    KC_V

#define __________________IRST_R1__________________    KC_J,    KC_F,    KC_U,    KC_Y,    KC_QUOT
#define __________________IRST_R2__________________    KC_P,    HS_N,    HC_E,    HA_A,    KC_O
#define __________________IRST_R3__________________    KC_B,    KC_H,    KC_COMM, KC_DOT,  LT_SLSH

#define ________________IRST_CAPS_L1_______________    S(KC_Q), S(KC_L), S(KC_C), S(KC_M), S(KC_K)
#define ________________IRST_CAPS_L2_______________    S(KC_I), S(KC_R), S(KC_S), S(KC_T), S(KC_G)
#define ________________IRST_CAPS_L3_______________    S(KC_Z), S(KC_X), S(KC_W), S(KC_D), S(KC_V)

#define ________________IRST_CAPS_R1_______________    S(KC_J), S(KC_F), S(KC_U), S(KC_Y), KC_DQUO
#define ________________IRST_CAPS_R2_______________    S(KC_P), S(KC_N), S(KC_E), S(KC_A), S(KC_O)
#define ________________IRST_CAPS_R3_______________    S(KC_B), S(KC_H), KC_MINS, KC_EXLM, KC_QUES

// Snu Snu
#define _________________SNUSNU_L1_________________    LT_X,    KC_L,    LT_D,    KC_K,    KC_V
#define _________________SNUSNU_L2_________________    LT_S,    HA_R,    HC_T,    HS_N,    KC_F
#define _________________SNUSNU_L3_________________    KC_Q,    KC_J,    KC_M,    KC_H,    KC_B

#define _________________SNUSNU_R1_________________    KC_P,    KC_C,    KC_O,    KC_U,    KC_QUOT
#define _________________SNUSNU_R2_________________    KC_Y,    HS_W,    HC_E,    HA_I,    KC_A
#define _________________SNUSNU_R3_________________    KC_Z,    KC_G,    KC_COMM, KC_DOT,  LT_SLSH

#define ______________SNUSNU_CAPS_L1_______________    S(KC_X), S(KC_L), S(KC_D), S(KC_K), S(KC_V)
#define ______________SNUSNU_CAPS_L2_______________    S(KC_S), S(KC_R), S(KC_T), S(KC_N), S(KC_F)
#define ______________SNUSNU_CAPS_L3_______________    S(KC_Q), S(KC_J), S(KC_M), S(KC_H), S(KC_B)

#define ______________SNUSNU_CAPS_R1_______________    S(KC_P), S(KC_C), S(KC_O), S(KC_U), KC_DQUO
#define ______________SNUSNU_CAPS_R2_______________    S(KC_Y), S(KC_W), S(KC_E), S(KC_I), S(KC_A)
#define ______________SNUSNU_CAPS_R3_______________    S(KC_Z), S(KC_G), KC_LABK, KC_RABK, KC_QUES

// QWERTY
#define _________________QWERTY_L1_________________    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________    KC_A,    HA_S,    HC_D,    HS_F,    KC_G
#define _________________QWERTY_L3_________________    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________    KC_H,    HS_J,    HC_K,    HA_L,    KC_SCLN
#define _________________QWERTY_R3_________________    KC_N,    KC_M,    KC_COMM, KC_DOT,  LT_SLSH

// Navigation
#define _______________NAVIGATION_L1_______________    KC_PSCR, BACKTAB, KC_SPC,  KC_TAB,  _______
#define _______________NAVIGATION_L2_______________    KC_LCTL, ALT_ESC, CTL_BSP, SFT_ENT, KC_PGUP
#define _______________NAVIGATION_L3_______________    C(KC_S), C(KC_A), C(KC_Z), KC_DEL,  KC_PGDN

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
