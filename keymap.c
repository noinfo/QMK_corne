/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>
Copyright 2021 Elliot Powell  <@e11i0t23>

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
#include QMK_KEYBOARD_H

enum my_layers {
  _QWERTY,
  _GAME,
  _LOWER,
  _RAISE,
  _FUNCTION
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_A,    KC_S,    MT(MOD_LCTL, KC_D),    MT(MOD_LSFT, KC_F),    KC_G,                         KC_H,    MT(MOD_LSFT, KC_J),    MT(MOD_LCTL, KC_K),    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
  //|--------+--------+--------+--------+-------- +--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT, MO(_LOWER), KC_LGUI,     KC_SPC, MO(_RAISE), KC_ENT
                                      //`--------------------------'  `--------------------------'

  ),

  [_GAME] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT, MO(_LOWER), KC_LGUI,     KC_SPC, MO(_RAISE), KC_ENT
                                      //`--------------------------'  `--------------------------'

  ),

  [_LOWER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,    KC_EXLM,    KC_AT,    KC_HASH,    KC_DLR,    KC_PERC,                         KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_DEL, LGUI(KC_S), KC_PGUP, LCTL(KC_TAB), XXXXXXX,                      KC_MINS,  KC_PPLS, KC_LBRC, KC_RBRC, KC_PSLS,  KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, LGUI(LCTL(KC_LEFT)), LGUI(LCTL(KC_RIGHT)), KC_PGDN, KC_MPLY, KC_MUTE,                      KC_UNDS, KC_EQL, KC_LCBR, KC_RCBR, KC_GRV, KC_PIPE,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT, _______,  KC_LGUI,     KC_SPC, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [_RAISE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC, KC_1,   KC_2, KC_3,  KC_4, KC_5,                      KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, LCTL(LSFT(KC_TAB)), KC_PGUP, LCTL(KC_TAB), XXXXXXX,                      KC_TAB, KC_LEFT,   KC_DOWN,KC_UP, KC_RIGHT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, LGUI(LCTL(KC_LEFT)), LGUI(LCTL(KC_RIGHT)), KC_PGDN, KC_MPLY, KC_MUTE,                      KC_PSCR, KC_CAPS, KC_VOLD, KC_VOLU, KC_MPRV, KC_MNXT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT, _______,  KC_LGUI,     KC_SPC, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [_FUNCTION] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        RESET, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                      KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_F11, KC_F12, KC_F13, KC_F14, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LALT(KC_U), XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          DF(_GAME), _______,  KC_LGUI,     KC_SPC, _______, DF(_QWERTY)
                                      //`--------------------------'  `--------------------------'
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _FUNCTION);
}

#ifdef OLED_ENABLE
static void render_corne_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
};

// static void render_qmk_logo(void) {
//     // 'qmk_logo', 128x32px
//     static const char PROGMEM qmk_logo[] = {
//         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xf0, 0x80, 0xf0,
//         0x80, 0x80, 0xf0, 0x80, 0x80, 0xf0, 0x80, 0xf0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0x94, 0x94, 0xff, 0xff, 0xff, 0xff, 0x03, 0xff,
//         0xff, 0xff, 0x03, 0xff, 0xff, 0xff, 0x03, 0xff, 0xff, 0xff, 0xff, 0x94, 0x94, 0x94, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0xf0, 0xf8, 0x0c, 0x0c, 0x0c, 0xf8, 0xf0, 0x00, 0xfc, 0xfc, 0x78, 0xe0, 0x80,
//         0xe0, 0x78, 0xfc, 0xfc, 0x00, 0xfc, 0xfc, 0xe0, 0xf0, 0xb8, 0x1c, 0x0c, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0xfc, 0xfc, 0xcc, 0xcc, 0xcc, 0x00, 0xec, 0xec, 0x00, 0xf0, 0xe0, 0x30, 0x30, 0x00, 0xf0,
//         0xe0, 0x30, 0x30, 0xe0, 0xe0, 0x30, 0x30, 0xf0, 0xe0, 0x00, 0xf0, 0xe0, 0x00, 0xc0, 0x60, 0xc0,
//         0x00, 0xe0, 0xf0, 0x00, 0x20, 0xb0, 0x90, 0x90, 0xf0, 0xe0, 0x00, 0xf0, 0xe0, 0x30, 0x30, 0x00,
//         0xe0, 0xf0, 0x90, 0x90, 0xf0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x14, 0x14, 0x7f, 0xff, 0xff, 0xff, 0xfe, 0xfd,
//         0xfb, 0xfb, 0xe0, 0xfb, 0xfb, 0xfd, 0xfe, 0xff, 0xff, 0xff, 0x7f, 0x14, 0x14, 0x14, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x06, 0x0e, 0x1b, 0x11, 0x00, 0x07, 0x07, 0x00, 0x01, 0x03,
//         0x01, 0x00, 0x07, 0x07, 0x00, 0x07, 0x07, 0x00, 0x01, 0x03, 0x07, 0x06, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x07,
//         0x07, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x03, 0x07, 0x03, 0x00, 0x03,
//         0x07, 0x03, 0x00, 0x00, 0x03, 0x07, 0x04, 0x04, 0x03, 0x07, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00,
//         0x01, 0x03, 0x06, 0x06, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x07,
//         0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
//     };

//     oled_write_P(qmk_logo, false);
// }

bool oled_task_user(void) {

    if (is_keyboard_master()) {
        // Host Keyboard Layer Status
        oled_write_P(PSTR("Layer: "), false);

        switch (get_highest_layer(default_layer_state)) {
            case _QWERTY:
                oled_write_ln_P(PSTR("Default"), false);
                break;
            case _GAME:
                oled_write_ln_P(PSTR("Game"), false);
                break;
        }
        switch (get_highest_layer(layer_state)) {
            case _LOWER:
                oled_write_ln_P(PSTR("Lower"), false);
                break;
            case _RAISE:
                oled_write_ln_P(PSTR("Raise"), false);
                break;
            case _FUNCTION:
                oled_write_ln_P(PSTR("Function"), false);
                break;
        }

        // Host Keyboard LED Status
        led_t led_state = host_keyboard_led_state();
        oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
        oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
        oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    } else {
        render_corne_logo();
    }


    return false;
}

#endif



