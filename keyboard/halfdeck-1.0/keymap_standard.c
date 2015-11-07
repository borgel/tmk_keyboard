#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: left half (default layer) */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   EQL ,ESC, \
           TAB, Q,   W,   E,   R,   T,   LBRC,     \
           ENT ,A,   S,   D,   F,   G,   BSLS,     \
           LSFT,Z,   X,   C,   V,   COMM,          \
           LCTL,FN1, LALT,LGUI,FN0),

    // 1: layer down (space held)
    KEYMAP(GRV, 0,   9,   8,   7,   6,   MINS,TRNS,\
           BSPC,P,   O,   I,   U,   Y,   RBRC,     \
           QUOT,SCLN,L,   K,   J,   H,   TRNS,     \
           TRNS,SLSH,M,   N,   B,   DOT,           \
           TRNS,TRNS,TRNS,TRNS,TRNS),

    // 2: layer up (FN held)
    //TODO fill in media controls
    KEYMAP(TRNS,1   ,   2,   3,TRNS,TRNS,   TRNS,TRNS, \
           DEL ,VOLU,PGUP,  UP,HOME,TRNS,   TRNS,     \
           TRNS,VOLD,LEFT,DOWN,RGHT,TRNS,   TRNS,     \
           TRNS,Z   ,PGDN,TRNS, END,TRNS,             \
           TRNS,TRNS,TRNS,TRNS,TRNS),
};
const uint16_t PROGMEM fn_actions[] = {
   // the array slot we are asigning into is the FN key that is being asigned.
   // The number on the right is the layer to switch to
   [0] = ACTION_LAYER_TAP_KEY(1, KC_SPC),    // when tapping space, type space. When holding switch to layer 1
   [1] = ACTION_LAYER_MOMENTARY(2),
};

