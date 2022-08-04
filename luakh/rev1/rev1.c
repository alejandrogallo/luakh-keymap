#include "luakh.h"
#include <quantum.h>

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_GUI_SGUI] = ACTION_TAP_DANCE_DOUBLE(KC_RGUI, KC_RSFT),
  [TD_ENT_TAB] = ACTION_TAP_DANCE_DOUBLE(KC_ENT, KC_TAB),
  [TD_SPC_ALT] = ACTION_TAP_DANCE_DOUBLE(KC_SPC, KC_LALT),
};


bool process_record_kb(uint16_t keycode, keyrecord_t *record) {


  return true;

}


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LGUI_T(KC_Z):
    case RGUI_T(KC_SLSH):
      return TAPPING_TERM + 60;
    case LT(SYMBOLS, KC_SPC):
      return TAPPING_TERM + 10 ;
    default:
      return TAPPING_TERM;
  }
}

// COMBOS ================================================================={{{1
const uint16_t PROGMEM
    enter_combo[]    = {KC_K, KC_J, COMBO_END}
  , enter_l_combo[]  = {KC_D, KC_F, COMBO_END}
  , esc_combo[]      = {KC_U, KC_I, COMBO_END}
  , esc_l_combo[]    = {KC_E, KC_R, COMBO_END}
  , tab_combo[]      = {KC_M, KC_COMM, COMBO_END}
  , tab_l_combo[]    = {KC_C, KC_V, COMBO_END}
  , bspc_combo[]     = {KC_H, KC_J, COMBO_END}
  , bspc_l_combo[]   = {KC_F, KC_G, COMBO_END}

  , gui_r_combo[]  = {KC_I, KC_O, COMBO_END}
  , gui_l_combo[]  = {KC_W, KC_E, COMBO_END}
  , gui_ctl_r_combo[]  = {KC_O, KC_K, COMBO_END}
  , gui_ctl_l_combo[]  = {KC_W, KC_D, COMBO_END}
  , gui_ctl_sft_r_combo[]  = {KC_I, KC_L, COMBO_END}
  , gui_ctl_sft_l_combo[]  = {KC_E, KC_S, COMBO_END}
  , alt_ctl_r_combo[]      = {KC_COMM, KC_L, COMBO_END}
  , alt_ctl_l_combo[]      = {KC_S, KC_C, COMBO_END}
  , alt_ctl_sft_r_combo[]  = {KC_K, KC_DOT, COMBO_END}
  , alt_ctl_sft_l_combo[]  = {KC_X, KC_D, COMBO_END}
  , alt_gui_r_combo[]      = {KC_M, KC_K, COMBO_END}
  , alt_gui_l_combo[]      = {KC_D, KC_V, COMBO_END}
  , alt_gui_sft_r_combo[]  = {KC_J, KC_COMM, COMBO_END}
  , alt_gui_sft_l_combo[]  = {KC_C, KC_F, COMBO_END}
  , ctl_r_combo[]  = {KC_K, KC_L, COMBO_END}
  , ctl_l_combo[]  = {KC_S, KC_D, COMBO_END}
  , alt_r_combo[]  = {KC_COMM, KC_DOT, COMBO_END}
  , alt_l_combo[]  = {KC_X, KC_C, COMBO_END}

  // shift related combos and modifiers
  , sft_r_combo[]      = {KC_L, KC_SCLN, COMBO_END}
  , sft_l_combo[]      = {KC_A, KC_S, COMBO_END}
  , sft_gui_r_combo[]  = {KC_O, KC_SCLN, COMBO_END}
  , sft_gui_l_combo[]  = {KC_A, KC_W, COMBO_END}
  , sft_alt_r_combo[]  = {KC_DOT, KC_SCLN, COMBO_END}
  , sft_alt_l_combo[]  = {KC_A, KC_X, COMBO_END}
  , sft_ctl_r_combo[]  = {KC_K, KC_L, KC_SCLN, COMBO_END}
  , sft_ctl_l_combo[]  = {KC_A, KC_S, KC_D, COMBO_END}

  // combos in the numeric layer
  , num_enter_combo[]  = {KC_4, KC_5, COMBO_END}
  , num_tab_combo[]  = {KC_1, KC_2, COMBO_END}
  ;

