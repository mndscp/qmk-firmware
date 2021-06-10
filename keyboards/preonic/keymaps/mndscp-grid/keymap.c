#include QMK_KEYBOARD_H
#include "muse.h"

enum preonic_layers {
  LAYER_COLEMAK,
  LAYER_QWERTY,
  LAYER_GAME,
  LAYER_LOWER,
  LAYER_RAISE,
  LAYER_ADJUST,
  LAYER_A,
  LAYER_O,
  LAYER_TAB,
  LAYER_CTRL
};

enum preonic_keycodes {
  CLMK = SAFE_RANGE,
  QWRT,
  GAME,
  LOWER,
  RAISE,
  REPEAT
};

#define _LOCK     G(KC_L)
#define _UNDO     C(KC_Z)

// Hold-taps
#define LT_TAB    LT(LAYER_TAB, KC_TAB)
#define LT_CTRL   LT(LAYER_CTRL, KC_ESC)
#define LT_A      LT(LAYER_A, KC_A)
#define LT_O      LT(LAYER_O, KC_O)
#define LT_SCLN   LT(LAYER_O, KC_SCLN)
#define SFT_MIN   SFT_T(KC_MINS)
#define SFT_SPC   SFT_T(KC_SPC)

// Homerow mods Colemak
#define HA_R      LALT_T(KC_R)
#define HC_S      LCTL_T(KC_S)
#define HS_T      RSFT_T(KC_T)
#define HS_N      RSFT_T(KC_N)
#define HC_E      LCTL_T(KC_E)
#define HA_I      LALT_T(KC_I)

// Homerow mods Qwerty
#define HA_S      LALT_T(KC_S)
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
#define S_TAB     S(KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Colemak
  * ,-----------------------------------------------------------------------------------.
  * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Mply |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Tab  |   Q  |   W  |   G  |   P  |   G  |   J  |   L  |   U  |   Y  |  '   | Bksp |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl |   A  |   R  |   S  |   T  |   F  |   M  |   N  |   E  |   I  |   O  |Enter |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Shift|   Z  |   X  |   C  |   D  |   K  |   V  |   H  |   ,  |   .  |  Up  | Del  |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl | GUI  | Alt  |      |Lower |Shift |Space |Raise |      | Left | Down |Right |
  * `-----------------------------------------------------------------------------------'
  */
  [LAYER_COLEMAK] = LAYOUT_preonic_grid(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MPLY,
    LT_TAB,  KC_Q,    KC_W,    KC_G,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT, KC_BSPC,
    LT_CTRL, LT_A,    HA_R,    HC_S,    HS_T,    KC_F,    KC_M,    HS_N,    HC_E,    HA_I,    LT_O,    KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_D,    KC_K,    KC_V,    KC_H,    KC_COMM, KC_DOT,  KC_UP,   KC_DEL,
    KC_LCTL, KC_LGUI, KC_LALT, LOWER,   SFT_SPC, REPEAT,  KC_SPC,  _______, RAISE,   KC_LEFT, KC_DOWN, KC_RGHT
  ),

/* Qwerty
  * ,-----------------------------------------------------------------------------------.
  * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Mply |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  Up  |Enter |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl | GUI  | Alt  |      |Lower |Shift |Space |Raise |      | Left | Down |Right |
  * `-----------------------------------------------------------------------------------'
  */
  [LAYER_QWERTY] = LAYOUT_preonic_grid(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MPLY,
    LT_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    LT_CTRL, LT_A,    HA_S,    HC_D,    HS_F,    KC_G,    KC_H,    HS_J,    HC_K,    HA_L,    LT_SCLN, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SLSH,
    KC_LCTL, KC_LGUI, KC_LALT, LOWER,   SFT_SPC, REPEAT,  KC_SPC,  _______, RAISE,   KC_LEFT, KC_DOWN, KC_RGHT
  ),

