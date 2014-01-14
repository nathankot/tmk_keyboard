#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |FN4|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|FN9|
     * |-----------------------------------------------------------|
     * |FN5  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |FN2   |  A|  S|  D|FN3|  G|  H|  J|  K|  L|  ;|  '|Ent     |
     * |-----------------------------------------------------------|
     * |FN6     |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|FN7   |Fn1|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |        Space          |Gui  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(FN4, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,FN9, \
           FN5, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
           FN2, A,   S,   D, FN3,   G,   H,   J,   K,   L,  SCLN, QUOT,ENT, \
           FN6, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT,SLSH,  FN7,FN1, \
                LALT,LGUI,         SPC,                RGUI,RALT),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |   |   |   |VoU|   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|VoD|VoU|Mut|   |   |   |   |   |   |F14|F15|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |   |   |   |   |VoD|Shift |   |
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           CAPS,NO,  NO,  NO,  NO,  NO,  NO,  NO,   NO,  NO,  NO,VOLU,  NO,  BSPC, \
           LCTL,VOLD,VOLU,MUTE,NO,  NO,    NO,  NO,  NO,  NO,F14,F15,ENT, \
           LSFT,NO,  NO,  NO,  NO,  NO,    NO,  NO, NO,   NO,VOLD,RSFT,TRNS, \
                LALT,LGUI,          SPC,                RGUI,RALT),

    /* Layer 2: Vi mode
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |  |   |   |   |   |   |   |PgU|   |   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |   |PgD|FN0|   |Lef|Dow|Up |Rig|   |   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |   |   |   |   |   |Shift |   |
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           TAB,   NO,  NO,  NO,  NO, NO,   NO,PGUP, NO, NO, NO,  NO,  NO,  BSPC, \
           LCTL,  NO,  NO,PGDN,TRNS, NO,  LEFT,DOWN,UP,  RGHT,NO,  NO,  ENT, \
           LSFT,NO,  NO,  NO,  NO,  NO,    NO,  NO,  NO, NO,   NO,RSFT,NO, \
                LALT,LGUI,          SPC,                RGUI,RALT),

    /* Layer 3: Mouse mode
     * ,-----------------------------------------------------------.
     * |TNS| FN8| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|N10|TNS|
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |MwL|MwD|MwU|MwR|   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |   |   |   |   |McL|McD|McU|McR|   |   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |Mb3|Mb2|Mb1|Mb4|Mb5|   |Shift |   |
     * `-----------------------------------------------------------'
     *      |Alt |Gui  |          Mb1          |Gui  |Alt|
     *      `--------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
    KEYMAP(TRNS,FN8,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,FN10, TRNS, \
            TAB, NO,  NO,  NO,  NO,  NO,  WH_L,WH_D,WH_U,WH_R,NO,  NO,  NO,  BSPC, \
            LCTL,NO,  ACL0,ACL1,ACL2,NO,  MS_L,MS_D,MS_U,MS_R, NO,QUOT,ENT, \
            LSFT,NO,  NO,  NO,  NO,  BTN3,BTN2,BTN1,BTN4,BTN5,SLSH,RSFT,NO, \
                  TRNS,TRNS,          BTN1,               TRNS,TRNS),

    /* Layer 4: Numpad mode
     * ,-----------------------------------------------------------.
     * |Esc|   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |FN0  |  |   |   |   |   | 7 | 8 | 9 |   |   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |   |   |   |   | 4 | 5 | 6 |   |   |   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   | 1 | 2 | 3 |   |   |Shift |   |
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |           0           |Gui  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC,NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,     NO, NO,   NO, NO, \
           TRNS,NO,  NO,  NO,  NO,  NO,   7,   8,   9,  NO,  NO,     NO,  NO,BSPC, \
           LCTL,NO,   NO,  NO,  NO,  NO,   4,   5,   6,  NO,    NO,   NO,ENT, \
           LSFT, NO,  NO,  NO,  NO,  NO,   1,   2,   3,  NO,  NO, RSFT, NO, \
                LALT,LGUI,           0,                PDOT,RALT),
};



/* id for user defined functions */
enum function_id {
    LSHIFT_LPAREN,
    RSHIFT_RPAREN,
};

enum macro_id {
    LSHIFT_PAREN,
    RSHIFT_PAREN,
    TMUX_FULL_SCREEN,
    TMUX_NEXT_SCREEN,
    HELLO,
    VOLUP,
};


