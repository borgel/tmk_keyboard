#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: left half (default layer) */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   MINS,EQL, \
           TAB, Q,   W,   E,   R,   T,   LBRC,     \
           ENT ,A,   S,   D,   F,   G,   BSLS,     \
           LSFT,Z,   X,   C,   V,   B,             \
           LCTL,FN0, LALT,LGUI,SPC),
};
const uint16_t PROGMEM fn_actions[] = {};

