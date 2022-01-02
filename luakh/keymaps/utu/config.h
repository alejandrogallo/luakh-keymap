#pragma once

#include "config_common.h"
#include "./layout.h"


#define MATRIX_ROWS 8
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS_RIGHT { D2, B6, D1, D0 }
#define MATRIX_COL_PINS_RIGHT { D4, C6, D7, E6, B4, B5 }

#define MATRIX_ROW_PINS { F4, B2, B4, B5 }
#define MATRIX_COL_PINS { B3, B1, F7, F6, F5, B6 }
//#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B6 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define SOFT_SERIAL_PIN D3 // or D0, D1, D2, D3, E6

#define MASTER_LEFT

#undef DESCRIPTION
#define DESCRIPTION utu
