#include QMK_KEYBOARD_H
#include "muse.h"

enum layers {
  L_QWERTY,
  L_GAME,
  L_TAB,
  L_NAVIGATION,
  L_NUMPAD,
  L_SYMBOL,
  L_Z,
  L_CTRL,
  L_CAPS,
};

#define HG_A      LGUI_T(KC_A)
#define HA_S      LALT_T(KC_S)
#define HC_D      LCTL_T(KC_D)
#define HS_F      LSFT_T(KC_F)
#define HS_J      RSFT_T(KC_J)
#define HC_K      LCTL_T(KC_K)
#define HA_L      LALT_T(KC_L)

#define ALT_ESC   LALT_T(KC_ESC)
#define CPS_ESC   LT(L_CTRL, KC_ESC)
#define CTL_BSP   LCTL_T(KC_BSPC)
#define CTL_ESC   LCTL_T(KC_ESC)
#define LT_E      LT(L_NUMPAD, KC_E)
// #define LT_ESC    LT(L_ESC, KC_ESC)
#define LT_I      LT(L_SYMBOL, KC_I)
#define LT_TAB    LT(L_TAB, KC_TAB)
#define LT_Z      LT(L_Z, KC_Z)
#define NAV_ENT   LT(L_NAVIGATION, KC_ENT)
#define NAV_SPC   LT(L_NAVIGATION, KC_SPC)
#define NUM_ENT   LT(L_NUMPAD, KC_ENT)
#define SFT_ENT   LSFT_T(KC_ENT)
#define SFT_F12   LSFT_T(KC_F12)
#define SFT_MNS   LSFT_T(KC_MINS)
#define SFT_SPC   LSFT_T(KC_SPC)
#define SFT_QUO   LSFT_T(KC_QUOT)
#define SYM_SPC   LT(L_SYMBOL, KC_SPC)

// Custom keys
#define LOCK      G(KC_L)
#define BACKTAB   S(KC_TAB)
#define ZOOMIN    C(KC_PLUS)
#define ZOOMOUT   C(KC_MINS)

