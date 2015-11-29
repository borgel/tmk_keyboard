/*
Copyright 2011 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef KEYMAP_H__
#define KEYMAP_H__

/*
 * Keymap for Fullmonty
 */
#include <stdint.h>
#include <stdbool.h>
#include <avr/pgmspace.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "debug.h"
#include "keymap.h"

extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const uint16_t fn_actions[];


    /* 0    1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16   17 */
#define KEYMAP( \
      K00,      K02, K03, K04, K05,      K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H, \
      K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      K1E, K1F, K1G, K1H, \
      K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,      K2E, K2F, K2G, K2H, \
      K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,           K3E,                \
      K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A,                K4E,      K4G,      \
      K50, K51, K52,           K55,                K59, K5A,      K5C,      K5E, K5F, K5G, K5H  \
) { \
   { KC_##K00, KC_NO,    KC_##K02, KC_##K03, KC_##K04, KC_##K05, KC_NO,    KC_##K07, KC_##K08, KC_##K09, KC_##K0A, KC_##K0B, KC_##K0C, KC_##K0D, KC_##K0E, KC_##K0F, KC_##K0G, KC_##K0H}, \
   { KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14, KC_##K15, KC_##K16, KC_##K17, KC_##K18, KC_##K19, KC_##K1A, KC_##K1B, KC_##K1C, KC_NO,    KC_##K1E, KC_##K1F, KC_##K1G, KC_##K1H}, \
   { KC_##K20, KC_##K21, KC_##K22, KC_##K21, KC_##K24, KC_##K25, KC_##K26, KC_##K27, KC_##K28, KC_##K29, KC_##K2A, KC_##K2B, KC_##K2C, KC_NO,    KC_##K2E, KC_##K2F, KC_##K2G, KC_##K2H}, \
   { KC_##K30, KC_##K31, KC_##K32, KC_##K33, KC_##K34, KC_##K35, KC_##K36, KC_##K37, KC_##K38, KC_##K39, KC_##K3A, KC_##K3B, KC_NO,    KC_NO,    KC_##K3E, KC_NO,    KC_NO,    KC_NO   }, \
   { KC_##K40, KC_##K41, KC_##K42, KC_##K43, KC_##K44, KC_##K45, KC_##K46, KC_##K47, KC_##K48, KC_##K49, KC_##K4A, KC_NO,    KC_NO,    KC_NO,    KC_##K4E, KC_NO,    KC_##K4G, KC_NO   }, \
   { KC_##K50, KC_##K51, KC_##K52, KC_NO,    KC_NO,    KC_##K55, KC_NO,    KC_NO,    KC_NO,    KC_##K59, KC_##K5A, KC_NO,    KC_##K5C, KC_NO,    KC_##K5E, KC_##K5F, KC_##K5G, KC_##K5H}  \
}
   /* 0        1             2         3         4         5       6          7         8        9        10         11        12        13        14       15         16        17 */

#endif
