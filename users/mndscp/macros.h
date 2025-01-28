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
    // case SYM_SFT:
    //   if (record->tap.count && record->event.pressed) {
    //     add_oneshot_mods(MOD_BIT(KC_LSFT));
    //     return false;
    //   }

    //   break;
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
