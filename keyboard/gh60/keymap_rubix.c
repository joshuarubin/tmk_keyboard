#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   FN1, QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        FN0, LALT,LGUI,          SPC,                     RGUI,RALT,APP, FN0),
    /* Overlay 1: fn
     * ,-----------------------------------------------------------.
     * |  `| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
     * |-----------------------------------------------------------|
     * |     |   |Up |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |Caps  |Lef|Dow|Rig|   |   |Lef|Dow|Up |Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |Home|PgDn|PgUp|End |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,  \
        TRNS,TRNS,UP,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,VOLU, \
        CAPS,LEFT,DOWN,RGHT,TRNS,TRNS,LEFT,DOWN,UP,  RGHT,TRNS,TRNS,     VOLD, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          MUTE, \
        TRNS,TRNS,TRNS,          TRNS,                    HOME,PGDN,PGUP,END),
    /* Overlay 2: Mouse mode (Semicolon)
     * ,-----------------------------------------------------------.
     * |  `| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
     * |-----------------------------------------------------------|
     * |     |   |Up |   |   |   |MwL|MwD|MwU|MwR|   |   |   |     |
     * |-----------------------------------------------------------|
     * |Caps  |Lef|Dow|Rig|   |   |McL|McD|McU|McR|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |Mb3|Mb2|Mb1|Mb4|Mb5|   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |Home|PgDn|PgUp|End |
     * `-----------------------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
    KEYMAP_ANSI(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,  \
        TRNS,TRNS,UP,  TRNS,TRNS,TRNS,WH_L,WH_D,WH_U,WH_R,TRNS,TRNS,TRNS,VOLU, \
        CAPS,LEFT,DOWN,RGHT,TRNS,TRNS,MS_L,MS_D,MS_U,MS_R,TRNS,TRNS,     VOLD, \
        TRNS,ACL0,ACL1,ACL2,TRNS,BTN3,BTN2,BTN1,BTN4,BTN5,TRNS,          MUTE, \
        TRNS,TRNS,TRNS,          TRNS,                    HOME,PGDN,PGUP,END),
};

const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
    [1] = ACTION_LAYER_TAP_KEY(2, KC_SCLN),
};