/* Game
  * ,-----------------------------------------------------------------------------------.
  * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Mply |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl | GUI  | Alt  |      |Lower |Shift |Space |Raise |      | Left | Down |Right |
  * `-----------------------------------------------------------------------------------'
  */
  [LAYER_GAME] = LAYOUT_preonic_grid(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MPLY,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
    KC_LCTL, KC_LGUI, KC_LALT, LOWER,   _______, KC_LSFT, KC_SPC,  _______, RAISE,   KC_LEFT, KC_UP,   KC_RGHT
  ),

  /* Lower
  * ,-----------------------------------------------------------------------------------.
  * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Mply |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | | Home | End  |      |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl | GUI  | Alt  |      |Lower |Shift |Space |Raise |      | Left | Down |Right |
  * `-----------------------------------------------------------------------------------'
  */
  [LAYER_LOWER] = LAYOUT_preonic_grid(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_COMM, KC_TILD, KC_SCLN, KC_QUES, _______, _______, _______, KC_7,    KC_8,    KC_9,    _______, _______,
    _______, KC_GRV,  KC_COLN, KC_EXLM, SFT_MIN, _______, KC_PLUS, KC_4,    KC_5,    KC_6,    KC_DOT,  _______,
    _______, KC_BSLS, KC_PIPE, KC_SLSH, KC_UNDS, _______, KC_EQL,  KC_1,    KC_2,    KC_3,    KC_COMM, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_0,    _______, _______, _______, _______
  ),

  /* Raise
  * ,-----------------------------------------------------------------------------------.
  * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / | Pg Up| Pg Dn|      |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl | GUI  | Alt  |      |Lower |Shift |Space |Raise |      | Left | Down |Right |
  * `-----------------------------------------------------------------------------------'
  */
  [LAYER_RAISE] = LAYOUT_preonic_grid(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_F19,  _______, _______, _______,
    _______, KC_F17,  _______, KC_F18,  _______, _______, _______, _______, _______, _______, KC_F20,  _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, C_UP,    _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, C_LEFT,  C_DOWN,  C_RGHT
  ),

  /* Adjust (Lower + Raise)
  * ,-----------------------------------------------------------------------------------.
  * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |      | Reset| Debug|      |      |      |      |TermOf|TermOn|      |      | Bksp |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |      |      |Aud cy|Aud on|AudOff|AGnorm|AGswap|Colemk|Qwerty| Game |      |      |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |      |Voice-|Voice+|Mus on|MusOff|MidiOn|MidOff|      |      |      |      |      |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl | GUI  | Alt  |      |Lower |Shift |Space |Raise |      | Left | Down |Right |
  * `-----------------------------------------------------------------------------------'
  */
  [LAYER_ADJUST] = LAYOUT_preonic_grid(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    RESET,   _______, _______, _______, _______, _______, _______, KC_HAEN, QWRT,    CLMK,    GAME,    _______,
    REPEAT,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_RCTL, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [LAYER_A] = LAYOUT_preonic_grid(
    _______, _______, _______, _______, _______, _______, _______, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,
    _______, _______, _______, _______, _______, _______, _UNDO,   KC_HOME, KC_UP,   KC_END,  KC_COLN, C_BSPC,
    _______, _______, HA_S,    KC_LCTL, KC_LSFT, S_TAB,   KC_TAB,  KC_LEFT, KC_DOWN, KC_RGHT, KC_ESC,  C_QUOT,
    _______, _______, C_X,     C_C,     C_V,     _______, KC_BSPC, KC_DEL,  C_X,     C_C,     C_V,     _______,
    _______, _______, _______, _______, _______, KC_ENT,  _______, _______, _______, _______, _______, _______
  ),

  [LAYER_TAB] = LAYOUT_preonic_grid(
    _______, KC_F21,  KC_F22,  KC_PSCR, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, C_Q,     C_W,     C_E,     C_R,     _______, _______, _______, _______, _______, _______, _______,
    _______, C_A,     C_S,     C_D,     C_F,     _______, _______, _______, _______, _______, _______, _______,
    _______, C_Z,     C_X,     C_C,     C_V,     _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [LAYER_CTRL] = LAYOUT_preonic_grid(
    _______, C_1,     C_2,     C_3,     _______, _______, _______, _______, _______, _______, _______, _LOCK,
    C_TAB,   C_Q,     C_W,     C_E,     C_R,     C_T,     C_Y,     _______, _______, _______, _______, _______,
    _______, C_A,     C_S,     C_D,     C_F,     C_G,     C_J,     _______, _______, _______, _______, _______,
    _______, C_Z,     C_X,     C_C,     C_V,     C_B,     C_N,     _______, C_COMM,  C_DOT,   C_SLSH,  _______,
    _______, _______, _______, KC_BSPC, KC_ENT,  _______, _______, _______, _______, C_MINS,  C_0,     C_EQL
  )

  // [TEMPLATE] = LAYOUT_preonic_grid(
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
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
    case HC_D:
    case HC_K:
      return TAPPING_TERM + 80;
    case LT_CTRL:
      return 100;
    case LT_TAB:
      return 140;
    default:
      return TAPPING_TERM;
  }
}

