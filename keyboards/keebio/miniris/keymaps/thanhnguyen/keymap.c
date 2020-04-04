#include QMK_KEYBOARD_H

#ifdef RGBLIGHT_ENABLE
#  include "rgb_underglow.h"
#endif

#ifdef TAP_DANCE_ENABLE
#  include "tap_dances.h"
#endif

extern keymap_config_t keymap_config;

#define TD_ESC TD(T_ESCTAB)
#define TD_SHF TD(T_SHFCAP)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//   ┌─────┬─────┬─────┬─────┬─────┬─────┐                  ┌─────┬─────┬─────┬─────┬─────┬─────┐
//   TAB     Q     W     E     R     T                        Y     U     I     O     P       
//   ├─────┼─────┼─────┼─────┼─────┼─────┤                  ├─────┼─────┼─────┼─────┼─────┼─────┤ 
//    ⎋ ^     A     S     D     F     G                        H     J     K     L   SCLN   QUOT 
//   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┐      ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//      ⇧     Z     X     C     V     B    LOW          RAIS   N     M     ,     .     /     ⇧ 
//   └─────┴─────┴─────┴──┬──┴──┬──┴──┬──┴──┬──┘      └──┬──┴──┬──┴──┬──┴──┬──┴─────┴─────┴─────┘
//                         LGUI  LOWER  ENT                SPC  RAISE  RALT
//                        └─────┴─────┴─────┘            └─────┴─────┴─────┘ 
  [_QWERTY] = LAYOUT(
   //┌────────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      TD_ESC,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                          KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSLS, 
   //├────────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_LCTL, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                          KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_BSPC,
   //├────────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      TD_SHF,  KC_Z,    KC_X,    KC_C,   KC_V,   KC_B, TG_LOWR,       TG_RAIS, KC_N,  KC_M,   KC_COMM,KC_DOT, KC_SLSH, KC_RSFT, 
   //└────────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                   KC_LGUI,TT_LOWR, KC_SPC,               KC_ENT, TT_RAIS, TD_CTRL
    //                            └───────┴───────┴───────┘              └───────┴───────┴───────┘ 
  ),
 
//   ┌─────┬─────┬─────┬─────┬─────┬─────┐                  ┌─────┬─────┬─────┬─────┬─────┬─────┐
//   TAB     Q     W     E     R     T                        Y     U     I     O     P       
//   ├─────┼─────┼─────┼─────┼─────┼─────┤                  ├─────┼─────┼─────┼─────┼─────┼─────┤ 
//    ⎋ ^     A     S     D     F     G                        H     J     K     L   SCLN   QUOT 
//   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┐      ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//      ⇧     Z     X     C     V     B    LOW          RAIS   N     M     ,     .     /     ⇧ 
//   └─────┴─────┴─────┴──┬──┴──┬──┴──┬──┴──┬──┘      └──┬──┴──┬──┴──┬──┴──┬──┴─────┴─────┴─────┘
//                         LGUI  LOWER  ENT                SPC  RAISE  RALT
//                        └─────┴─────┴─────┘            └─────┴─────┴─────┘ 
  [_LOWER] = LAYOUT(
   //┌───────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      TD_ESC, KC_5,   KC_6,   KC_7,   KC_8,   KC_9,                          KC_Y,   KC_HOME,KC_END, KC_O,   KC_P,   KC_BSLS, 
   //├───────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_LCTL,KC_1,   KC_2,   KC_3,   KC_4,   KC_0,                          KC_LEFT,KC_DOWN, KC_UP, KC_RGHT, KC_SCLN,KC_BSPC,
   //├───────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      TD_SHF, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   TG_LOWR,       TG_RAIS, KC_N,  KC_M,   KC_COMM,KC_DOT, KC_SLSH, RESET, 
   //└───────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                  KC_LGUI,TT_LOWR, KC_SPC,               KC_ENT, TT_RAIS, TD_CTRL
    //                           └───────┴───────┴───────┘              └───────┴───────┴───────┘ 
  ),