enum MyCombos {
    ENTER_COMBO = 0
  , ENTER_L_COMBO
  , ESC_COMBO
  , ESC_L_COMBO
  , TAB_COMBO
  , TAB_L_COMBO
  , BSPC_COMBO
  , BSPC_L_COMBO

  , GUI_R_COMBO
  , GUI_L_COMBO
  , GUI_CTL_R_COMBO
  , GUI_CTL_L_COMBO
  , GUI_CTL_SFT_R_COMBO
  , GUI_CTL_SFT_L_COMBO
  , ALT_CTL_R_COMBO
  , ALT_CTL_L_COMBO
  , ALT_CTL_SFT_R_COMBO
  , ALT_CTL_SFT_L_COMBO
  , ALT_GUI_R_COMBO
  , ALT_GUI_L_COMBO
  , ALT_GUI_SFT_R_COMBO
  , ALT_GUI_SFT_L_COMBO
  , CTL_R_COMBO
  , CTL_L_COMBO
  , ALT_R_COMBO
  , ALT_L_COMBO

  // shift related combos and modifiers
  , SFT_R_COMBO
  , SFT_L_COMBO
  , SFT_GUI_R_COMBO
  , SFT_GUI_L_COMBO
  , SFT_ALT_R_COMBO
  , SFT_ALT_L_COMBO
  , SFT_CTL_R_COMBO
  , SFT_CTL_L_COMBO

  , NUM_ENTER_COMBO
  , NUM_TAB_COMBO

  , COMBO_LENGTH
};

const uint16_t COMBO_LEN = COMBO_LENGTH;


const combo_t key_combos[]
  = { [ENTER_COMBO] = COMBO(enter_combo,   KC_ENT)
    , [ENTER_L_COMBO] = COMBO(enter_l_combo, KC_ENT)
    , [ESC_COMBO] = COMBO(esc_combo,     KC_ESC)
    , [ESC_L_COMBO] = COMBO(esc_l_combo,   KC_ESC)
    , [TAB_COMBO] = COMBO(tab_combo,     KC_TAB)
    , [TAB_L_COMBO] = COMBO(tab_l_combo,   KC_TAB)
    , [BSPC_COMBO] = COMBO(bspc_combo,    KC_BSPC)
    , [BSPC_L_COMBO] = COMBO(bspc_l_combo,  KC_BSPC)
    /*, [BSPC_L_COMBO] = COMBO(bspc_l_combo,  MO(MOVEMENT))*/

    // modifiers ==================================
    //
    // single modifiers
    , [CTL_L_COMBO] = COMBO(ctl_l_combo, KC_LCTL)
    , [CTL_R_COMBO] = COMBO(ctl_r_combo, KC_RCTL)
    , [ALT_L_COMBO] = COMBO(alt_l_combo, KC_LALT)
    , [ALT_R_COMBO] = COMBO(alt_r_combo, KC_LALT)
    , [GUI_L_COMBO] = COMBO(gui_l_combo, KC_LGUI)
    , [GUI_R_COMBO] = COMBO(gui_r_combo, KC_RGUI)
    , [SFT_R_COMBO] = COMBO(sft_r_combo, KC_RSFT)
    , [SFT_L_COMBO] = COMBO(sft_l_combo, KC_LSFT)

    // shift plus one modifie
    , [SFT_GUI_R_COMBO] = COMBO_ACTION(sft_gui_r_combo)
    , [SFT_GUI_L_COMBO] = COMBO_ACTION(sft_gui_l_combo)
    , [SFT_ALT_R_COMBO] = COMBO_ACTION(sft_alt_r_combo)
    , [SFT_ALT_L_COMBO] = COMBO_ACTION(sft_alt_l_combo)
    , [SFT_CTL_R_COMBO] = COMBO_ACTION(sft_ctl_r_combo)
    , [SFT_CTL_L_COMBO] = COMBO_ACTION(sft_ctl_l_combo)

    // shift plus two modifiers
    , [GUI_CTL_R_COMBO]     = COMBO_ACTION(gui_ctl_r_combo)
    , [GUI_CTL_L_COMBO]     = COMBO_ACTION(gui_ctl_l_combo)
    , [GUI_CTL_SFT_R_COMBO] = COMBO_ACTION(gui_ctl_sft_r_combo)
    , [GUI_CTL_SFT_L_COMBO] = COMBO_ACTION(gui_ctl_sft_l_combo)
    , [ALT_CTL_R_COMBO]     = COMBO_ACTION(alt_ctl_r_combo)
    , [ALT_CTL_L_COMBO]     = COMBO_ACTION(alt_ctl_l_combo)
    , [ALT_CTL_SFT_R_COMBO] = COMBO_ACTION(alt_ctl_sft_r_combo)
    , [ALT_CTL_SFT_L_COMBO] = COMBO_ACTION(alt_ctl_sft_l_combo)
    , [ALT_GUI_R_COMBO]     = COMBO_ACTION(alt_gui_r_combo)
    , [ALT_GUI_L_COMBO]     = COMBO_ACTION(alt_gui_l_combo)
    , [ALT_GUI_SFT_R_COMBO] = COMBO_ACTION(alt_gui_sft_r_combo)
    , [ALT_GUI_SFT_L_COMBO] = COMBO_ACTION(alt_gui_sft_l_combo)

    // numpad
    , [NUM_TAB_COMBO] = COMBO(num_tab_combo, KC_TAB)
    , [NUM_ENTER_COMBO] = COMBO(num_enter_combo, KC_ENT)
    };

