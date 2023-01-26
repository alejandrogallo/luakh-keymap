#include QMK_KEYBOARD_H
#include <quantum.h>


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LUAKH_kc(QWERTY,
                             DEL,          CUT,
      RST, WWW_BACK, WWW_FORWARD,          VOLU, VOLD, MUTE),

  [SYMBOLS] = LUAKH_kc(SYMBOLS,
                               NO,          NO,
                      DEL, INS, NO,          NO, NO, NO),

  [MOVEMENT] = LUAKH_kc(MOVEMENT,
                              DEL,          NO,
                    DEL, INS, CUT,          NO, NO, NO),

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