// Turn off key repeat for a few keys
// ----------------------------------------------------------------------------

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
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

  if (layer_state_cmp(state, LAYER_TAB)) {
    register_code(KC_F14);
    TAB_is_pressed = true;
  } else {
    if (TAB_is_pressed) unregister_code(KC_F14);
    TAB_is_pressed = false;
  }

  static bool CTRL_is_pressed;

  if (layer_state_cmp(state, LAYER_CTRL)) {
    register_code(KC_F13);
    CTRL_is_pressed = true;
  } else {
    if (CTRL_is_pressed) unregister_code(KC_F13);
    CTRL_is_pressed = false;
  }

  static bool A_is_pressed;

  if (layer_state_cmp(state, LAYER_A)) {
    register_code(KC_F16);
    A_is_pressed = true;
  } else {
    if (A_is_pressed) unregister_code(KC_F16);
    A_is_pressed = false;
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
  RABK
};

const uint16_t PROGMEM combo01[] = {KC_W, KC_P, COMBO_END};
const uint16_t PROGMEM combo02[] = {KC_W, KC_G, COMBO_END};
const uint16_t PROGMEM combo03[] = {KC_G, KC_P, COMBO_END};

const uint16_t PROGMEM combo04[] = {KC_X, KC_D, COMBO_END};
const uint16_t PROGMEM combo05[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo06[] = {KC_C, KC_D, COMBO_END};

const uint16_t PROGMEM combo07[] = {KC_L, KC_Y, COMBO_END};
const uint16_t PROGMEM combo08[] = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM combo09[] = {KC_U, KC_Y, COMBO_END};

const uint16_t PROGMEM combo10[] = {KC_H, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo11[] = {KC_H, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo12[] = {KC_COMM, KC_DOT, COMBO_END};

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
  [RABK] = COMBO_ACTION(combo06)
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
  }
}

// Repeat key
// ----------------------------------------------------------------------------

// Used to extract the basic tapping keycode from a dual-role key.
// Example: GET_TAP_KC(MT(MOD_RSFT, KC_E)) == KC_E
#define GET_TAP_KC(dual_role_key) dual_role_key & 0xFF
uint16_t last_keycode = KC_NO;
uint8_t last_modifier = 0;

// Initialize variables holding the bitfield
// representation of active modifiers.
uint8_t mod_state;
uint8_t oneshot_mod_state;

void process_repeat_key(uint16_t keycode, const keyrecord_t *record) {
    if (keycode != REPEAT) {
        last_modifier = oneshot_mod_state > mod_state ? oneshot_mod_state : mod_state;
        switch (keycode) {
            case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
            case QK_MOD_TAP ... QK_MOD_TAP_MAX:
                if (record->event.pressed) {
                    last_keycode = GET_TAP_KC(keycode);
                }
                break;
            case QK_MOMENTARY ... QK_MOMENTARY_MAX:
                return; // to avoid modifier loss
            default:
                if (record->event.pressed) {
                    last_keycode = keycode;
                }
                break;
        }
    } else { // keycode == REPEAT
        if (record->event.pressed) {
            register_mods(last_modifier);
            register_code16(last_keycode);
        } else {
            unregister_code16(last_keycode);
            unregister_mods(last_modifier);
        }
    }
}

// Preonic
// ----------------------------------------------------------------------------

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  process_repeat_key(keycode, record);
  // It's important to update the mod variables *after* calling process_repeat_key, or else
  // only a single modifier from the previous key is repeated (e.g. Ctrl+Shift+T then Repeat produces Shift+T)
  mod_state = get_mods();
  oneshot_mod_state = get_oneshot_mods();

  switch (keycode) {
        case CLMK:
          if (record->event.pressed) {
            set_single_persistent_default_layer(LAYER_COLEMAK);
          }
          return false;
          break;
        case QWRT:
          if (record->event.pressed) {
            set_single_persistent_default_layer(LAYER_QWERTY);
          }
          return false;
          break;
        case GAME:
          if (record->event.pressed) {
            set_single_persistent_default_layer(LAYER_GAME);
          }
          return false;
          break;
        case LOWER:
          if (record->event.pressed) {
            layer_on(LAYER_LOWER);
            update_tri_layer(LAYER_LOWER, LAYER_RAISE, LAYER_ADJUST);
          } else {
            layer_off(LAYER_LOWER);
            update_tri_layer(LAYER_LOWER, LAYER_RAISE, LAYER_ADJUST);
          }
          return false;
          break;
        case RAISE:
          if (record->event.pressed) {
            layer_on(LAYER_RAISE);
            update_tri_layer(LAYER_LOWER, LAYER_RAISE, LAYER_ADJUST);
          } else {
            layer_off(LAYER_RAISE);
            update_tri_layer(LAYER_LOWER, LAYER_RAISE, LAYER_ADJUST);
          }
          return false;
          break;
      }
    return true;
};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if (active) {
                layer_on(LAYER_ADJUST);
            } else {
                layer_off(LAYER_ADJUST);
            }
            break;
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
}

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

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}
