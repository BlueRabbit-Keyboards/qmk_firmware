/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"


/* USB Device descriptor parameter */
#define VENDOR_ID       0xB001
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    bluerabbit studios
#define PRODUCT         wkb60
#define DESCRIPTION     test board for qmk

/* Pin assignments */
#define MATRIX_COL_PINS { B0 }
#define MATRIX_ROW_PINS { B1 }
#define UNUSED_PINS

#define BACKLIGHT_PIN           A0
#define BACKLIGHT_PWM_DRIVER    PWMD2
#define BACKLIGHT_PWM_CHANNEL   1

#define RGB_DI_PIN A1

#define ADC_PIN A0


/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 1

#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

#define TAPPING_TERM 500

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE





#define SPI_DRIVER      SPID1
#define SPI_SCK_PIN     A5
#define SPI_MOSI_PIN    A7
#define SPI_MISO_PIN    A6