// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │`  │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │\  │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │=  │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤ENT│
      *               └───┤SPC├───┐   ┌───┤BSP├───┘
      *                   └───┤M1 │   │Alt├───┘
      *                                tab
      *                       └───┘   └───┘
      */

    [0] = LAYOUT_split_3x6_3(
        KC_GRV       ,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        CTL_T(KC_ESC),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT      ,  ALT_T(KC_Z),    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_EQL,
                                       KC_LGUI,KC_SPC, MO(1),                  LT(2,KC_TAB), KC_BSPC, KC_ENT
    ),
    [1] = LAYOUT_split_3x6_3(
        KC_AMPR, KC_EXLM,KC_AT,  KC_LCBR,KC_RCBR,KC_PIPE,                             KC_7,    KC_8,    KC_9,    KC_0,    KC_ASTR,    KC_BSLS,
        KC_MINS, KC_HASH,KC_DLR, KC_LPRN,KC_RPRN,KC_GRV,                              KC_4,    KC_5,    KC_6,    KC_UNDS,    KC_PLUS, KC_QUOT,
        KC_ASTR, KC_PERC,KC_CIRC,KC_LBRC,KC_RBRC,KC_TILD,                            KC_1,    KC_2,    KC_3,    KC_DOT,  KC_SLSH, KC_RSFT,

                                          KC_LGUI, KC_SPC, KC_TAB,          KC_LSFT, KC_ENT, KC_RALT
    ),
    [2] = LAYOUT_split_3x6_3(
        KC_AMPR, KC_EXLM,KC_AT,  KC_LCBR,KC_RCBR,KC_PIPE,                             KC_7,    KC_8,    KC_9,    KC_0,    KC_P,    KC_BSLS,
        KC_MINS, KC_HASH,KC_DLR, KC_LPRN,KC_RPRN,KC_GRV,                              KC_LEFT,    KC_DOWN,    KC_UP,    KC_RIGHT,    KC_SCLN, KC_QUOT,
        KC_ASTR, KC_PERC,KC_CIRC,KC_LBRC,KC_RBRC,KC_TILD,                            KC_1,    KC_2,    KC_3,    KC_DOT,  KC_SLSH, KC_RSFT,

                                          KC_LGUI, KC_SPC, KC_TAB,          KC_LSFT, KC_ENT, KC_RALT
    )
};

