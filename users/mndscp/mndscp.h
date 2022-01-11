// Homerow mods
// ----------------------------------------------------------------------------

// Colemak
#define HG_A      LGUI_T(KC_A)
#define HA_R      LALT_T(KC_R)
#define HC_S      LCTL_T(KC_S)
#define HS_T      LSFT_T(KC_T)
#define HS_N      RSFT_T(KC_N)
#define HC_E      LCTL_T(KC_E)
#define HA_I      LALT_T(KC_I)
#define HG_O      LGUI_T(KC_O)

// Other layouts
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

#define __________________SNUG_L1__________________    LT_X,    KC_L,    LT_D,    KC_M,    KC_B
#define __________________SNUG_L2__________________    LT_S,    HA_R,    HC_T,    HS_N,    KC_F
#define __________________SNUG_L3__________________    LT_Z,    KC_J,    KC_K,    KC_H,    KC_V

#define __________________SNUG_R1__________________    KC_Y,    KC_W,    KC_O,    KC_U,    KC_Q
#define __________________SNUG_R2__________________    KC_P,    HS_C,    HC_E,    HA_I,    KC_A
#define __________________SNUG_R3__________________    KC_QUOT, KC_G,    KC_COMM, KC_DOT,  LT_SLSH

#define _________________SNUGX_L1__________________    LT_X,    KC_L,    LT_D,    KC_M,    KC_B
#define _________________SNUGX_L2__________________    LT_S,    HA_R,    HC_T,    HS_N,    KC_F
#define _________________SNUGX_L3__________________    LT_Z,    KC_J,    KC_K,    KC_H,    KC_V

#define _________________SNUGX_R1__________________    KC_Y,    KC_W,    KC_O,    KC_U,    KC_Q
#define _________________SNUGX_R2__________________    KC_P,    HS_G,    HC_E,    HA_I,    KC_A
#define _________________SNUGX_R3__________________    KC_QUOT, KC_C,    KC_COMM, KC_DOT,  LT_SLSH

#define _______________SNUG_CAPS_L1________________    S(KC_X), S(KC_L), S(KC_D), S(KC_M), S(KC_B)
#define _______________SNUG_CAPS_L2________________    S(KC_S), S(KC_R), S(KC_T), S(KC_N), S(KC_F)
#define _______________SNUG_CAPS_L3________________    S(KC_Z), S(KC_J), S(KC_K), S(KC_H), S(KC_V)

#define _______________SNUG_CAPS_R1________________    S(KC_Y), S(KC_W), S(KC_O), S(KC_U), S(KC_Q)
#define _______________SNUG_CAPS_R2________________    S(KC_P), S(KC_C), S(KC_E), S(KC_I), S(KC_A)
#define _______________SNUG_CAPS_R3________________    KC_DQUO, S(KC_G), KC_LABK, KC_RABK, KC_QUES

// Colemak-Qiou
#define ______________COLEMAK_QIOU_L1______________    LT_Q,    KC_L,    LT_C,    KC_M,    KC_K
#define ______________COLEMAK_QIOU_L2______________    LT_A,    HA_R,    HC_S,    HS_T,    KC_G
#define ______________COLEMAK_QIOU_L3______________    LT_Z,    KC_X,    KC_W,    KC_D,    KC_V

#define ______________COLEMAK_QIOU_R1______________    KC_J,    KC_F,    KC_O,    KC_Y,    KC_QUOT
#define ______________COLEMAK_QIOU_R2______________    KC_B,    HS_N,    HC_E,    HA_I,    KC_U
#define ______________COLEMAK_QIOU_R3______________    KC_P,    KC_H,    KC_COMM, KC_DOT,  LT_SLSH

#define ____________COLEMAK_QIOU_CAPS_L1___________    S(KC_Q), S(KC_L), S(KC_C), S(KC_M), S(KC_K)
#define ____________COLEMAK_QIOU_CAPS_L2___________    S(KC_A), S(KC_R), S(KC_S), S(KC_T), S(KC_G)
#define ____________COLEMAK_QIOU_CAPS_L3___________    S(KC_Z), S(KC_X), S(KC_W), S(KC_D), S(KC_V)

#define ____________COLEMAK_QIOU_CAPS_R1___________    S(KC_J), S(KC_F), S(KC_O), S(KC_Y), KC_DQUO
#define ____________COLEMAK_QIOU_CAPS_R2___________    S(KC_B), S(KC_N), S(KC_E), S(KC_I), S(KC_U)
#define ____________COLEMAK_QIOU_CAPS_R3___________    S(KC_P), S(KC_H), KC_MINS, KC_EXLM, KC_QUES

// QWERTY
#define _________________QWERTY_L1_________________    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________    KC_A,    HA_S,    HC_D,    HS_F,    KC_G
#define _________________QWERTY_L3_________________    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________    KC_H,    HS_J,    HC_K,    HA_L,    KC_SCLN
#define _________________QWERTY_R3_________________    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

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
