#include QMK_KEYBOARD_H

enum layers {
  L_QWERTY,
  L_GAME,
  L_NAVIGATION,
  L_ESC,
  L_TAB,
  L_CTRL,
  L_Z,
  L_NUMBERS,
  L_SYMBOLS,
};

// QWERTY homerow mods
#define HG_A      LGUI_T(KC_A)
#define HA_S      LALT_T(KC_S)
#define HC_D      LCTL_T(KC_D)
#define HS_F      LSFT_T(KC_F)
#define HS_J      RSFT_T(KC_J)
#define HC_K      LCTL_T(KC_K)
#define HA_L      LALT_T(KC_L)

// Hold-tap layers and mods
#define ALT_ESC   LALT_T(KC_ESC)
#define ALT_NXT   LALT_T(KC_MNXT)
#define CPS_ESC   LT(L_CTRL, KC_ESC)
#define CTL_BSP   LCTL_T(KC_BSPC)
#define CTL_ESC   LCTL_T(KC_ESC)
#define CTL_PRV   LCTL_T(KC_MPRV)
#define GUI_PLY   LGUI_T(KC_MPLY)
#define LT_E      LT(L_NUMBERS, KC_E)
#define LT_F      LT(L_NUMBERS, KC_F)
#define LT_ESC    LT(L_ESC, KC_ESC)
#define LT_I      LT(L_SYMBOLS, KC_I)
#define LT_TAB    LT(L_TAB, KC_TAB)
#define LT_Z      LT(L_Z, KC_Z)
#define NAV_SPC   LT(L_NAVIGATION, KC_SPC)
#define OSL_CTL   OSL(L_CTRL)
#define OSM_SFT   OSM(MOD_LSFT)
#define SFT_ENT   LSFT_T(KC_ENT)
#define SFT_F12   LSFT_T(KC_F12)
#define SFT_SPC   LSFT_T(KC_SPC)
#define SFT_PSC   LSFT_T(KC_PSCR)

// Hold-tap simple keys
#define H_1       LT(1, KC_EXLM)
#define H_2       LT(2, KC_AT)
#define H_3       LT(3, KC_HASH)
#define H_4       LT(4, KC_DLR)
#define H_5       LT(5, KC_PERC)
#define H_6       LT(6, KC_CIRC)
#define H_7       LT(7, KC_AMPR)
#define H_8       LT(8, KC_ASTR)
#define H_9       LT(9, KC_LPRN)
#define H_0       LT(0, KC_RPRN)

#include "macros.h"
#include "combos.h"

