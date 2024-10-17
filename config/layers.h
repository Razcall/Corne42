#pragma once

#include "node_free.h"

//my layers
#define BASE 0
#define LOWER 1
#define RAISE 2
#define FUN 3
#define NAVI 4
#define ADJUST 5
//aenhym layers
// Alphas and OS overlays
#define DEF 6
#define WIN 7
#define MAC 8


// Symbols and Alternate Alphas
#define SYM 9
#define WIN_SYM 10
#define MAC_SYM 11

COND_LAYER(WIN SYM, WIN_SYM)
COND_LAYER(MAC SYM, MAC_SYM)


// Numbers and Function keys
#define NUM 12
#define WIN_NUM 13
#define MAC_NUM 14

COND_LAYER(WIN NUM, WIN_NUM)
COND_LAYER(MAC NUM, MAC_NUM)


// Navigation & Media
#define NAV 15
#define WIN_NAV 16
#define MAC_NAV 17

COND_LAYER(WIN NAV, WIN_NAV)
COND_LAYER(MAC NAV, MAC_NAV)


// Bluetooth & Keyboard
#define ADM 18

COND_LAYER(NAV SYM, ADM)


// Gaming
#define GAM 19
#define GAM_ARC 20
