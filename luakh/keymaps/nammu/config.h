#pragma once

#include "config_common.h"
#include "../utu/layout.h"

#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { B6, D2, D1, D0 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }

#define DIODE_DIRECTION COL2ROW

#define SOFT_SERIAL_PIN D3 // or D0, D1, D2, D3, E6

#define MASTER_LEFT

/*
 * RGB CONFIGURATION
 */
#define RGB_DI_PIN  F5
#define RGBLED_NUM  14
#define RGBLED_SPLIT { 7, 7 }
//#define RGBLIGHT_HUE_STEP 8
//#define RGBLIGHT_SAT_STEP 8
//#define RGBLIGHT_VAL_STEP 8
// TODO: SET RGB LIGHTING with low memory footprint
// #define RGBLIGHT_ANIMATIONS

#undef DESCRIPTION
#define DESCRIPTION nammu

/* Encoder pins */
#define ENCODERS_PAD_A { B3 }
#define ENCODERS_PAD_B { B2 }
#define ENCODERS_PAD_A_RIGHT { B2 }
#define ENCODERS_PAD_B_RIGHT { B3 }