// Modded keys
#define A_TAB     A(KC_TAB)
#define C_BSPC    C(KC_BSPC)
#define C_COMM    C(KC_COMM)
#define C_DEL     C(KC_DEL)
#define C_DOT     C(KC_DOT)
#define C_ENT     C(KC_ENT)
#define C_EQL     C(KC_EQL)
#define C_GRV     C(KC_GRV)
#define C_MINS    C(KC_MINS)
#define C_QUOT    C(KC_QUOT)
#define C_TAB     C(KC_TAB)
#define C_0       C(KC_0)
#define C_1       C(KC_1)
#define C_2       C(KC_2)
#define C_3       C(KC_3)
#define C_4       C(KC_4)
#define C_5       C(KC_5)
#define C_6       C(KC_6)
#define C_7       C(KC_7)
#define C_8       C(KC_8)
#define C_9       C(KC_9)
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
#define CAG_0     LCAG(KC_0)
#define CAG_1     LCAG(KC_1)
#define CAG_2     LCAG(KC_2)
#define CAG_3     LCAG(KC_3)
#define CAG_4     LCAG(KC_4)
#define CAG_5     LCAG(KC_5)
#define CAG_6     LCAG(KC_6)
#define CAG_7     LCAG(KC_7)
#define CAG_Q     LCAG(KC_Q)
#define CAG_W     LCAG(KC_W)
#define CAG_E     LCAG(KC_E)
#define CAG_R     LCAG(KC_R)
#define CAG_T     LCAG(KC_T)
#define CAG_Y     LCAG(KC_Y)
#define CAG_U     LCAG(KC_U)
#define CAG_I     LCAG(KC_I)
#define CAG_O     LCAG(KC_O)
#define CAG_P     LCAG(KC_P)
#define CAG_A     LCAG(KC_A)
#define CAG_S     LCAG(KC_S)
#define CAG_D     LCAG(KC_D)
#define CAG_F     LCAG(KC_F)
#define CAG_G     LCAG(KC_G)
#define CAG_H     LCAG(KC_H)
#define CAG_J     LCAG(KC_J)
#define CAG_K     LCAG(KC_K)
#define CAG_L     LCAG(KC_L)
#define CAG_SCL   LCAG(KC_SCLN)
#define CAG_Z     LCAG(KC_Z)
#define CAG_X     LCAG(KC_X)
#define CAG_C     LCAG(KC_C)
#define CAG_V     LCAG(KC_V)
#define CAG_B     LCAG(KC_B)
#define CAG_N     LCAG(KC_N)
#define CAG_M     LCAG(KC_M)
#define CAG_COM   LCAG(KC_COMM)
#define CAG_DOT   LCAG(KC_DOT)
#define CAG_EQL   LCAG(KC_EQL)
#define CAG_MIN   LCAG(KC_MINS)
#define G_ENT     G(KC_ENT)
#define CS_N      LCTL(S(KC_N))