#define SFT_MODIFIER_COMBO(__prefix, __modl, __modr) \
  case __prefix ## _L_COMBO: \
    if (pressed) { \
      register_code16(KC_LSFT); \
      register_code16(__modl); \
    } \
    else { \
      unregister_code16(KC_LSFT); \
      unregister_code16(__modl); \
    } \
    return; \
  case __prefix ## _R_COMBO: \
    if (pressed) { \
      register_code16(KC_RSFT); \
      register_code16(__modr); \
    } \
    else { \
      unregister_code16(KC_RSFT); \
      unregister_code16(__modr); \
    } \
    return; \


#define CASE_MODIFIER_COMBO(__prefix, __modl1, __modl2, __modr1, __modr2) \
  case __prefix ## _L_COMBO: \
    if (pressed) { \
      register_code16(__modl1); \
      register_code16(__modl2); \
    } \
    else { \
      unregister_code16(__modl1); \
      unregister_code16(__modl2); \
    } \
    return; \
  case __prefix ## _R_COMBO: \
    if (pressed) { \
      register_code16(__modr1); \
      register_code16(__modr2); \
    } \
    else { \
      unregister_code16(__modr1); \
      unregister_code16(__modr2); \
    } \
    return; \
  case __prefix ## _SFT_R_COMBO: \
    if (pressed) { \
      register_code16(__modr1); \
      register_code16(__modr2); \
      register_code16(KC_RSFT); \
    } \
    else  { \
      unregister_code16(__modr1); \
      unregister_code16(__modr2); \
      unregister_code16(KC_RSFT); \
    } \
    return; \
  case __prefix ## _SFT_L_COMBO: \
    if (pressed) { \
      register_code16(__modl1); \
      register_code16(__modl2); \
      register_code16(KC_LSFT); \
    } \
    else  { \
      unregister_code16(__modl1); \
      unregister_code16(__modl2); \
      unregister_code16(KC_LSFT); \
    } \
    return;

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {

    // two modifiers + (two modifiers | shift)
    CASE_MODIFIER_COMBO(GUI_CTL, KC_LCTL, KC_LGUI, KC_RCTL, KC_RGUI)
    CASE_MODIFIER_COMBO(ALT_CTL, KC_LCTL, KC_LALT, KC_RCTL, KC_LALT)
    CASE_MODIFIER_COMBO(ALT_GUI, KC_LGUI, KC_LALT, KC_RGUI, KC_LALT)

    // one modifier + (one modifier | shift)
    SFT_MODIFIER_COMBO(SFT_GUI, KC_LGUI, KC_RGUI)
    SFT_MODIFIER_COMBO(SFT_ALT, KC_LALT, KC_RALT)
    SFT_MODIFIER_COMBO(SFT_CTL, KC_LCTL, KC_RCTL)

  }
}

#undef SFT_MODIFIER_COMBO
#undef CASE_MODIFIER_COMBO
