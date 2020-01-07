#include "rgb_underglow.h"

void handle_layer_changes(layer_state_t state) {
  switch (get_highest_layer(state)) {
    case _CONTROL:
      rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING+2);
      rgblight_sethsv_noeeprom(HSV_WHITE);
      break;
    case _RAISE:
      rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING+2);
      rgblight_sethsv_noeeprom(HSV_GREEN);
      break;
    case _LOWER:
      rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING+2);
      rgblight_sethsv_noeeprom(HSV_RED);
      break;
    case _LAY1:
      rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING+1);
      rgblight_sethsv_noeeprom(HSV_GOLDENROD);
      break;
    case _BASE:
      rgblight_sethsv_noeeprom(HSV_BLUE);
      rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_SWIRL+4);
      break;
  }
}

bool process_rgb_keycodes(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGBETOG:
      if (record->event.pressed) {
        rgblight_toggle_noeeprom();
      }
      return false;
      break;
    case RGBEMOD:
      if (record->event.pressed) {
        rgblight_step_noeeprom();
      }
      return false;
      break;
  }
  return true;
}