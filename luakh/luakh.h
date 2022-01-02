// vim:fdm=marker
#pragma once
#include<quantum_keycodes.h>

// LAYERS ================================================================={{{1
enum Layers
  { BASE = 0
  , SYMBOLS
  , MOVEMENT
  , ADJUST
  , SYSTEM
  , MODIFIER
  , SHIFT
  };

enum {
  TD_GUI_SGUI = 0,
  TD_ENT_TAB,
  TD_SPC_ALT
};
// define the actual keys in rev1/rev1.c
#define KC_D_GUI TD(TD_GUI_SGUI)
#define KC_D_ENT TD(TD_ENT_TAB)
#define KC_A_SPC TD(TD_SPC_ALT)


// KEYS ==================================================================={{{1

#define KC_TG_ADJ TG(ADJUST)

// mod tabs
#define KC_C_ESC LCTL_T(KC_ESC)
//#define KC_ HYPR_T
#define KC_HPR_SYMB LT(SYMBOLS, KC_HYPR)
#define KC_C_ENT LCTL_T(KC_ENT)
#define KC_G_ENT RGUI_T(KC_ENT)
#define KC_CTL_or_SLSH RCTL_T(KC_SLSH)
#define KC_G_SPC RGUI_T(KC_SPC)
#define KC_BT1_DOWN MT(KC_A, KC_MS_BTN1)

//#define KC_C_DAUM_R LCTL_T(KC_ESC)
//#define KC_M_DAUM_L LALT_T(KC_ENT)

// Home row
#define LHYPR_T(kc) MT(MOD_LCTL | MOD_LSFT | MOD_LALT | MOD_LGUI, kc)
#define RHYPR_T(kc) MT(MOD_RCTL | MOD_RSFT | MOD_RALT | MOD_RGUI, kc)

#define KC_H_GUI    RGUI_T(KC_H)
#define KC_M_GUI    RGUI_T(KC_M)
#define KC_V_GUI    RGUI_T(KC_V)
#define KC_Z_GUI    LGUI_T(KC_Z)
#define KC_SLSH_GUI RGUI_T(KC_SLSH)
#define KC_J_CTL    RCTL_T(KC_J)
#define KC_K_ALT    LALT_T(KC_K)
#define KC_L_SFT    RSFT_T(KC_L)
#define KC_SCLN_HPR RHYPR_T(KC_SCLN)

#define KC_LANGL KC_NUBS
#define KC_RANGL S(KC_NUBS)

#define KC_G_GUI LGUI_T(KC_G)
#define KC_K_GUI LGUI_T(KC_K)
#define KC_F_CTL LCTL_T(KC_F)
#define KC_D_ALT LALT_T(KC_D)
#define KC_S_SFT RSFT_T(KC_S)
#define KC_A_HPR LHYPR_T(KC_A)

// symbols and such
#define KC_MO_SYMBS MO(SYMBOLS)
#define KC_MO_SHIFT MO(SHIFT)
#define KC_MO_MDFIR MO(MODIFIER)

#define KC____ KC_TRNS

#define KC_RGBMF RGB_MODE_FORWARD

#define KC_MO_HYPR MO(_HPR)
//#define KC_MO_SUPER MO(_SUPER)
#define KC_BSP_MOD LT(MODIFIER, KC_BSPC)
#define KC_SPC_MOD LT(MODIFIER, KC_SPC)


#define KC__F1 KC_F1
#define KC__F2 KC_F2
#define KC__F3 KC_F3
#define KC__F4 KC_F4
#define KC__F5 KC_F5
#define KC__F6 KC_F6
#define KC__F7 KC_F7
#define KC__F8 KC_F8
#define KC__F9 KC_F9

// LAYER: QWERTY =========================================================={{{1
#define KC_Z_or_MOD LT(MODIFIER, KC_Z)
#define KC_SLSH_or_MOD LT(MODIFIER, KC_SLSH)
#define KC_GUI_BSP RGUI_T(KC_BSPC)
#define KC_LSFT_ENT LSFT_T(KC_ENT)
#define KC_TAB_MOV LT(MOVEMENT, KC_TAB)
#define KC_SPC_SYM LT(SYMBOLS, KC_SPC)
#define KC_M_ENT LALT_T(KC_ENT)
#define KC_M_SPC LALT_T(KC_SPC)
#define KC_TT_MOV TT(MOVEMENT)

#define LUAKH_QWERTY_1 \
                                 Q, W, E, R, T, /*|*/ Y, U, I, O, P
#define LUAKH_QWERTY_2 \
                                 A, S, D, F, G, /*|*/ H, J, K, L, SCLN
