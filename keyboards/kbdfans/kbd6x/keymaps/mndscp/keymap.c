#include QMK_KEYBOARD_H

#define L_CLMK    0
#define L_QWTY    1
#define L_GAME    2
#define L_ESC     3
#define L_TAB     4
#define L_CAPS    5
#define L_A       6
#define L_E       7
#define L_I       8
#define L_SCLN    9

#define LT_ESC    LT(L_ESC, KC_ESC)
#define LT_TAB    LT(L_TAB, KC_TAB)
#define LT_CAPS   LT(L_CAPS, KC_ESC)
#define LT_A      LT(L_A, KC_A)
#define LT_E      LT(L_E, KC_E)
#define LT_F      LT(L_E, KC_F)
#define LT_I      LT(L_I, KC_I)
#define LT_O      LT(L_SCLN, KC_O)
#define LT_U      LT(L_I, KC_U)
#define LT_SCLN   LT(L_SCLN, KC_SCLN)
#define LT_DEL    LT(L_CAPS, KC_DEL)
#define TG_QWTY   TG(L_QWTY)
#define TG_GAME   TG(L_GAME)

#define HA_I      LALT_T(KC_I)
#define HA_L      LALT_T(KC_L)
#define HA_S      LALT_T(KC_S)
#define HA_R      LALT_T(KC_R)
#define HC_D      LCTL_T(KC_D)
#define HC_E      LCTL_T(KC_E)
#define HC_K      LCTL_T(KC_K)
#define HC_S      LCTL_T(KC_S)
#define HS_F      LSFT_T(KC_F)
#define HS_J      RSFT_T(KC_J)
#define HS_N      RSFT_T(KC_N)
#define HS_T      RSFT_T(KC_T)
#define SFT_LNG   RSFT_T(KC_HAEN)
#define CTL_UP    LCTL_T(KC_UP)
#define ALT_BSP   LALT_T(KC_BSPC)

