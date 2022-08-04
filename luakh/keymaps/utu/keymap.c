#include QMK_KEYBOARD_H
#include <quantum.h>


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LUAKH_kc(QWERTY,
                        WWW_BACK,          WWW_FORWARD,
                     RST, MENU, NO,          NO, NO, NO),

  [SYMBOLS] = LUAKH_kc(SYMBOLS,
                               NO,          NO,
                      RST, NO, NO,          NO, NO, NO),

  [MOVEMENT] = LUAKH_kc(MOVEMENT,
                              DEL,          NO,
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

