#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_TRANSPARENT,   KC_TRANSPARENT, KC_J, KC_L, KC_U, KC_Y, KC_BSPACE, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_A, MT(MOD_LCTL, KC_R),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_T),KC_G, KC_TRANSPARENT,   KC_TRANSPARENT, KC_M, MT(MOD_RGUI, KC_N),MT(MOD_RALT, KC_E),MT(MOD_RCTL, KC_I),KC_O, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_TRANSPARENT, KC_TRANSPARENT, KC_K, KC_H, KC_COMMA, KC_DOT,   KC_SLASH, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_ESCAPE,LT(3, KC_SPACE), LT(1, KC_NO),    OSM(MOD_LSFT),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F2,   KC_AT,    KC_DQUO,  KC_HASH,  KC_PERC,  KC_TRANSPARENT,   KC_TRANSPARENT, KC_DLR,   KC_AMPR,  KC_QUOTE, KC_GRAVE, KC_BSPACE, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TAB,   KC_EQUAL, KC_LABK,  KC_RABK,  KC_COLN,  KC_TRANSPARENT,   KC_TRANSPARENT, KC_LCBR,  KC_LPRN,  KC_RPRN,  KC_RCBR,  KC_ENTER, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_BSLASH,KC_CIRC,  KC_PIPE,  KC_TILD,  KC_SCOLON, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRACKET,    KC_RBRACKET,    KC_EXLM,  KC_QUES,  LT(2, KC_NO),    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LGUI,  LT(2, KC_NO), TO(3),    KC_NO,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,    KC_NO,    KC_MS_UP, KC_NO,    KC_NO,    KC_TRANSPARENT,   KC_TRANSPARENT, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TAB,   KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT,    KC_NO,    KC_TRANSPARENT,   KC_TRANSPARENT, KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_ENTER, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,    KC_NO,    KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_BTN2, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1, KC_MS_ACCEL1,   KC_MS_ACCEL0,   KC_NO,    KC_NO,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LGUI,  TO(0), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,    KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_UNDS,  KC_TRANSPARENT,   KC_TRANSPARENT, KC_ASTR,  KC_7, KC_8, KC_9, KC_BSPACE, KC_TRANSPARENT,
    KC_TRANSPARENT, RGB_VAD,  KC_NO,    KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MINUS, KC_TRANSPARENT,   KC_TRANSPARENT, KC_PLUS,  KC_4, KC_5, KC_6, KC_ENTER, KC_TRANSPARENT,
    KC_TRANSPARENT, RESET,    TO(4),    KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,    KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE, KC_1, KC_2, KC_3, TO(2),    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LGUI,  TO(0), KC_TRANSPARENT, KC_0, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_ESCAPE,KC_Q, KC_W, KC_E, KC_R, KC_F6,   KC_TRANSPARENT, KC_F3,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LCTRL, KC_A, KC_S, KC_D, KC_F, KC_F7,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TAB, KC_Z, KC_X, KC_C, KC_V, KC_F8, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F3, KC_LSHIFT,KC_SPACE,   TO(0), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F2, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_F1, KC_F3, KC_F4, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
  if (rawhid_state.rgb_control) {
return false;
  }
  if (record->event.pressed) {
rgblight_mode(1);
  }
  return false;
  }
  return true;
}



