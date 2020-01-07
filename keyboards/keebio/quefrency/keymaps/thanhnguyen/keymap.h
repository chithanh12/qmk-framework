#pragma once
#include QMK_KEYBOARD_H

#define _BASE 0
#define _LAY1 1
#define _LOWER 2
#define _RAISE 3
#define _CONTROL 9

#define MO_LOWR MO(_LOWER)
#define MO_RAIS MO(_RAISE)


#define TT_LOWR TT(_LOWER)
#define TT_RAIS TT(_RAISE)

#define TG_LAY1 TG(_LAY1)
#define TG_LOWR TG(_LOWER)
#define TG_RAIS TG(_RAISE)

enum custom_keycodes {
  ON_BASE = SAFE_RANGE,
  ON_LAY1,
  ON_CTRL,

  RGBETOG,
  RGBEMOD
};