// Custom keys
#define MO_CTRL   MO(L_CTRL)
#define LOCK      G(KC_L)
#define BACKTAB   S(KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_QWERTY] = LAYOUT_64_ansi_split_bs(
    LT_ESC,  H_1,     H_2,     H_3,     H_4,     H_5,     H_6,     H_7,     H_8,     H_9,     H_0,     KC_MINS, KC_EQL,  KC_GRV,  GUI_PLY,
    LT_TAB,  KC_Q,    KC_W,    LT_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    MO_CTRL, HG_A,    HA_S,    HC_D,    HS_F,    KC_G,    KC_H,    HS_J,    HC_K,    HA_L,    KC_SCLN, KC_QUOT, KC_ENT,
    OSM_SFT, LT_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS, KC_UP,   KC_DEL,
    CTL_PRV, GUI_PLY, ALT_NXT,                   NAV_SPC,                                     KC_LNG1, CAG_7,   KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [L_GAME] = LAYOUT_64_ansi_split_bs(
    LT_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_PSCR,  GUI_PLY,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS, KC_UP,   KC_DEL,
    KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                                      KC_LNG1, KC_F12,  KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [L_ESC] = LAYOUT_64_ansi_split_bs(
    XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_MUTE, LOCK,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_P,    _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    QK_BOOT, _______, _______,                   _______,                                     _______, _______, M_QWRT,  _______, M_GAME
  ),

  [L_TAB] = LAYOUT_64_ansi_split_bs(
    _______, KC_F21,  KC_F22,  KC_PSCR, _______, _______, _______, _______, _______, _______, _______, CAG_MIN, CAG_EQL, KC_F16,  KC_F17,
    XXXXXXX, CAG_Q,   CAG_W,   CAG_E,   CAG_R,   CAG_T,   CAG_Y,   CAG_U,   CAG_I,   CAG_O,   CAG_P,   _______, _______, _______,
    _______, CAG_A,   CAG_S,   CAG_D,   CAG_F,   CAG_G,   CAG_H,   CAG_J,   CAG_K,   CAG_L,   CAG_SCL, _______, _______,
    _______, CAG_Z,   CAG_X,   CAG_C,   CAG_V,   CAG_B,   CAG_N,   CAG_M,   CAG_COM ,CAG_DOT, _______, _______, _______, _______,
    _______, _______, CS_N,                      SFT_F12,                                     _______, _______, _______, _______, _______
  ),

  [L_CTRL] = LAYOUT_64_ansi_split_bs(
    _______, C_1,     C_2,     C_3,     C_4,     C_5,     C_6,     C_7,     C_8,     C_9,     C_0,     C_MINS,  C_EQL,   C_GRV,   _______,
    C_TAB,   C_Q,     C_W,     C_E,     C_R,     C_T,     _______, M_BAE,   M_BOE,   M_BUE,   M_BSZ,   _______, _______, C_BSPC,
    XXXXXXX, C_A,     C_S,     C_D,     C_F,     C_G,     C_H,     M_AE,    M_OE,    M_UE,    M_SZ,    C_QUOT,  C_ENT,
    _______, C_Z,     C_X,     C_C,     C_V,     C_B,     _______, _______, C_COMM,  _______, _______, _______, _______, _______,
    _______, _______, KC_BSPC,                   SFT_ENT,                                     _______, _______, C_MINS,  C_0,     C_EQL
  ),

  [L_NAVIGATION] = LAYOUT_64_ansi_split_bs(
    CAG_0,   CAG_1,   CAG_2,   CAG_3,   CAG_4,   CAG_5,   CAG_6,   CAG_7,   KC_ASTR, KC_LPRN, KC_RPRN, _______, _______, _______, _______,
    SFT_PSC, S(C_C),  BACKTAB, KC_SPC,  KC_TAB,  A_TAB,   _______, KC_BSPC, KC_UP,   KC_DEL,  A(KC_P), KC_LCBR, KC_RCBR, _______,
    CTL_ESC, G(KC_Y), ALT_ESC, CTL_BSP, SFT_ENT, C_D,     KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  KC_DQUO, M_QENT,
    _______, CAG_0,   C_Y,     C_Z,     KC_DEL,  S(C_D),  A(KC_N), C_C,     C_V,     C_X,     KC_QUES, _______, _______, _______,
    _______, _______, _______,                   XXXXXXX,                                     _______, _______, _______, _______, _______
  ),

  [L_NUMBERS] = LAYOUT_64_ansi_split_bs(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, BACKTAB, XXXXXXX, KC_TAB,  _______, KC_ASTR, KC_7,    KC_8,    KC_9,    KC_SLSH, _______, _______, _______,
    _______, _______, _______, _______, SFT_SPC, _______, KC_PLUS, KC_4,    KC_5,    KC_6,    KC_DOT,  _______, _______,
    _______, _______, _______, _______, _______, _______, KC_MINS, KC_1,    KC_2,    KC_3,    KC_COMM, _______, _______, _______,
    _______, _______, _______,                   KC_0,                                        _______, _______, _______, _______, _______
  ),

  [L_SYMBOLS] = LAYOUT_64_ansi_split_bs(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_SCLN, KC_COLN, KC_QUES, KC_EXLM, KC_MINS, _______, KC_BSPC, XXXXXXX, S(KC_D), S(KC_P), _______, _______, _______,
    _______, KC_LCBR, KC_LBRC, KC_LPRN, KC_RPRN, KC_RBRC, KC_RCBR, KC_SPC,  _______, KC_DEL,  _______, _______, _______,
    _______, _______, KC_QUOT, KC_GRV,  KC_DQUO, KC_UNDS, _______, KC_SPC,  _______, _______, _______, _______, _______, _______,
    _______, _______, _______,                   KC_ENT,                                      _______, _______, _______, _______, _______
  ),

  [L_Z] = LAYOUT_64_ansi_split_bs(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, XXXXXXX, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______,                   KC_LCTL,                                     _______, _______, _______, _______, _______
  )
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case HG_A:
    case HA_S:
    case HA_L:
    case HC_D:
    case HC_K:
    case LT_E:
    case LT_ESC:
      return TAPPING_TERM + 100;
    case LT_TAB:
      return 120;
    default:
      return TAPPING_TERM;
  }
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case HS_F:
    case HS_J:
    case NAV_SPC:
      return 0;
    default:
      return QUICK_TAP_TERM;
  }
}