#define C_TAB     C(KC_TAB)
#define C_BSPC    C(KC_BSPC)
#define C_ENT     C(KC_ENT)
#define C_SCLN    C(KC_SCLN)
#define C_QUOT    C(KC_QUOT)
#define C_COMM    C(KC_COMM)
#define C_DOT     C(KC_DOT)
#define C_SLSH    C(KC_SLSH)
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
  [L_CLMK] = LAYOUT(
    LT_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_GRV,  KC_MPLY,
    LT_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, KC_BSPC,
    LT_CAPS, LT_A,    HA_R,    HC_S,    HS_T,    KC_G,    KC_M,    HS_N,    HC_E,    HA_I,    LT_O,    KC_QUOT,          KC_ENT,
    KC_LSFT, KC_X,    KC_C,    KC_D,    KC_V,    KC_Z,    KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,          SFT_LNG, LT_DEL,
    KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                                               KC_LEFT, CTL_UP,  KC_RGHT
  ),

  [L_QWTY] = LAYOUT(
    LT_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_GRV,  KC_MPLY,
    LT_TAB,  KC_Q,    KC_W,    LT_E,    KC_R,    KC_T,    KC_Y,    KC_U,    LT_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    LT_CAPS, LT_A,    HA_S,    HC_D,    HS_F,    KC_G,    KC_H,    HS_J,    HC_K,    HA_L,    LT_SCLN, KC_QUOT,          KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          SFT_LNG, LT_DEL,
    KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                                               KC_LEFT, CTL_UP,  KC_RGHT
  ),

  [L_GAME] = LAYOUT(
    LT_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_GRV,  KC_MPLY,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_DEL,
    KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                                               KC_LEFT, KC_UP,   KC_RGHT
  ),

  [L_ESC] = LAYOUT(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _LOCK,
    _______, KC_MYCM, _DSKTP,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_RCTL,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
    RESET,   _______, TG_GAME,                   TG_QWTY,                                              _______, _______, _______
  ),

  [L_TAB] = LAYOUT(
    _______, KC_F21,  KC_F22,  KC_PSCR, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, C_Q,     C_W,     C_E,     C_R,     _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, C_A,     C_S,     C_D,     C_F,     _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, C_Z,     C_X,     C_C,     C_V,     _______, _______, _______, _______, _______, _______,          _______, _______,
    _______, _______, _______,                   _______,                                              _______, _______, _______
  ),

  [L_CAPS] = LAYOUT(
    _______, C_1,     C_2,     C_3,     _______, _______, _______, _______, _______, _______, C_0,     C_MINS,  C_EQL,   C_GRV,   _______,
    C_TAB,   C_Q,     C_W,     C_E,     C_R,     C_T,     C_Y,     C_U,     C_I,     C_O,     C_P,     _______, _______, C_BSPC,
    _______, C_A,     C_S,     C_D,     C_F,     C_G,     C_H,     C_J,     C_K,     C_L,     C_SCLN,  C_QUOT,           C_ENT,
    _______, C_Z,     C_X,     C_C,     C_V,     C_B,     C_N,     C_M,     C_COMM,  C_DOT,   C_SLSH,           _______, _______,
    _______, _______, ALT_BSP,                   KC_ENT,                                               KC_PGDN, KC_DOWN, KC_PGUP
  ),

  [L_A] = LAYOUT(
    _______, _______, _______, _______, _______, _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS, KC_TILD, _______,
    _______, _______, _______, _______, _______, _______, _UNDO,   KC_HOME, KC_UP,   KC_END,  _REDO,   KC_LCBR, KC_RCBR, C_BSPC,
    _______, _______, HA_S,    KC_LCTL, KC_LSFT, S_TAB,   KC_TAB,  KC_LEFT, KC_DOWN, KC_RGHT, KC_COLN, KC_DQUO,          KC_ENT,
    _______, _______, C_X,     C_C,     C_V,     C_Z,     KC_BSPC, KC_DEL,  C_X,     C_C,     C_V,              _______, _______,
    _______, _______, _______,                   KC_ENT,                                               _______, _______, _______
  ),

  [L_E] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_BTN1, KC_MS_U, KC_BTN2, KC_BTN3, _______, _______, _______,
    _______, _______, _______, _______, KC_BTN1, _______, _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______,          _______,
    _______, _______, _______, _______, _______, _______, KC_BTN1, KC_WH_U, KC_MPLY, KC_WH_D, _______,          _______, _______,
    _______, _______, _______,                   _______,                                              _______, _______, _______
  ),

  [L_I] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
    _______, _______, _______,                   _______,                                              _______, _______, _______
  ),

  [L_SCLN] = LAYOUT(
    _______, _______, _______, KC_TAB,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_BSLS, KC_7,    KC_8,    KC_9,    KC_GRV,  _______, KC_BSPC, _______, _______, _______, _______, _______, _______,
    _______, KC_DOT,  KC_4,    KC_5,    KC_6,    KC_EQL,  KC_ASTR, KC_LSFT, _______, KC_SPC,  _______, _______,          _______,
    _______, KC_1,    KC_2,    KC_3,    _______, KC_MINS, KC_SLSH, _______, _______, _______, _______,          _______, _______,
    _______, _______, _______,                   KC_0,                                                 _______, _______, _______
  ),
};

// Set different tapping terms for some key groups
// ----------------------------------------------------------------------------
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case HA_I:
    case HA_L:
    case HA_R:
    case HA_S:
    case HC_D:
    case HC_K:
    case LT_E:
    case LT_I:
    case LT_ESC:
      return TAPPING_TERM + 80;
    case LT_CAPS:
    case LT_TAB:
      return 100;
    default:
      return TAPPING_TERM;
  }
}

// Turn off key repeat for a few keys
// ----------------------------------------------------------------------------

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LT_E:
    case LT_I:
    case LT_A:
    case HS_F:
    case HS_J:
    case HC_K:
    case HS_N:
    case HS_T:
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

  static bool I_is_pressed;

  if (layer_state_cmp(state, L_I)) {
    register_code(KC_F17);
    I_is_pressed = true;
  } else {
    if (I_is_pressed) unregister_code(KC_F17);
    I_is_pressed = false;
  }

  return state;
}

// Combos
// ----------------------------------------------------------------------------

enum combo_events {
  PRNS,
  LPRN,
  RPRN,
  CBRS,
  LCBR,
  RCBR,
  BRCS,
  LBRC,
  RBRC,
  ABKS,
  LABK,
  RABK,
  AE,
  OE,
  UE,
  SZ
};

