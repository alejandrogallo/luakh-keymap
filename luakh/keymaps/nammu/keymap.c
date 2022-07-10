#include QMK_KEYBOARD_H
#include <quantum.h>


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LUAKH_kc(QWERTY,
                                LVAD,          LVAI,
                     RST, LHUD, LHUI,          LSAD, LSAI, NO),

  [SYMBOLS] = LUAKH_kc(SYMBOLS,
                               NO,          NO,
                      RST, NO, NO,          NO, NO, NO),

  [MOVEMENT] = LUAKH_kc(MOVEMENT,
                               NO,          NO,
                      RST, NO, NO,          NO, NO, NO),

  [ADJUST] = LUAKH_kc(ADJUST,
                               NO,          NO,
                      RST, NO, NO,          NO, NO, NO),

  [SYSTEM] = LUAKH_kc(SYSTEM,
                               NO,          NO,
                      RST, NO, NO,          NO, NO, NO),

  [MODIFIER] = LUAKH_kc(MODIFIER,
                                 NO,          NO,
                        RST, NO, NO,          NO, NO, NO),

};

bool encoder_update_user(uint8_t index, bool clockwise) {
  bool _clockwise = !clockwise;
  if (index == 0) {
    if (IS_LAYER_ON(BASE)) {
      if (_clockwise) {
          tap_code(KC_PGDN);
      } else {
          tap_code(KC_PGUP);
      }
    } else if (IS_LAYER_ON(SYMBOLS)) {
       if (_clockwise) {
        tap_code(KC_AUDIO_VOL_UP);
      } else {
        tap_code(KC_AUDIO_VOL_DOWN);
      }
   } else if (IS_LAYER_ON(MOVEMENT)) {
      if (_clockwise) {
        tap_code(KC_MS_WH_DOWN);
      } else {
        tap_code(KC_MS_WH_UP);
      }
    }
  } else {
    if (IS_LAYER_ON(BASE)) {
      if (_clockwise) {
          tap_code(KC_UP);
      } else {
          tap_code(KC_DOWN);
      }
    } else if (IS_LAYER_ON(SYMBOLS)) {
       if (_clockwise) {
        tap_code(KC_MEDIA_NEXT_TRACK);
      } else {
        tap_code(KC_MEDIA_PREV_TRACK);
      }
   } else if (IS_LAYER_ON(MOVEMENT)) {
      if (_clockwise) {
        tap_code(KC_RIGHT);
      } else {
        tap_code(KC_LEFT);
      }
    }

  }
  return true;
}
