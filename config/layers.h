#pragma once

#include "node_free.h"

//my layers
#define BASE 0
#define LOWER 1
#define RAISE 2
#define FUN 3
#define NAVI 4
#define ADJUST 6
//aenhym layers
// Alphas and OS overlays
#define DEF 7
#define WIN 8
#define MAC 9


// Symbols and Alternate Alphas
#define SYM 10
#define WIN_SYM 11
#define MAC_SYM 12

COND_LAYER(WIN SYM, WIN_SYM)
COND_LAYER(MAC SYM, MAC_SYM)


// Numbers and Function keys
#define NUM 13
#define WIN_NUM 14
#define MAC_NUM 15

COND_LAYER(WIN NUM, WIN_NUM)
COND_LAYER(MAC NUM, MAC_NUM)


// Navigation & Media
#define NAV 16
#define WIN_NAV 17
#define MAC_NAV 18

COND_LAYER(WIN NAV, WIN_NAV)
COND_LAYER(MAC NAV, MAC_NAV)


// Bluetooth & Keyboard
#define ADM 19

COND_LAYER(NAV SYM, ADM)


// Gaming
#define GAM 20
#define GAM_ARC 21
