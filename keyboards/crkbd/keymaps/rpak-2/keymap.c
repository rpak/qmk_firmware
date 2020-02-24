#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RCTL, KC_LGUI, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, MO(2), MO(1), KC_ESC, KC_SPC, KC_ENT, TO(0)),
	[1] = LAYOUT(KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSLS, KC_LGUI, LCTL(KC_A), LCTL(KC_S), LCTL(KC_D), LCTL(KC_F), LCTL(KC_G), KC_GRV, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_LGUI, KC_LSFT, OSM(MOD_LCTL), OSM(MOD_LALT), LCTL(KC_C), MEH(KC_F10), LCTL(KC_V), KC_BSPC, LALT(KC_F7), LCAG(KC_F7), LGUI(KC_F12), OSM(MOD_RCTL), KC_RSFT, MO(2), MO(1), KC_NO, KC_MINS, KC_EQL, TO(0)),
	[2] = LAYOUT(KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_LGUI, HYPR(KC_F1), HYPR(KC_F2), HYPR(KC_F3), HYPR(KC_F4), HYPR(KC_F5), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, HYPR(KC_F10), OSM(MOD_LCTL|MOD_LGUI), OSM(MOD_LCTL|MOD_LSFT), OSM(MOD_LCTL|MOD_LALT), OSM(MOD_LALT), OSM(MOD_LCTL|MOD_LGUI), KC_NO, KC_NO, KC_NO, KC_NO, OSM(MOD_LCTL|MOD_LGUI), OSM(MOD_RALT), OSM(MOD_LCTL|MOD_LALT), OSM(MOD_LCTL|MOD_LSFT), MO(2), MO(1), KC_NO, OSM(MOD_HYPR), OSM(MOD_MEH), TO(0))
};
