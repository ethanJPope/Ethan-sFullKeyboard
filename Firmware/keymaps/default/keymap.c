// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

/* 21 × 6 matrix
 * ──────────────
 * Columns 0‑13  → main alphanumeric block
 * Columns 14‑16 → nav / arrow cluster
 * Columns 17‑20 → num‑pad block
 *
 * Any KC_NO below represents a physical position that does not exist
 * (or is covered by a larger‑than‑1U key cap).  Feel free to move
 * things around or drop more KC_NO if your switch matrix differs.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_21x6(
    /* Row 0 */ KC_ESC, KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,   KC_PSCR, KC_SCRL, KC_PAUS, KC_NO,   KC_NO,   KC_NO,   KC_NO,
    /* Row 1 */ KC_GRV, KC_1,   KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS,  KC_HOME, KC_PGUP, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
    /* Row 2 */ KC_TAB, KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  KC_END,  KC_PGDN, KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
    /* Row 3 */ KC_CAPS,KC_A,   KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NO,   KC_ENT,  KC_NO,   KC_NO,   KC_NO,   KC_P4,   KC_P5,   KC_P6,   KC_NO,
    /* Row 4 */ KC_LSFT,KC_NO,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO,   KC_RSFT, KC_NO,   KC_UP,   KC_NO,   KC_P1,   KC_P2,   KC_P3,   KC_PENT,
    /* Row 5 */ KC_LCTL,KC_LGUI,KC_LALT, KC_NO,   KC_NO,   KC_NO,   KC_SPC,  KC_NO,   KC_NO,   KC_RALT, KC_RGUI, KC_APP,  KC_RCTL, KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,   KC_NO,   KC_PDOT, KC_NO
    )
};
