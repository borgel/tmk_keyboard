#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /* 0: qwerty */
   KEYMAP(ESC,  1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS, GRV, \
          TAB,  Q,   W,   E,   R,   T, Y,Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,      \
          LCTL, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,            \
          LSFT, Z,   X,   C,   V,   B,B, N,   M,   COMM,DOT, SLSH,RSFT,FN0,            \
          FN2, LGUI, LALT, SPC,             SPC,  RGUI, RALT, FN1, RCTL),

   /* 1: FN 1 */
   KEYMAP(MUTE, F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,  VOLU, VOLD, \
          TRNS, WH_U, MS_U, TRNS, TRNS, TRNS, TRNS,  TRNS, TRNS, TRNS, HOME, PGUP, UP,   TRNS, DEL,  \
          TRNS, MS_L, MS_D, MS_R, TRNS, TRNS,        TRNS, TRNS, TRNS, TRNS, LEFT, RGHT, TRNS,  \
          TRNS, WH_D, BTN2, BTN3, TRNS, TRNS, TRNS,  TRNS, TRNS, END , PGDN,  DOWN, TRNS, TRNS, \
          TRNS, TRNS, TRNS, BTN1,                    TRNS, TRNS, TRNS, TRNS, TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
   [0] = ACTION_LAYER_MOMENTARY(1),    // switch to FN layer on press and hold
   [1] = ACTION_LAYER_TOGGLE(1),       // toggle to FN layer until tapped again
   [2] = ACTION_LAYER_MOMENTARY(1),    // switch to FN layer on press and hold

   // TODO add tap actions for missing keys?

   /*
      [1] = ACTION_LAYER_TOGGLE(4),     // toggle arrow overlay
      [2] = ACTION_LAYER_TOGGLE(5),     // toggle Esc overlay
      [3] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // Task(RControl,RShift+Esc)
      [4] = ACTION_LAYER_MOMENTARY(7),  // to Layout selector
      [5] = ACTION_DEFAULT_LAYER_SET(0),  // set qwerty layout
      [6] = ACTION_DEFAULT_LAYER_SET(1),  // set colemak layout
      [7] = ACTION_DEFAULT_LAYER_SET(2),  // set dvorak layout
      [8] = ACTION_DEFAULT_LAYER_SET(3),  // set workman layout
    */
};
