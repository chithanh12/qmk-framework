#pragma once

#include "iris.h"
#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
    #include <avr/io.h>
    #include <avr/interrupt.h>
#endif
#endif

#define LAYOUT( \
    LA1, LA2, LA3, LA4, LA5, LA6,      LE6, RE6,       RA6, RA5, RA4, RA3, RA2, RA1, \
    LB1, LB2, LB3, LB4, LB5, LB6,      LE5, RE5,       RB6, RB5, RB4, RB3, RB2, RB1, \
    LC1, LC2, LC3, LC4, LC5, LC6,      LE4, RE4,       RC6, RC5, RC4, RC3, RC2, RC1, \
    LD1, LD2, LD3, LD4, LD5, LD6,      LE3, RE3,       RD6, RD5, RD4, RD3, RD2, RD1\
    ) \
    { \
        { LA1, LA2, LA3, LA4, LA5, LA6, LE6 }, \
        { LB1, LB2, LB3, LB4, LB5, LB6, LE5}, \
        { LC1, LC2, LC3, LC4, LC5, LC6, LE4 }, \
        { LD1, LD2, LD3, LD4, LD5, LD6, LE3 }, \
        { RA1, RA2, RA3, RA4, RA5, RA6, RE6 }, \
        { RB1, RB2, RB3, RB4, RB5, RB6, RE5}, \
        { RC1, RC2, RC3, RC4, RC5, RC6, RE4 }, \
        { RD1, RD2, RD3, RD4, RD5, RD6, RE3 } \
    }