#define LUAKH_QWERTY_3 \
                          Z_or_MOD, X, C, V, B, /*|*/ N, M, COMM, DOT, SLSH
#define LUAKH_QWERTY_4 \
                          TT_MOV, LSFT_ENT, C_ESC, /*|*/ SPC, MO_SYMBS, D_GUI

// LAYER: SYMBOLS ========================================================={{{1
#define KC_S_or_SLSH LSFT_T(KC_SLSH)
#define KC_UNSC LSFT(KC_MINS)
#define KC_UMLAUT RALT(KC_U)

#define \
LUAKH_SYMBOLS_1    EXLM, AT, HASH, DOLLAR, PIPE, /*|*/D_ENT, 7, 8, 9, DOT
#define \
LUAKH_SYMBOLS_2  LCBR, RCBR, QUOT, GRAVE, BSLS, /*|*/ BSPC, 4, 5, 6, EQL
#define \
LUAKH_SYMBOLS_3   LBRC, RBRC, LPRN, RPRN, AMPR, /*|*/    0, 1, 2, 3, MINS
#define \
LUAKH_SYMBOLS_4             MO_MDFIR, ___, ___, /*|*/ ___, ___, ___


// LAYER: MOVEMENT ========================================================{{{1
  // mouse wheel
#define KC_WHU  KC_MS_WH_UP
#define KC_WHD  KC_MS_WH_DOWN
#define KC_WHR  KC_MS_WH_RIGHT
#define KC_WHL  KC_MS_WH_LEFT
  // Mouse keys
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN2
#define KC_MB3 KC_MS_BTN3
// Tap stuff
#define KC_C_MB1   RCTL_T(KC_MB1)
#define KC_SC_MB1  MT(MOD_RCTL | MOD_RSFT, KC_MB1)
#define KC_G_MB3   RGUI_T(KC_MB3)
#define KC_G_PGDN  RGUI_T(KC_PGDN)
#define KC_H_PGUP  HYPR_T(KC_PGUP)
#define KC_H_MB2   HYPR_T(KC_MB2)
#define KC_DEL_SYS LT(SYSTEM, KC_DEL)
#define KC_AC0 KC_MS_ACCEL0
#define KC_AC1 KC_MS_ACCEL1
#define KC_AC2 KC_MS_ACCEL2
#define KC_G_AC0 LGUI_T(KC_MS_ACCEL0)
#define KC_M_AC1 LALT_T(KC_MS_ACCEL1)
#define KC_C_AC1 LCTL_T(KC_MS_ACCEL1)
/* KC_MS_ACCEL2 */
#define KC_MO_MVMNT MO(MOVEMENT)

#define LUAKH_MOVEMENT_1 \
                HOME, MB2, PGDN, PGUP, MB1, /*|*/ NO, MB1, MB3, MB2, DEL_SYS
#define LUAKH_MOVEMENT_2 \
                 END, LEFT, DOWN, UP, RGHT, /*|*/ MS_L, MS_D, MS_U, MS_R, INS
#define LUAKH_MOVEMENT_3 \
                   _F1, _F2, _F3, _F4, _F5, /*|*/ WHL, WHD, WHU, WHR, CLR
#define LUAKH_MOVEMENT_4 \
                      TT_MOV, LSFT, TG_ADJ, /*|*/ LALT, RSFT, RCTL

// LAYER: ADJUST ========================================================={{{1
#define KC_RST   RESET
#define KC_LTOG  RGB_TOG
#define KC_LHUI  RGB_HUI
#define KC_LHUD  RGB_HUD
#define KC_LSAI  RGB_SAI
#define KC_LSAD  RGB_SAD
#define KC_LVAI  RGB_VAI
#define KC_LVAD  RGB_VAD
#define KC_LMOD  RGB_MOD

#define LUAKH_ADJUST_1 \
                 ___, LMOD, ___, ___, LTOG, /*|*/ ___, ___, ___, ___, TG_ADJ
#define LUAKH_ADJUST_2 \
                   ___, ___, ___, ___, ___, /*|*/ ___, ___, ___, ___, ___
#define LUAKH_ADJUST_3 \
                   ___, ___, ___, ___, ___, /*|*/ ___, ___, ___, ___, ___
#define LUAKH_ADJUST_4 \
                             ___, ___, ___, /*|*/ ___, ___, ___

