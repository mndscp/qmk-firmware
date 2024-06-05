// Macros
// ----------------------------------------------------------------------------

enum macros {
  M_QWRT = SAFE_RANGE,
  M_CLMK,
  M_GAME,
  M_AE,
  M_OE,
  M_UE,
  M_SZ,
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
    case M_CLMK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(L_CLMK);
      }

      return false;
      break;
    case M_AE:
      if (record->event.pressed) {
        tap_code16(RALT(KC_A));
        // if ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT)) {
        //   unregister_code(KC_LSFT);
        //   register_code(KC_LALT);
        //   tap_code16(KC_KP_0);
        //   tap_code16(KC_KP_1);
        //   tap_code16(KC_KP_9);
        //   tap_code16(KC_KP_6);
        //   unregister_code(KC_LALT);
        //   register_code(KC_LSFT);
        // } else {
        //   register_code(KC_LALT);
        //   tap_code16(KC_KP_1);
        //   tap_code16(KC_KP_3);
        //   tap_code16(KC_KP_2);
        //   unregister_code(KC_LALT);
        // }
      }

      return false;
      break;
    case M_OE:
      if (record->event.pressed) {
        tap_code16(RALT(KC_O));
        // if ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT)) {
        //   unregister_code(KC_LSFT);
        //   register_code(KC_LALT);
        //   tap_code16(KC_KP_0);
        //   tap_code16(KC_KP_2);
        //   tap_code16(KC_KP_1);
        //   tap_code16(KC_KP_4);
        //   unregister_code(KC_LALT);
        //   register_code(KC_LSFT);
        // } else {
        //   register_code(KC_LALT);
        //   tap_code16(KC_KP_1);
        //   tap_code16(KC_KP_4);
        //   tap_code16(KC_KP_8);
        //   unregister_code(KC_LALT);
        // }
      }

      return false;
      break;
    case M_UE:
      if (record->event.pressed) {
        tap_code16(RALT(KC_U));
      //   if ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT)) {
      //     unregister_code(KC_LSFT);
      //     register_code(KC_LALT);
      //     tap_code16(KC_KP_0);
      //     tap_code16(KC_KP_2);
      //     tap_code16(KC_KP_2);
      //     tap_code16(KC_KP_0);
      //     unregister_code(KC_LALT);
      //     register_code(KC_LSFT);
      //   } else {
      //     register_code(KC_LALT);
      //     tap_code16(KC_KP_0);
      //     tap_code16(KC_KP_2);
      //     tap_code16(KC_KP_5);
      //     tap_code16(KC_KP_2);
      //     unregister_code(KC_LALT);
      //   }
      }

      return false;
      break;
    case M_SZ:
      if (record->event.pressed) {
        tap_code16(RALT(KC_S));
        // register_code(KC_LALT);
        // tap_code16(KC_KP_2);
        // tap_code16(KC_KP_2);
        // tap_code16(KC_KP_5);
        // unregister_code(KC_LALT);
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
    }

  return true;
};
