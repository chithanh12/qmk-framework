#pragma once

#ifdef KEYBOARD_keebio_miniris_rev1
    #include "rev1.h"
// #elif KEYBOARD_keebio_iris_rev1_led
//     #include "rev1_led.h"
// #elif KEYBOARD_keebio_iris_rev2
//     #include "rev2.h"
// #elif KEYBOARD_keebio_iris_rev3
//     #include "rev3.h"
// #elif KEYBOARD_keebio_iris_rev4
//     #include "rev4.h"
#endif

#include "quantum.h"
#include "via.h"


#define LAYOUT_kc( \
    L00, L01, L02, L03, L04, L05,      R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15,      R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25,      R20, R21, R22, R23, R24, R25, \
              LT0, LT1, LT2, LT3,      RT3, RT2, RT1, RT0 \
    ) \
    LAYOUT( \
        KC_##L00, KC_##L01, KC_##L02, KC_##L03, KC_##L04, KC_##L05,               KC_##R00, KC_##R01, KC_##R02, KC_##R03, KC_##R04, KC_##R05, \
        KC_##L10, KC_##L11, KC_##L12, KC_##L13, KC_##L14, KC_##L15,               KC_##R10, KC_##R11, KC_##R12, KC_##R13, KC_##R14, KC_##R15, \
        KC_##L20, KC_##L21, KC_##L22, KC_##L23, KC_##L24, KC_##L25,               KC_##R20, KC_##R21, KC_##R22, KC_##R23, KC_##R24, KC_##R25, \
                            KC_##LT0, KC_##LT1, KC_##LT2, KC_##LT3,               KC_##RT3, KC_##RT2, KC_##RT1, KC_##RT0 \
    )
