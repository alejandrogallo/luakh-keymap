// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H
#include <quantum.h>


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LUAKH_kc(QWERTY,
      RST, WWW_BACK, WWW_FORWARD,          VOLU, VOLD, MUTE),

  [SYMBOLS] = LUAKH_kc(SYMBOLS,
      DEL, INS, NO,          NO, NO, NO),

  [MOVEMENT] = LUAKH_kc(MOVEMENT,
      DEL, INS, CUT,          NO, NO, NO),

  [ADJUST] = LUAKH_kc(ADJUST,
      RST, NO, NO,          NO, NO, NO),

  [SYSTEM] = LUAKH_kc(SYSTEM,
      RST, NO, NO,          NO, NO, NO),

  [MODIFIER] = LUAKH_kc(MODIFIER,
      RST, NO, NO,          NO, NO, NO),

};
