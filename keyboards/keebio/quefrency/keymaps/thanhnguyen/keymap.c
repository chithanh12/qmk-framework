#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#ifdef RGBLIGHT_ENABLE
#  include "rgb_underglow.h"
#endif

#ifdef TAP_DANCE_ENABLE
#  include "tap_dances.h"
#endif

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  
  /* 
   * BASE
   * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐     ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   * │  `~ │  1  │  2  │  3  │  4  │  5  │  6  │     │  7  │  8  │  9  │  0  │  -  │  =  │BSLS │ DEL │ 
   * ├─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┘  ┌──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴─────┤
   * │TAB     │  Q  │  W  │  E  │  R  │  T  │     │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │BSPC    │
   * ├────────┴┬────┴┬────┴┬────┴┬────┴┬────┴┐    └┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴────────┤
   * │CAPS     │  A  │  S  │  D  │  F  │  G  │     │  H  │  J  │  K  │  L  │  ;  │  '  │ENTER        │
   * ├─────────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┐  └──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴───────┬─────┤
   * │LSHFT       │  Z  │  X  │  C  │  V  │  B  │     │  N  │  M  │  ,  │  .  │  /  │RSHFT     │ UP  │
   * ├──────┬─────┴─┬───┴──┬──┴─────┴────┬┴─────┤     ├─────┴┬────┴────┬┴────┬┴────┬┴────┬─────┼─────┤
   * │LCTRL │L_GUI  │L_ALT │SPC          │FN1   │     │SPC   │BSPC     │R_ALT│R_CTR│LEFT │DOWN │RIGHT│
   * └──────┴───────┴──────┴─────────────┴──────┘     └──────┴─────────┴─────┴─────┴─────┴─────┴─────┘
   */

  [_BASE] = LAYOUT(
    KC_GRAVE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    TD(T_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP, 
    MO_LOWR, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,                             MO_LOWR, KC_RGUI, TG_LOWR, TG_RAIS, KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_LAY1] = LAYOUT(
   KC_GRAVE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    TD(T_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP, 
    MO_LOWR, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,                             MO_LOWR, KC_RGUI, TG_LOWR, TG_RAIS, KC_LEFT, KC_DOWN, KC_RGHT
  ),

   /* 
   * LOWER
   * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐     ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   * │  `~ │  1  │  2  │  3  │  4  │  5  │  6  │     │  7  │  8  │  9  │  0  │  -  │  =  │BSLS │ DEL │ 
   * ├─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┘  ┌──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴─────┤
   * │TAB     │  Q  │  W  │  E  │  R  │  T  │     │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │BSPC    │
   * ├────────┴┬────┴┬────┴┬────┴┬────┴┬────┴┐    └┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴────────┤
   * │CAPS     │  A  │  S  │  D  │  F  │  G  │     │  H  │  J  │  K  │  L  │  ;  │  '  │ENTER        │
   * ├─────────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┐  └──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴───────┬─────┤
   * │LSHFT       │  Z  │  X  │  C  │  V  │  B  │     │  N  │  M  │  ,  │  .  │  /  │RSHFT     │ UP  │
   * ├──────┬─────┴─┬───┴──┬──┴─────┴────┬┴─────┤     ├─────┴┬────┴────┬┴────┬┴────┬┴────┬─────┼─────┤
   * │LCTRL │L_GUI  │L_ALT │SPC          │FN1   │     │SPC   │BSPC     │R_ALT│R_CTR│LEFT │DOWN │RIGHT│
   * └──────┴───────┴──────┴─────────────┴──────┘     └──────┴─────────┴─────┴─────┴─────┴─────┴─────┘
   */

  [_LOWER] = LAYOUT(
    KC_GRAVE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_BSPC,
    RGB_TOG, RGB_MOD, _______, KC_UP,   _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, _______,
    KC_TILD, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______, _______
  ),

   /* 
   * RAISE
   * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐     ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   * │  `~ │  1  │  2  │  3  │  4  │  5  │  6  │     │  7  │  8  │  9  │  0  │  -  │  =  │BSLS │ DEL │ 
   * ├─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┘  ┌──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴─────┤
   * │TAB     │  Q  │  W  │  E  │  R  │  T  │     │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │BSPC    │
   * ├────────┴┬────┴┬────┴┬────┴┬────┴┬────┴┐    └┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴────────┤
   * │CAPS     │  A  │  S  │  D  │  F  │  G  │     │  H  │  J  │  K  │  L  │  ;  │  '  │ENTER        │
   * ├─────────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┐  └──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴───────┬─────┤
   * │LSHFT       │  Z  │  X  │  C  │  V  │  B  │     │  N  │  M  │  ,  │  .  │  /  │RSHFT     │ UP  │
   * ├──────┬─────┴─┬───┴──┬──┴─────┴────┬┴─────┤     ├─────┴┬────┴────┬┴────┬┴────┬┴────┬─────┼─────┤
   * │LCTRL │L_GUI  │L_ALT │SPC          │FN1   │     │SPC   │BSPC     │R_ALT│R_CTR│LEFT │DOWN │RIGHT│
   * └──────┴───────┴──────┴─────────────┴──────┘     └──────┴─────────┴─────┴─────┴─────┴─────┴─────┘
   */

  [_RAISE] = LAYOUT(
    KC_GRAVE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_BSPC,
    RGB_TOG, RGB_MOD, _______, KC_UP,   _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, _______,
    KC_TILD, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______, _______
  ),

   /* 
   * _CTRL
   * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐     ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
   * │  `~ │  1  │  2  │  3  │  4  │  5  │  6  │     │  7  │  8  │  9  │  0  │  -  │  =  │BSLS │ DEL │ 
   * ├─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┘  ┌──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴─────┤
   * │TAB     │  Q  │  W  │  E  │  R  │  T  │     │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │BSPC    │
   * ├────────┴┬────┴┬────┴┬────┴┬────┴┬────┴┐    └┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴────────┤
   * │CAPS     │  A  │  S  │  D  │  F  │  G  │     │  H  │  J  │  K  │  L  │  ;  │  '  │ENTER        │
   * ├─────────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┐  └──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴───────┬─────┤
   * │LSHFT       │  Z  │  X  │  C  │  V  │  B  │     │  N  │  M  │  ,  │  .  │  /  │RSHFT     │ UP  │
   * ├──────┬─────┴─┬───┴──┬──┴─────┴────┬┴─────┤     ├─────┴┬────┴────┬┴────┬┴────┬┴────┬─────┼─────┤
   * │LCTRL │L_GUI  │L_ALT │SPC          │FN1   │     │SPC   │BSPC     │R_ALT│R_CTR│LEFT │DOWN │RIGHT│
   * └──────┴───────┴──────┴─────────────┴──────┘     └──────┴─────────┴─────┴─────┴─────┴─────┴─────┘
   */

  [_CONTROL] = LAYOUT(
    KC_GRAVE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_BSPC,
    RGB_TOG, RGB_MOD, _______, KC_UP,   _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, _______,
    KC_TILD, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______, _______
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ON_BASE:
      if (record->event.pressed) {
        layer_off(_CONTROL);
        layer_off(_LOWER);
        layer_off(_RAISE);
        layer_off(_LAY1);
        layer_on(_BASE);
      }
      return false;
      break;
    case ON_LAY1:
      if (record->event.pressed) {
        layer_off(_CONTROL);
        layer_off(_LOWER);
        layer_off(_RAISE);
        layer_off(_BASE);
        layer_on(_LAY1);
      }
      return false;
      break;
    case ON_CTRL:
      if (record->event.pressed) {
        layer_off(_LOWER);
        layer_off(_RAISE);
        layer_off(_LAY1);
        layer_off(_BASE);
        layer_on(_CONTROL);
      }
      return false;
      break;
  }

  #ifdef RGBLIGHT_ENABLE
    if (!process_rgb_keycodes(keycode, record)) {
        return false;
    }
  #endif

  return true;
}


layer_state_t layer_state_set_user(layer_state_t state) {

  #ifdef RGBLIGHT_ENABLE
    handle_layer_changes(state);
  #endif

  return state;
}