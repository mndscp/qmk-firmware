/*
 Adaptive Keys
 Called from within process_record_user

 ** This will misbehave w/o QMK 14.1 or later (Sevanteri's early combos)

 I think this will work with all Hands Down Neu variants (Platinum, Gold, Silver, Bronze)
 Finally getting to the last of imagined features that spurred Hands Down design!

 uses globals
 uint16_t prior_keycode = KC_NO; // for process_adaptive_key
 uint16_t prior_keydown = 0; // time since finished processing prior_keycode
*/

bool process_adaptive_key(uint16_t keycode, const keyrecord_t *record) {
  bool return_state = true; // assume we don't do anything.
  static uint16_t prior_keycode = KC_NO; // for process_adaptive_key
  // static uint16_t prior_keydown = 0;

  if (record->event.pressed) {
    keycode = keycode & 0xFF; // ignore all mods? or just shift?

    switch (keycode) {
      case KC_SPC:
        switch (prior_keycode) {
          case KC_DOT:
            tap_code(KC_SPC);
            add_oneshot_mods(MOD_BIT(KC_LSFT));
            return_state = false; // done.
        }
        break;
    }

    // if ((timer_elapsed(prior_keydown) < ADAPTIVE_TERM)) {
    //   switch (keycode) {
    //     case KC_SPC:
    //       switch (prior_keycode) {
    //         case KC_DOT:
    //           tap_code(KC_SPC);
    //           add_oneshot_mods(MOD_BIT(KC_LSFT));
    //           return_state = false; // done.
    //       }
    //       break;
    //   }
    // } else {
    //   switch (keycode) {
    //     case KC_SPC:
    //       switch (prior_keycode) {
    //         case KC_DOT:
    //           tap_code(KC_SPC);
    //           add_oneshot_mods(MOD_BIT(KC_LSFT));
    //           return_state = false; // done.
    //       }
    //       break;
    //   }
    // }
    prior_keycode = keycode;
    // prior_keydown = timer_read(); // (re)start prior_key timing
  }
  return return_state; //
}
