#pragma once

#include "config_common.h"

// MATRIX =====================================================================
#define MATRIX_ROWS 4
#define MATRIX_COLS 11
#define MATRIX_ROW_PINS { D0, D1, D3, D2 }
#if defined(PCBDOWN)
  #define MATRIX_COL_PINS { B7, D6, F7, F6, B6, D4, E6, B4, B5, C6, D7 }
#else
  #define MATRIX_COL_PINS { D7, C6, B5, B4, E6, D4, B6, F6, F7, D6, B7 }
#endif
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

// LAYOUT =====================================================================
#define LAYOUT( \
  k00, k01, k02, k03, k04,           k05, k06, k07, k08, k09, \
  k10, k11, k12, k13, k14,           k15, k16, k17, k18, k19, \
  k20, k21, k22, k23, k24,           k25, k26, k27, k28, k29, \
  k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b \
) \
{ \
{ k09, k08, k07, k06, k05, KC_NO, k04, k03, k02, k01, k00 }, \
{ k19, k18, k17, k16, k15, KC_NO, k14, k13, k12, k11, k10 }, \
{ k29, k28, k27, k26, k25, k36,   k24, k23, k22, k21, k20 }, \
{ k3b, k3a, k39, k38, k37, k35,   k34, k33, k32, k31, k30 } \
}

#define LAYOUT_kc( \
  k00, k01, k02, k03, k04,           k05, k06, k07, k08, k09, \
  k10, k11, k12, k13, k14,           k15, k16, k17, k18, k19, \
  k20, k21, k22, k23, k24,           k25, k26, k27, k28, k29, \
  k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b \
) \
{ \
{ KC_##k09, KC_##k08, KC_##k07, KC_##k06, KC_##k05, KC_NO,      KC_##k04, KC_##k03, KC_##k02, KC_##k01, KC_##k00 }, \
{ KC_##k19, KC_##k18, KC_##k17, KC_##k16, KC_##k15, KC_NO,      KC_##k14, KC_##k13, KC_##k12, KC_##k11, KC_##k10 }, \
{ KC_##k29, KC_##k28, KC_##k27, KC_##k26, KC_##k25, KC_##k36,   KC_##k24, KC_##k23, KC_##k22, KC_##k21, KC_##k20 }, \
{ KC_##k3b, KC_##k3a, KC_##k39, KC_##k38, KC_##k37, KC_##k35,   KC_##k34, KC_##k33, KC_##k32, KC_##k31, KC_##k30 } \
}

#define LUAKH_kc(LUAKH_NAME,                                      \
  L41, L42, L43,      R41, R42, R43                               \
  )                                                               \
  LUAKH_APP(LAYOUT_kc,                                            \
                     LUAKH_GET_NAME(LUAKH_NAME, 1),               \
                     LUAKH_GET_NAME(LUAKH_NAME, 2),               \
                     LUAKH_GET_NAME(LUAKH_NAME, 3),               \
    L41, L42, L43,   LUAKH_GET_NAME(LUAKH_NAME, 4), R41, R42, R43 \
  )
