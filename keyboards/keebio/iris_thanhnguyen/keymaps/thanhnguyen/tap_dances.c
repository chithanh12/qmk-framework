#include "tap_dances.h"

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for CAPS, twice for ESC
  [T_ESCTAB]  = ACTION_TAP_DANCE_DOUBLE(KC_TAB,KC_ESC),
  [T_SHFCAP] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT,KC_CAPS),
  [T_CTRL]     = ACTION_TAP_DANCE_FN_ADVANCED(NULL, t_ctrl_finished, t_ctrl_reset)

};
// T_CTRL

static tap t_ctrl_tap_state = {
  .is_press_action = true,
  .state = 0
};

int cur_dance (qk_tap_dance_state_t *state) {
  if (state->count == 1) {
    if (state->interrupted || !state->pressed)  return SINGLE_TAP;
    else return SINGLE_HOLD;
  }
  else if (state->count == 2) {
    if (state->interrupted) return DOUBLE_SINGLE_TAP;
    else if (state->pressed) return DOUBLE_HOLD;
    else return DOUBLE_TAP;
  }
  if (state->count == 3) {
    if (state->interrupted || !state->pressed)  return TRIPLE_TAP;
    else return TRIPLE_HOLD;
  }
  
  else return 8;
}

void t_ctrl_finished (qk_tap_dance_state_t *state, void *user_data) {
  t_ctrl_tap_state.state = cur_dance(state);
  switch (t_ctrl_tap_state.state) {
    case SINGLE_TAP: break;
    case SINGLE_HOLD: break;
    case DOUBLE_TAP: break;
    case DOUBLE_HOLD: layer_on(_ADJUST); break;
    case TRIPLE_TAP:
      if (layer_state_is(_ADJUST)) {
        layer_off(_ADJUST);
      } else {
        layer_on(_ADJUST);
      }
      break;
  }
}

void t_ctrl_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (t_ctrl_tap_state.state) {
    case SINGLE_TAP: break;
    case SINGLE_HOLD: break;
    case DOUBLE_TAP: break;
    case DOUBLE_HOLD: layer_off(_ADJUST); break;
  }
  t_ctrl_tap_state.state = 0;
}