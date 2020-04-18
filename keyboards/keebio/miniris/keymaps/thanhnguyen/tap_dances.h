#pragma once

#include "keymap.h"

#define TABHYPR MT(MOD_RCTL | MOD_RSFT | MOD_RALT | MOD_RGUI, KC_TAB)
#define ESCLCTL MT(MOD_LCTL, KC_ESC)
#define BSPCCTL MT(MOD_RCTL, KC_BSPC)

typedef struct {
  bool is_press_action;
  int state;
} tap;

int cur_dance (qk_tap_dance_state_t *state);

enum {
  SINGLE_TAP = 1,
  SINGLE_HOLD = 2,
  DOUBLE_TAP = 3,
  DOUBLE_HOLD = 4,
  DOUBLE_SINGLE_TAP = 5,
  TRIPLE_TAP = 6,
  TRIPLE_HOLD = 7
};

void t_ctrl_finished (qk_tap_dance_state_t *state, void *user_data);
void t_ctrl_reset (qk_tap_dance_state_t *state, void *user_data);

enum {
  T_ESCTAB = 0,
  T_SHFCAP = 1,
  T_CTRL = 2,
  T_SEMCOL = 3
};