#include "macros.h"
#include "combos.h"

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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_QWERTY] = LAYOUT_preonic_2x2u(
    KC_MPLY, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MPLY,
    LT_TAB,  KC_Q,    KC_W,    LT_E,    KC_R,    KC_T,         KC_Y,    KC_U,    LT_I,    KC_O,    KC_P,    KC_BSPC,
    CPS_ESC, HG_A,    HA_S,    HC_D,    HS_F,    KC_G,         KC_H,    HS_J,    HC_K,    HA_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, LT_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_ENT,
    KC_LCTL, KC_LGUI, KC_LALT, NUM_ENT,          NAV_SPC,      SYM_SPC,          KC_LNG1, KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [L_GAME] = LAYOUT_preonic_2x2u(
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MPLY,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_ENT,
    _______, _______, _______, _______,          KC_SPC,       _______,          _______, KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [L_TAB] = LAYOUT_preonic_2x2u(
    _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______,
    XXXXXXX, CAG_Q,   CAG_W,   CAG_E,   CAG_R,   CAG_T,        CAG_Y,   CAG_U,   CAG_I,   CAG_O,   CAG_P,   _______,
    _______, CAG_A,   CAG_S,   CAG_D,   CAG_F,   CAG_G,        CAG_H,   CAG_J,   CAG_K,   CAG_L,   CAG_SCL, _______,
    _______, CAG_Z,   CAG_X,   CAG_C,   CAG_V,   CAG_B,        CAG_N,   CAG_M,   CAG_COM ,CAG_DOT, _______, _______,
    _______, _______, _______, LCTL(S(KC_N)),    SFT_F12,      _______,          _______, _______, _______, _______
  ),

  [L_CTRL] = LAYOUT_preonic_2x2u(
    _______, C_1,     C_2,     C_3,     C_4,     C_5,          C_6,     C_7,     C_8,     C_9,     C_0,     _______,
    C_TAB,   C_Q,     C_W,     C_E,     C_R,     C_T,          C_Y,     C_U,     C_I,     C_O,     C_P,     C_BSPC,
    XXXXXXX, C_A,     C_S,     C_D,     C_F,     C_G,          C_H,     M_AE,    M_OE,    M_UE,    M_SZ,    C_QUOT,
    _______, C_Z,     C_X,     C_C,     C_V,     C_B,          C_N,     C_M,     C_COMM,  C_DOT,   _______, C_ENT,
    _______, _______, KC_BSPC, _______,          SFT_ENT,      _______,          _______, C_MINS,  C_0,     C_EQL
  ),

  [L_NAVIGATION] = LAYOUT_preonic_2x2u(
    KC_QUES, KC_EXLM, KC_PGUP, KC_PGDN, _______, _______,      _______, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
    KC_PSCR, C_S,     BACKTAB, KC_SPC,  KC_TAB,  A_TAB,        _______, KC_BSPC, KC_UP,   KC_DEL,  KC_DQUO, _______,
    CTL_ESC, KC_LGUI, ALT_ESC, CTL_BSP, SFT_ENT, C_D,          KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  KC_DQUO,
    _______, S(C_C),  C_Y,     C_Z,     KC_DEL,  S(C_D),       _______, C_C,     C_V,     C_X,     KC_QUES, _______,
    _______, _______, _______, _______,          XXXXXXX,      _______,          _______, _______, _______, _______
  ),

  [L_NUMPAD] = LAYOUT_preonic_2x2u(
    _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______,
    _______, _______, BACKTAB, KC_DOT,  KC_TAB,  _______,      KC_ASTR, KC_7,    KC_8,    KC_9,    KC_SLSH, _______,
    _______, _______, _______, _______, SFT_SPC, _______,      KC_PLUS, KC_4,    KC_5,    KC_6,    KC_DOT,  _______,
    _______, _______, _______, _______, _______, _______,      KC_MINS, KC_1,    KC_2,    KC_3,    KC_COMM, _______,
    _______, _______, _______, XXXXXXX,          _______,      KC_0,             _______, _______, _______, _______
  ),

  [L_SYMBOL] = LAYOUT_preonic_2x2u(
    _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______,
    _______, KC_HASH, KC_AT,   KC_SPC,  KC_GRV,  KC_LBRC,      KC_RBRC, KC_AMPR, KC_ASTR, KC_PIPE, KC_TILD, _______,
    _______, KC_PLUS, KC_EXLM, KC_QUES, SFT_MNS, KC_LPRN,      KC_RPRN, KC_DLR,  KC_PERC, KC_CIRC, KC_DOT,  _______,
    _______, KC_BSLS, KC_COLN, KC_SLSH, KC_UNDS, KC_LCBR,      KC_RCBR, KC_LABK, KC_EQL,  KC_RABK, _______, _______,
    _______, _______, _______, _______,          NAV_ENT,      XXXXXXX,          _______, _______, _______, _______
  ),

  [L_Z] = LAYOUT_preonic_2x2u(
    _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, KC_MUTE, LOCK,
    RGB_TOG, _______, _______, KC_UP,   _______, _______,      _______, _______, _______, _______, _______, _______,
    _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,      _______, _______, _______, _______, _______, _______,
    _______, XXXXXXX, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______,
    QK_BOOT, _______, _______, _______,          KC_LCTL,      _______,          _______, M_QWRT,  _______, M_GAME
  ),

  [L_CAPS] = LAYOUT_preonic_2x2u(
    _______, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),      S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), _______,
    _______, S(KC_Q), S(KC_W), S(KC_E), S(KC_R), S(KC_T),      S(KC_Y), S(KC_U), S(KC_I), S(KC_O), S(KC_P), KC_BSPC,
    _______, S(KC_A), S(KC_S), S(KC_D), S(KC_F), S(KC_G),      S(KC_H), S(KC_J), S(KC_K), S(KC_L), KC_COLN, KC_DQUO,
    _______, S(KC_Z), S(KC_X), S(KC_C), S(KC_V), S(KC_B),      S(KC_N), S(KC_M), KC_MINS, KC_UNDS, _______, _______,
    _______, _______, _______, _______,          XXXXXXX,      XXXXXXX,          _______, _______, _______, _______
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
    case LT_I:
      return TAPPING_TERM + 90;
    case LT_TAB:
      return 120;
    default:
      return TAPPING_TERM;
  }
}

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // case HS_F:
    // case HS_J:
    case NAV_SPC:
    case SYM_SPC:
      return true;
    default:
      return false;
  }
}

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

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
        muse_counter = (muse_counter + 4) % muse_tempo;
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

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (layer_state_is(L_NAVIGATION)) {
        if (clockwise) {
            tap_code16(KC_UP);
        } else {
            tap_code16(KC_DOWN);
        }
    } else if (layer_state_is(L_SYMBOL)) {
        if (clockwise) {
            tap_code16(C(KC_Y));
        } else {
            tap_code16(C(KC_Z));
        }
    } else {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }

    return false;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, L_NAVIGATION, L_SYMBOL, L_CAPS);
};
