#include QMK_KEYBOARD_H

#ifdef RGBLIGHT_ENABLE
#  include "rgb_underglow.h"
#endif

#ifdef TAP_DANCE_ENABLE
#  include "tap_dances.h"
#endif
#define MOUSEKEY_WHEEL_INTERVAL 20
#define MOUSEKEY_WHEEL_DELAY 20
#define MOUSEKEY_MAX_SPEED 8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40
extern keymap_config_t keymap_config;

#define TD_SHF TD(T_SHFCAP)
#define B_FNT LT(_FUNCT, KC_B) 

// #define LOW_SLS LT(_LOWER, KC_SLSH)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//   ┌─────┬─────┬─────┬─────┬─────┬─────┐                  ┌─────┬─────┬─────┬─────┬─────┬─────┐
//     TAB    Q     W     E     R     T                        Y     U     I     O     P      
//   ├─────┼─────┼─────┼─────┼─────┼─────┤                  ├─────┼─────┼─────┼─────┼─────┼─────┤ 
//    ⎋ ^     A     S     D     F     G                        H     J     K     L   SCLN  BSPC 
//   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┐      ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//      ⇧     Z     X     C     V     B    LOW          RAIS   N     M     ,     .     /     ⇧ 
//   └─────┴─────┴─────┴──┬──┴──┬──┴──┬──┴──┬──┘      └──┬──┴──┬──┴──┬──┴──┬──┴─────┴─────┴─────┘
//                         LGUI  LOWER  SPC                 ENT RAISE  RALT
//                        └─────┴─────┴─────┘            └─────┴─────┴─────┘ 

  [_QWERTY] = LAYOUT(
   //┌────────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      TABHYPR_,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                          KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSLS, 
   //├────────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      ESCLCTL, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                          KC_H,   KC_J,   KC_K,   KC_L,   KC_SCOLON, KC_BSPC,
   //├────────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      TD_SHF, RGUI_T(KC_Z), KC_X, KC_C,   KC_V,  B_FNT, TG_LOWR,       TG_RAIS, KC_N,  KC_M,   KC_COMM,KC_DOT, CTRLSLSH, KC_RSFT, 
   //└────────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                   KC_LGUI,TT_LOWR, KC_SPC,               KC_ENT, TT_RAIS ,TD_CTRL
    //                            └───────┴───────┴───────┘              └───────┴───────┴───────┘ 
  ),

  [_CONFIG] = LAYOUT(
   //┌───────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      TABHYPR_, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                          KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSLS, 
   //├───────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      ESCLCTL, KC_A,  KC_S,   KC_D,   KC_F,   KC_G,                          KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_BSPC,
   //├───────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      TD_SHF, RGUI_T(KC_Z), KC_X, KC_C,  KC_V, B_FNT, TG_LOWR,       TG_RAIS, KC_N,  KC_M,   KC_COMM,KC_DOT, KC_SLSH, KC_RSFT, 
   //└───────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                  KC_LCTL, TT_LOWR, KC_SPC,               KC_ENT, TT_RAIS ,TD_CTRL
    //                           └───────┴───────┴───────┘              └───────┴───────┴───────┘ 
  ),
