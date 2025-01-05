
#pragma once

#include <dt-bindings/zmk/keys.h>
#include "aliases.h"


// FUN row
#define _______________LAY_L_FUN_01_05_______________ &kp F1 &kp F2 &kp F3 &kp F4 &kp F5
#define _______________LAY_R_FUN_06_10_______________ &kp F6 &kp F7 &kp F8 &kp F9 &kp F10

// Blank row
#define ______________________________________________________ ___ ___ ___ ___ ___
#define ________________________________                       ___ ___ ___

//
// HRM
//
#define _____________HRM__QWERTY__GACS_____________ &hm LGUI A  &hm LALT S  &hm LCTRL D &hs LSHFT F
#define _____________HRM__QWERTY__SCAG_____________ &hs RSHFT J &hm RCTRL K &hm LALT L  &hm RGUI SEMI
#define _____________HRM__QWERTY__CASG_____________ &hm LCTRL A &hm LALT S  &hs LSHFT D &hm LGUI F
#define _____________HRM__QWERTY__GSAC_____________ &hs RGUI J  &hs RSHFT K &hm LALT L  &hm RCTRL SEMI

#define _____________HRM__COLEMAK__GACS____________ &hm LGUI A  &hm LALT R  &hm LCTRL S &hs LSHFT T
#define _____________HRM__COLEMAK__SCAG____________ &hs RSHFT N &hm RCTRL I &hm LALT I  &hm RGUI O

//
// MODS
//
#define _________________MOD__GACS_________________ &kp LGUI  &kp LALT  &kp LCTRL &kp LSHFT
#define _________________MOD__SCAG_________________ &kp LSHFT &kp LCTRL &kp LALT  &kp LGUI


//
// NAVS
//
#define _______________________NAVS_TOP_______________________ &kp PG_UP &kp ME(LEFT) &kp UP   &kp ME(RIGHT) &kp ME(UP)
#define _______________________NAVS_MID_______________________ &kp PG_DN &kp LEFT     &kp DOWN &kp RIGHT     &kp ME(DOWN)

//
// NUMS
//
#define _______________________NUMS_TOP_______________________ &kp EQUAL  &kp N7     &kp N8     &kp N9     &kp MINUS
#define _______________________NUMS_MID_______________________ &kp ASTRK  &kp N4     &kp N5     &kp N6     &kp PLUS
#define _______________________NUMS_BOT_______________________ &kp N0     &kp N1     &kp N2     &kp N3     &kp FSLH

#define thumb_base_left  &kp MEH     DSPACE     &kp LSHIFT
#define thumb_base_right &lt NAV RET SMART_NUM
#define thumb_nav_left   &kp MEH     &to 0      ___
#define thumb_nav_right  ___         CANCEL
#define thumb_fun_left   &kp MEH     &to 0      ___
#define thumb_fun_right  &kp C_MUTE  &kp C_PP
#define thumb_num_left   &kp MEH     &to 0      ___
#define thumb_num_right  ___         ___
#define thumb_sys_left   &kp MEH     &to 0      ___
#define thumb_sys_right  ___         ___
#define thumb_pnt_left   &kp MEH     &to 0      ___
#define thumb_pnt_right  &mkp LCLK   &mkp RCLK
#define thumb_win_left   &kp MEH     &to 0      ___
#define thumb_win_right  ___         ___
