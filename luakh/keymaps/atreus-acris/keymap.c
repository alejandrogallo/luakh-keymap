// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H
#include <quantum.h>
#include "joystick.h"
#include "pointing_device.h"

joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    [0] = JOYSTICK_AXIS_IN(D4, 0, 511, 1023), // 10 bit adc
    [1] = JOYSTICK_AXIS_IN(F4, 0, 504, 1023), // 10 bit adc
};

#define KC_RGBMF RGB_MODE_FORWARD

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LUAKH_kc(QWERTY,
                    RST, NO, NO,          NO, LMOD, LTOG),

  [SYMBOLS] = LUAKH_kc(SYMBOLS,
                       RST, NO, NO,          NO, NO, NO),

  [MOVEMENT] = LUAKH_kc(MOVEMENT,
                        RST, NO, NO,          NO, NO, NO),

  [ADJUST] = LUAKH_kc(ADJUST,
                      RST, NO, NO,          NO, NO, NO),

  [SYSTEM] = LUAKH_kc(SYSTEM,
                      RST, NO, NO,          NO, NO, NO),

  [MODIFIER] = LUAKH_kc(MODIFIER,
                        RST, NO, NO,          NO, NO, NO),

};

void pointing_device_task(void) {
  report_mouse_t currentReport;
  currentReport = pointing_device_get_report();
  currentReport.x = (int8_t)((joystick_status.axes[1] >> 4) & 0x00ff);
  currentReport.y = -(int8_t)((joystick_status.axes[0] >> 4) & 0x00ff);
  pointing_device_set_report(currentReport);
  pointing_device_send();
}
