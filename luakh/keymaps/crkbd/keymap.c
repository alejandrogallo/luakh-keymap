#include QMK_KEYBOARD_H
#include <quantum.h>

#ifdef WITH_JOYSTICK
#  include "pointing_device.h"
#  include "joystick.h"

enum {
      AXIS_X = 0,
      AXIS_Y = 1
};

joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
                          // -127 +127 Genauigkeit
#ifdef APPLE_EXTENDED
    [AXIS_Y] = JOYSTICK_AXIS_IN(B4, 0, 450, 1024), // 10 bit adc
    [AXIS_X] = JOYSTICK_AXIS_IN(B5, 0, 450, 1024), // 10 bit adc
#endif

};

void pointing_device_task(void) {
  if (!is_keyboard_master()) return;
  report_mouse_t currentReport;
  currentReport = pointing_device_get_report();
  currentReport.x = -(int8_t)((joystick_status.axes[AXIS_X] >> 4) & 0x00ff); 
  currentReport.y = (int8_t)((joystick_status.axes[AXIS_Y] >> 4) & 0x00ff); 
  pointing_device_set_report(currentReport);
  pointing_device_send();
}
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LUAKH_kc(QWERTY,
                  ESC,          BSPC,
                  TAB,          QUOT,
                  NO,           ENT),

[SYMBOLS] = LUAKH_kc(SYMBOLS,
                     ESC,          MINS,
                     LCTL,         PLUS,
                     LSFT,         EQL),

[MOVEMENT] = LUAKH_kc(MOVEMENT,
                      ENT,         ENT,
                      ENT,         ENT,
                      ENT,         ENT),

[ADJUST] = LUAKH_kc(ADJUST,
                    ENT,         ENT,
                    ENT,         ENT,
                    ENT,         ENT),

[SYSTEM] = LUAKH_kc(SYSTEM,
                    ENT,         ENT,
                    ENT,         ENT,
                    ENT,         ENT),

[MODIFIER] = LUAKH_kc(MODIFIER,
                    ENT,         ENT,
                    ENT,         ENT,
                    ENT,         ENT),


};