//   ┌─────┬─────┬─────┬─────┬─────┬─────┐                  ┌─────┬─────┬─────┬─────┬─────┬─────┐
//   TAB     5     6     7     8      9                       Y     U     I     O     P       
//   ├─────┼─────┼─────┼─────┼─────┼─────┤                  ├─────┼─────┼─────┼─────┼─────┼─────┤ 
//    ⎋ ^     1     2     3     4     0                        H     J     K     L   SCLN   QUOT 
//   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┐      ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//      ⇧     Z     X     C     V     B    LOW          RAIS   N     M     ,     .     /     ⇧ 
//   └─────┴─────┴─────┴──┬──┴──┬──┴──┬──┴──┬──┘      └──┬──┴──┬──┴──┬──┴──┬──┴─────┴─────┴─────┘
//                         LGUI  LOWER  SPC                 ENT RAISE  RALT
//                        └─────┴─────┴─────┘            └─────┴─────┴─────┘ 
  [_LOWER] = LAYOUT(
   //┌───────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      TABHYPR, KC_5,   KC_6,   KC_7,   KC_8,   KC_9,                         KC_Y,  KC_HOME, KC_END, KC_INS, KC_PSCR, KC_BSLS, 
   //├───────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      ESCLCTL,KC_1,   KC_2,   KC_3,   KC_4,   KC_0,                          KC_LEFT,KC_DOWN, KC_UP, KC_RGHT, KC_SCLN,KC_BSPC,
   //├───────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      TD_SHF, KC_Z,   KC_X,   KC_C,   KC_COMM,KC_DOT,   TG_LOWR,       TG_RAIS,  KC_N, KC_M, KC_COMM, KC_DOT, KC_RCTL, KC_RSFT, 
   //└───────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                  KC_LGUI,TT_LOWR, KC_SPC,               KC_ENT, TT_RAIS ,TD_CTRL
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
      TABHYPR,  KC_GRV, KC_LT , KC_GRV, KC_GT,  KC_EXLM,                       KC_AT,  KC_LBRC,KC_MINS,KC_RBRC,KC_QUOT,KC_DEL,
   //├────────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      ESCLCTL, KC_BSLS,KC_LCBR,KC_EQL , KC_RCBR, KC_HASH,                     KC_UNDS,KC_LPRN,KC_DQT, KC_RPRN,KC_PIPE,KC_BSPC,
   //├────────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      TD_SHF,  KC_PERC,KC_COLN,KC_ASTR,KC_PLUS,KC_TILD,TG_LOWR,       TG_RAIS,KC_DLR, KC_AMPR,KC_CIRC,_______,KC_QUES,KC_RSFT, 
   //└────────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                   KC_LGUI,TT_LOWR, KC_SPC,               KC_ENT, TT_RAIS ,TD_CTRL
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
  [_FUNCT] = LAYOUT(
   //┌───────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,                         KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, 
   //├───────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      RGBEMOD,RGB_MOD,_______,RGB_VAD, RGB_VAI,_______,                       KC_LEFT,KC_DOWN, KC_UP, KC_RGHT,_______,_______,    
   //├───────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      RGBETOG, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI,_______,TG_LOWR,       TG_RAIS,_______,_______,_______,_______,_______, RESET, 
   //└───────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                  KC_LGUI,TT_LOWR, KC_SPC,               KC_ENT, TT_RAIS ,TD_CTRL
    //                           └───────┴───────┴───────┘              └───────┴───────┴───────┘ 
  )
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ON_QWERTY:
      if (record->event.pressed) {
        layer_off(_CONFIG);
        layer_off(_FUNCT);
        layer_off(_LOWER);
        layer_off(_RAISE);
        layer_on(_QWERTY);
      }
      return false;
    
    case ON_LOWER:
      if (record->event.pressed) {
        layer_off(_CONFIG);
        layer_off(_FUNCT);
        layer_off(_RAISE);
        layer_off(_QWERTY);
        layer_on(_LOWER);
      }
      return false;
    
    case ON_RAISE:
      if (record->event.pressed) {
        layer_off(_CONFIG);
        layer_off(_FUNCT);
        layer_off(_LOWER);
        layer_off(_QWERTY);
        layer_on(_RAISE);
      }
      return false;

    case ON_FUNCT:
      if (record->event.pressed) {
        layer_off(_CONFIG);
        layer_off(_RAISE);
        layer_off(_LOWER);
        layer_off(_QWERTY);
        layer_on(_FUNCT);
      }
      return false;
  }

  #ifdef RGBLIGHT_ENABLE
    if (!process_rgb_keycodes(keycode, record)) {
        return false;
    }
  #endif

  return true;
}


void encoder_update_user(uint8_t index, bool clockwise) {
   if (layer_state_is(_CONFIG)){
        if (index == 0) {
            if (clockwise) {
                tap_code(KC_BRID);
            } else {
                tap_code(KC_BRIU);
            }
        } else if (index == 1) {
            if (clockwise) {
                tap_code(KC_MS_R);
            } else {
                tap_code(KC_MS_L);
            }
        }
   }else{
      if (index == 0) {
          if (clockwise) {
            tap_code(KC_VOLU);
          } else {
            tap_code(KC_VOLD);
          }
        } else if (index == 1) {
          if (clockwise) {
              tap_code(KC_BRID);
          } else {
              tap_code(KC_BRIU);
          }
      }
   }
}


layer_state_t layer_state_set_user(layer_state_t state) {

  #ifdef RGBLIGHT_ENABLE
    handle_layer_changes(state);
  #endif

  return state;
}