//   ┌─────┬─────┬─────┬─────┬─────┬─────┐                  ┌─────┬─────┬─────┬─────┬─────┬─────┐
//      *     `     <     `     >     !                        @     [     -     ]     -     ⌦ 
//   ├─────┼─────┼─────┼─────┼─────┼─────┤                  ├─────┼─────┼─────┼─────┼─────┼─────┤
//      ^     \     {     =     }     #                        _     (     "     )           ⌫ 
//   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┐      ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//      ⇧     %     :     *     +     ~  TG_LOWR        DEL    $     &     ,     ?     /     ⇧ 
//   └─────┴─────┴─────┴──┬──┴──┬──┴──┬──┴──┬──┘      └──┬──┴──┬──┴──┬──┴──┬──┴─────┴─────┴─────┘
//                         LGUI  LOWER  ENT                 SPC RAISE RALT
//                        └─────┴─────┴─────┘            └─────┴─────┴─────┘ 

  [_RAISE] = LAYOUT(
   //┌────────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      TD_ESC,  KC_GRV, KC_LT , KC_GRV, KC_GT,  KC_EXLM,                       KC_AT,  KC_LBRC,KC_MINS,KC_RBRC,KC_MINS,KC_DEL,
   //├────────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_LCTL, KC_BSLS,KC_LCBR,KC_EQL , KC_RCBR, KC_HASH,                     KC_UNDS,KC_LPRN,KC_DQT, KC_RPRN,KC_PIPE,KC_BSPC,
   //├────────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      TD_SHF,  KC_PERC,KC_COLN,KC_ASTR,KC_PLUS,KC_TILD,TG_LOWR,       TG_RAIS,KC_DLR, KC_AMPR,KC_CIRC,_______,KC_QUES, RESET, 
   //└────────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                        KC_LGUI,TT_LOWR, KC_SPC,               KC_ENT, TT_RAIS, TD_CTRL
    //                            └───────┴───────┴───────┘              └───────┴───────┴───────┘ 
    ),

//   ┌─────┬─────┬─────┬─────┬─────┬─────┐                  ┌─────┬─────┬─────┬─────┬─────┬─────┐
//   TAB     Q     W     E     R     T                        Y     U     I     O     P       
//   ├─────┼─────┼─────┼─────┼─────┼─────┤                  ├─────┼─────┼─────┼─────┼─────┼─────┤ 
//    ⎋ ^     A     S     D     F     G                        H     J     K     L   SCLN   QUOT 
//   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┐      ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//      ⇧     Z     X     C     V     B    LOW          RAIS   N     M     ,     .     /     ⇧ 
//   └─────┴─────┴─────┴──┬──┴──┬──┴──┬──┴──┬──┘      └──┬──┴──┬──┴──┬──┴──┬──┴─────┴─────┴─────┘
//                         LGUI  LOWER  ENT                SPC  RAISE  RALT
//                        └─────┴─────┴─────┘            └─────┴─────┴─────┘ 
  [_CONFIG] = LAYOUT(
   //┌───────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      TD_ESC, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                          KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSLS, 
   //├───────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_LCTL, KC_A,  KC_S,   KC_D,   KC_F,   KC_G,                          KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_BSPC,
   //├───────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      TD_SHF, KC_Z,   KC_X,    KC_C,   KC_V,   KC_B, TG_LOWR,       TG_RAIS, KC_N,  KC_M,   KC_COMM,KC_DOT, KC_SLSH, KC_RSFT, 
   //└───────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                  KC_LGUI,TT_LOWR, KC_SPC,               KC_ENT, TT_RAIS, TD_CTRL
    //                           └───────┴───────┴───────┘              └───────┴───────┴───────┘ 
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ON_QWERTY:
      if (record->event.pressed) {
        layer_off(_CONFIG);
        layer_off(_LOWER);
        layer_off(_RAISE);
        layer_on(_QWERTY);
      }
      return false;
      break;
    case ON_LOWER:
      if (record->event.pressed) {
        layer_off(_CONFIG);
        layer_off(_RAISE);
        layer_off(_QWERTY);
        layer_on(_LOWER);
      }
      return false;
      break;

    case ON_CONFIG:
      if (record->event.pressed) {
        layer_off(_LOWER);
        layer_off(_RAISE);
        layer_off(_QWERTY);
        layer_on(_CONFIG);
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


void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
   }
}


layer_state_t layer_state_set_user(layer_state_t state) {

  #ifdef RGBLIGHT_ENABLE
    handle_layer_changes(state);
  #endif

  return state;
}