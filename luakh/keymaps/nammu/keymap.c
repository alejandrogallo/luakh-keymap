#include QMK_KEYBOARD_H
#include <quantum.h>


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LUAKH_kc(QWERTY,
                              NO,          NO,
                     RST, NO, NO,          NO, NO, NO),

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

/*
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_PGDN);
    } else {
        tap_code(KC_PGUP);
    }
    return true;
}
*/