/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_DEFAULT_LAYER_SET(0),                // Default layer
    [1] = ACTION_LAYER_MOMENTARY(1),                  // HHKB layer
    [2] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),      // LControl with tap Esc*
    [3] = ACTION_LAYER_TAP_KEY(2, KC_F),              // LControl with tap Esc*
    [4] = ACTION_LAYER_TAP_KEY(3, KC_GRAVE),          // Hold escape for mouse mode
    [5] = ACTION_LAYER_TAP_KEY(3, KC_TAB),            // Hold tab for numpad mode
    [6] = ACTION_MACRO_TAP(LSHIFT_PAREN),             // Macro: LShift with tap '('
    [7] = ACTION_MACRO_TAP(RSHIFT_PAREN),             // Macro: RShift with tap ')'
    [8] = ACTION_MACRO_TAP(TMUX_FULL_SCREEN),         // Macro: Ctrl+A+z (Tmux full screen)
    [9] = ACTION_LAYER_TAP_KEY(3, KC_GRAVE),          // Hold grave for mouse mode
    [10] = ACTION_MACRO_TAP(TMUX_NEXT_SCREEN),        // Macro: Ctrl+A+j (Tmux next screen)

//  [8] = ACTION_LMOD_TAP_KEY(KC_LCTL, KC_BSPC),       // LControl with tap Backspace
//  [9] = ACTION_LMOD_TAP_KEY(KC_LCTL, KC_ESC),        // LControl with tap Esc
//  [11] = ACTION_FUNCTION_TAP(LSHIFT_LPAREN),         // Function: LShift with tap '('
//  [12] = ACTION_FUNCTION_TAP(RSHIFT_RPAREN),         // Function: RShift with tap ')'
//  [13] = ACTION_MACRO_TAP(LSHIFT_PAREN),             // Macro: LShift with tap '('
//  [14] = ACTION_MACRO_TAP(RSHIFT_PAREN),             // Macro: RShift with tap ')'
//  [15] = ACTION_MACRO(HELLO),                        // Macro: say hello
//  [9] = ACTION_MACRO(VOLUP),                         // Macro: media key
};



/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;
    tap_t tap = record->tap;

    switch (id) {
        case TMUX_FULL_SCREEN:
            if (tap.count > 0 && !tap.interrupted) {
              return (event.pressed ?
                      MACRO( D(LCTRL), D(A), U(LCTRL), U(A), D(Z), U(Z), END ) : MACRO_NONE);
            }
        case TMUX_NEXT_SCREEN:
            if (tap.count > 0 && !tap.interrupted) {
              return (event.pressed ?
                      MACRO( D(LCTRL), D(A), U(LCTRL), U(A), D(J), U(J), END ) : MACRO_NONE);
            }
        case LSHIFT_PAREN:
            if (tap.count > 0 && !tap.interrupted) {
                return (event.pressed ?
                        MACRO( D(LSHIFT), D(9), U(9), U(LSHIFT), END ) : MACRO_NONE);
            } else {
                return (event.pressed ?
                        MACRO( D(LSHIFT), END ) : MACRO( U(LSHIFT), END ) );
            }
        case RSHIFT_PAREN:
            if (tap.count > 0 && !tap.interrupted) {
                return (event.pressed ?
                        MACRO( D(RSHIFT), D(0), U(0), U(RSHIFT), END ) : MACRO_NONE);
            } else {
                return (event.pressed ?
                        MACRO( D(RSHIFT), END ) : MACRO( U(RSHIFT), END ) );
            }
    }

    return MACRO_NONE;
}



/*
 * user defined action function
 */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;
    tap_t tap = record->tap;

    switch (id) {
        case LSHIFT_LPAREN:
            // LShft + tap '('
            // NOTE: cant use register_code to avoid conflicting with magic key bind
            if (event.pressed) {
                if (tap.count == 0 || tap.interrupted) {
                    //add_mods(MOD_BIT(KC_LSHIFT));
                    layer_on(1);
                } else {
                    add_mods(MOD_BIT(KC_LSHIFT));
                    add_key(KC_9);
                    send_keyboard_report();
                    del_mods(MOD_BIT(KC_LSHIFT));
                    del_key(KC_9);
                    send_keyboard_report();
                }
            } else {
                if (tap.count == 0 || tap.interrupted) {
                    //del_mods(MOD_BIT(KC_LSHIFT));
                    layer_off(1);
                }
            }
            break;
        case RSHIFT_RPAREN:
            // RShift + tap ')'
            if (event.pressed) {
                if (tap.count == 0 || tap.interrupted) {
                    add_mods(MOD_BIT(KC_RSHIFT));
                } else {
                    add_mods(MOD_BIT(KC_RSHIFT));
                    add_key(KC_0);
                    send_keyboard_report();
                    del_mods(MOD_BIT(KC_RSHIFT));
                    del_key(KC_0);
                    send_keyboard_report();
                }
            } else {
                if (tap.count == 0 || tap.interrupted) {
                    del_mods(MOD_BIT(KC_RSHIFT));
                }
            }
            break;
    }
}