const uint16_t PROGMEM combo01[] = {KC_W, KC_P, COMBO_END};
const uint16_t PROGMEM combo02[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM combo03[] = {KC_F, KC_P, COMBO_END};

const uint16_t PROGMEM combo04[] = {KC_X, KC_D, COMBO_END};
const uint16_t PROGMEM combo05[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo06[] = {KC_C, KC_D, COMBO_END};

const uint16_t PROGMEM combo07[] = {KC_L, KC_Y, COMBO_END};
const uint16_t PROGMEM combo08[] = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM combo09[] = {KC_U, KC_Y, COMBO_END};

const uint16_t PROGMEM combo10[] = {KC_H, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo11[] = {KC_H, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo12[] = {KC_COMM, KC_DOT, COMBO_END};

const uint16_t PROGMEM combo13[] = {KC_P, KC_L, COMBO_END};
const uint16_t PROGMEM combo14[] = {KC_P, KC_J, COMBO_END};
const uint16_t PROGMEM combo15[] = {KC_B, KC_L, COMBO_END};
const uint16_t PROGMEM combo16[] = {KC_B, KC_J, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [PRNS] = COMBO_ACTION(combo01),
  [LPRN] = COMBO_ACTION(combo02),
  [RPRN] = COMBO_ACTION(combo03),
  [CBRS] = COMBO_ACTION(combo10),
  [LCBR] = COMBO_ACTION(combo11),
  [RCBR] = COMBO_ACTION(combo12),
  [BRCS] = COMBO_ACTION(combo07),
  [LBRC] = COMBO_ACTION(combo08),
  [RBRC] = COMBO_ACTION(combo09),
  [ABKS] = COMBO_ACTION(combo04),
  [LABK] = COMBO_ACTION(combo05),
  [RABK] = COMBO_ACTION(combo06),
  [AE] = COMBO_ACTION(combo13),
  [OE] = COMBO_ACTION(combo14),
  [UE] = COMBO_ACTION(combo15),
  [SZ] = COMBO_ACTION(combo16)
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case PRNS:
      if (pressed) {
        tap_code16(KC_LPRN);
        tap_code16(KC_RPRN);
        tap_code16(KC_LEFT);
      }
      break;
    case LPRN:
      if (pressed) {
        tap_code16(KC_LPRN);
      }
      break;
    case RPRN:
      if (pressed) {
        tap_code16(KC_RPRN);
      }
      break;
    case CBRS:
      if (pressed) {
        tap_code16(KC_LCBR);
        tap_code16(KC_RCBR);
        tap_code16(KC_LEFT);
      }
      break;
    case LCBR:
      if (pressed) {
        tap_code16(KC_LCBR);
      }
      break;
    case RCBR:
      if (pressed) {
        tap_code16(KC_RCBR);
      }
      break;
    case BRCS:
      if (pressed) {
        tap_code16(KC_LBRC);
        tap_code16(KC_RBRC);
        tap_code16(KC_LEFT);
      }
      break;
    case LBRC:
      if (pressed) {
        tap_code16(KC_LBRC);
      }
      break;
    case RBRC:
      if (pressed) {
        tap_code16(KC_RBRC);
      }
      break;
    case ABKS:
      if (pressed) {
        tap_code16(KC_LABK);
        tap_code16(KC_RABK);
        tap_code16(KC_LEFT);
      }
      break;
    case LABK:
      if (pressed) {
        tap_code16(KC_LABK);
      }
      break;
    case RABK:
      if (pressed) {
        tap_code16(KC_RABK);
      }
      break;
    case AE:
      if (pressed) {
        register_code(KC_F17);
        tap_code16(KC_T);
        unregister_code(KC_F17);
      }
      break;
    case OE:
      if (pressed) {
        register_code(KC_F17);
        tap_code16(KC_S);
        unregister_code(KC_F17);
      }
      break;
    case UE:
      if (pressed) {
        register_code(KC_F17);
        tap_code16(KC_R);
        unregister_code(KC_F17);
      }
      break;
    case SZ:
      if (pressed) {
        register_code(KC_F17);
        tap_code16(KC_A);
        unregister_code(KC_F17);
      }
      break;
  }
}
