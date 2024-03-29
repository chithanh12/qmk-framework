#pragma once

#include "miniris.h"
#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
    #include <avr/io.h>
    #include <avr/interrupt.h>
#endif
#endif


#define LAYOUT( \
    LA1, LA2, LA3, LA4, LA5, LA6,           RA6, RA5, RA4, RA3, RA2, RA1, \
    LB1, LB2, LB3, LB4, LB5, LB6,           RB6, RB5, RB4, RB3, RB2, RB1, \
    LC1, LC2, LC3, LC4, LC5, LC6,           RC6, RC5, RC4, RC3, RC2, RC1, \
              LE2, LE3, LE4, LE5,           RE5, RE4, RE3, RE2 \
    ) \
    { \
        { LA1, LA2, LA3, LA4, LA5, LA6}, \
        { LB1, LB2, LB3, LB4, LB5, LB6 }, \
        { LC1, LC2, LC3, LC4, LC5, LC6}, \
        { KC_NO,KC_NO,   LE2, LE3, LE4, LE5  }, \
        { RA1, RA2, RA3, RA4, RA5, RA6 }, \
        { RB1, RB2, RB3, RB4, RB5, RB6 }, \
        { RC1, RC2, RC3, RC4, RC5, RC6 }, \
        { KC_NO, KC_NO,  RE2, RE3, RE4, RE5 } \
    }