// LAYER: MODIFIER ========================================================{{{1
// shifted modifiers
#define KC_LSALT   LSFT(KC_LALT)
#define KC_LSCTL   LSFT(KC_LCTL)
#define KC_LSGUI   LSFT(KC_LGUI)
#define KC_RSALT   RSFT(KC_LALT)
#define KC_RSCTL   RSFT(KC_RCTL)
#define KC_RSGUI   RSFT(KC_RGUI)
#define KC_GALT    RSFT(KC_RGUI)

#define KC_LGA LGUI(KC_LALT)
#define KC_LSGA LSFT(LGUI(KC_LALT))


#define LUAKH_MODIFIER_1 \
                   ___, ___, ___, ___, ___, /*|*/ ENT, ___, ___, ___, DEL
#define LUAKH_MODIFIER_2 \
                   ___, LCTL, LGUI, LALT, ESC, /*|*/ BSPC, LALT, RGUI, RCTL, TAB
#define LUAKH_MODIFIER_3 \
                ___, LSCTL, LSGUI, LSALT, ___, /*|*/ ___, RSCTL, RSGUI, RSCTL, CAPS
#define LUAKH_MODIFIER_4 \
                              RSGUI, LSFT, ENT, /*|*/ M_ENT, RGUI, RCTL

// LAYER: SYSTEM =========================================================={{{1
/*
[ ] KC_PSCREEN
[ ] KC_SCROLLLOCK
[ ] KC_PAUSE
[ ] KC_INSERT
[ ] KC_HOME
[ ] KC_PGUP
[ ] KC_DELETE
[ ] KC_END
[ ] KC_PGDOWN
[ ] KC_NUMLOCK
[ ] KC_APPLICATION
[ ] KC_POWER
[ ] KC_EXECUTE
[ ] KC_HELP
[ ] KC_MENU
[ ] KC_SELECT
[ ] KC_STOP
[ ] KC_AGAIN
[ ] KC_UNDO
[ ] KC_CUT
[ ] KC_COPY
[ ] KC_PASTE
[ ] KC_FIND
[ ] KC__MUTE
[ ] KC__VOLUP
[ ] KC__VOLDOWN
[ ] KC_SYSREQ
[ ] KC_CANCEL
[ ] KC_CLEAR
[ ] KC_PRIOR
[X] KC_SYSTEM_SLEEP
[ ] KC_AUDIO_MUTE
[ ] KC_AUDIO_VOL_UP
[ ] KC_AUDIO_VOL_DOWN
[X] KC_MEDIA_NEXT_TRACK
[X] KC_MEDIA_PREV_TRACK
[ ] KC_MEDIA_STOP
[X] KC_MEDIA_PLAY_PAUSE
[ ] KC_MEDIA_SELECT
[ ] KC_MEDIA_EJECT
[ ] KC_MAIL
[ ] KC_CALCULATOR
[ ] KC_MY_COMPUTER
[ ] KC_WWW_SEARCH
[ ] KC_WWW_HOME
[ ] KC_WWW_BACK
[ ] KC_WWW_FORWARD
[ ] KC_WWW_STOP
[ ] KC_WWW_REFRESH
[ ] KC_WWW_FAVORITES
[ ] KC_MEDIA_FAST_FORWARD
[ ] KC_MEDIA_REWIND
[ ] KC_BRIGHTNESS_UP
[ ] KC_BRIGHTNESS_DOWN
*/
#define KC_TG_PLAY KC_MEDIA_PLAY_PAUSE
#define KC_MU_N KC_MEDIA_NEXT_TRACK
#define KC_MU_P KC_MEDIA_PREV_TRACK
#define KC_SLEEP KC_SYSTEM_SLEEP
#define KC_MAC_REC DYN_REC_START1
#define KC_MAC_PLAY DYN_MACRO_PLAY1
#define KC_MAC_STOP DYN_REC_STOP

#define LUAKH_SYSTEM_1 \
            MAC_REC, ___, EXECUTE, ___, LTOG, /*|*/ A, ___, ___, ___, ___
#define LUAKH_SYSTEM_2 \
                MAC_STOP, ___, ___, ___, ___, /*|*/  ___, ___, ___, ___, ___
#define LUAKH_SYSTEM_3 \
                MAC_PLAY, ___, ___, ___, ___, /*|*/  ___, ___, ___, ___, ___
#define LUAKH_SYSTEM_4 \
                             ___, ___, ___, /*|*/ MU_P, TG_PLAY, MU_N

// GENERAL HELPING MACROS ================================================={{{1
#define LUAKH_GET_NAME(NAME, ROW) \
                                  \
  LUAKH ## _ ## NAME ## _ ## ROW

#define LUAKH_APP(FUN, ...) FUN(__VA_ARGS__)

