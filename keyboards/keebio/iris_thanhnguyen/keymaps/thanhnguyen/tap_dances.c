#include "tap_dances.h"

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for CAPS, twice for ESC
  [T_ESCTAB]  = ACTION_TAP_DANCE_DOUBLE(KC_CAPS,KC_ESC)
};
