/*
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
#define VENDOR_ID       0x5342 // "LN"
#define PRODUCT_ID      0x3225 // "12"
#define DEVICE_VER      0x0001
#define MANUFACTURER    Longus
#define PRODUCT         QuirkPad


/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { F4, D3, F5, D2}, \
    { F6, D4, F7, C6}, \
    { B1, D7, B3, E6}, \
    { B2, B4, B6, B5} \
}

#define UNUSED_PINS

#ifdef RGBLIGHT_ENABLE
#define RGB_DI_PIN D0
#define RGBLED_NUM 0
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
