// Macros
// ----------------------------------------------------------------------------

enum macros {
  M_QWRT = SAFE_RANGE,
  M_GAME,
  M_AE,
  M_OE,
  M_UE,
  M_SZ,
  M_BAE,
  M_BOE,
  M_BUE,
  M_BSZ,
  M_QENT,
  A_2TAB,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LT(1, KC_EXLM):
      if (record->tap.count && record->event.pressed) {
          return true;
          break;
      } else if (record->event.pressed) {
          tap_code16(KC_EXLM);

          return false;
      }

      return true;
    case LT(2, KC_AT):
      if (record->tap.count && record->event.pressed) {
          return true;
          break;
      } else if (record->event.pressed) {
          tap_code16(KC_AT);

          return false;
      }

      return true;
    case LT(3, KC_HASH):
      if (record->tap.count && record->event.pressed) {
          return true;
          break;
      } else if (record->event.pressed) {
          tap_code16(KC_HASH);

          return false;
      }

      return true;
    case LT(4, KC_DLR):
      if (record->tap.count && record->event.pressed) {
          return true;
          break;
      } else if (record->event.pressed) {
          tap_code16(KC_DLR);

          return false;
      }

      return true;
    case LT(5, KC_PERC):
      if (record->tap.count && record->event.pressed) {
          return true;
          break;
      } else if (record->event.pressed) {
          tap_code16(KC_PERC);

          return false;
      }

      return true;
    case LT(6, KC_CIRC):
      if (record->tap.count && record->event.pressed) {
          return true;
          break;
      } else if (record->event.pressed) {
          tap_code16(KC_CIRC);

          return false;
      }

      return true;
    case LT(7, KC_AMPR):
      if (record->tap.count && record->event.pressed) {
          return true;
          break;
      } else if (record->event.pressed) {
          tap_code16(KC_AMPR);

          return false;
      }

      return true;
    case LT(8, KC_ASTR):
      if (record->tap.count && record->event.pressed) {
          return true;
          break;
      } else if (record->event.pressed) {
          tap_code16(KC_ASTR);

          return false;
      }

      return true;
    case LT(9, KC_LPRN):
      if (record->tap.count && record->event.pressed) {
          return true;
          break;
      } else if (record->event.pressed) {
          tap_code16(KC_LPRN);

          return false;
      }

      return true;
    case LT(0, KC_RPRN):
      if (record->tap.count && record->event.pressed) {
          return true;
          break;
      } else if (record->event.pressed) {
          tap_code16(KC_RPRN);

          return false;
      }

      return true;
    case M_GAME:
      if (record->event.pressed) {
        set_single_persistent_default_layer(L_GAME);
      }

      return false;
      break;
    case M_QWRT:
      if (record->event.pressed) {
        set_single_persistent_default_layer(L_QWERTY);
      }

      return false;
      break;
    case M_AE:
      if (record->event.pressed) {
        tap_code16(RALT(KC_A));
      }

      return false;
      break;
    case M_OE:
      if (record->event.pressed) {
        tap_code16(RALT(KC_O));
      }

      return false;
      break;
    case M_UE:
      if (record->event.pressed) {
        tap_code16(RALT(KC_U));
      }

      return false;
      break;
    case M_SZ:
      if (record->event.pressed) {
        tap_code16(RALT(KC_S));
      }

      return false;
      break;
    case M_BAE:
      if (record->event.pressed) {
        tap_code16(LSFT(RALT(KC_A)));
      }

      return false;
      break;
    case M_BOE:
      if (record->event.pressed) {
        tap_code16(LSFT(RALT(KC_O)));
      }

      return false;
      break;
    case M_BUE:
      if (record->event.pressed) {
        tap_code16(LSFT(RALT(KC_U)));
      }

      return false;
      break;
    case M_BSZ:
      if (record->event.pressed) {
        tap_code16(LSFT(RALT(KC_S)));
      }

      return false;
      break;
    case A_2TAB:
      if (record->event.pressed) {
        register_code(KC_LALT);
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
        unregister_code(KC_LALT);
      }

      return false;
      break;
    case M_QENT:
      if (record->event.pressed) {
        tap_code16(KC_QUES);
        tap_code16(KC_ENT);
      }

      return false;
      break;
    }

  return true;
};
