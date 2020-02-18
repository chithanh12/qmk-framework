
#pragma once
#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _ADJUST 1
#define _LOWER  2
#define _RAISE 3


enum custom_keycodes {
  ON_QWERTY = SAFE_RANGE,
  ON_ADJUST,
  ON_LOWER,
  ON_RAISE,
   
  RGBETOG,
  RGBEMOD
};

#define MO_LOWR MO(_LOWER)
#define MO_RAIS MO(_RAISE)


#define TT_LOWR TT(_LOWER)
#define TT_RAIS TT(_RAISE)

#define TG_LOWR TG(_LOWER)
#define TG_RAIS TG(_RAISE)
#define TD_CTRL TD(T_CTRL)