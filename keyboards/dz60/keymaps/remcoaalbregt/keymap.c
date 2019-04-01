#include QMK_KEYBOARD_H

#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Qwerty
   * ,-----------------------------------------------------------------------------------------.
   * | ` ~ |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
   * |-----------------------------------------------------------------------------------------+
   * | Caps    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | RSh |  U  | DEL |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl |  Cmd  |  Alt  |              Space                | RAlt | FN  |  L  |  D  |  R  |
   * `-----------------------------------------------------------------------------------------'
   */

  LAYOUT_directional(
      KC_GESC,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,KC_NO,KC_BSPC,
      KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_LBRC,KC_RBRC,KC_BSLS,
      KC_CAPS,KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCLN,KC_QUOT,KC_ENT,
      KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,RSFT_T(KC_SLSH),RSFT_T(KC_SLSH),KC_UP,MO(2),
      KC_LCTL,KC_LALT,KC_LGUI,LT(1,KC_SPC),LT(1,KC_SPC),LT(1,KC_SPC),MO(2),KC_LCTL,KC_LEFT,KC_DOWN,KC_RGHT
      ),

  /* FN Layer
   * ,-----------------------------------------------------------------------------------------.
   * | Esc |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |   RESET   |
   * |-----------------------------------------------------------------------------------------+
   * |        | HYP Q| HYP W| HYP E| HYP R| HYP T| HYP Y| HYP U| HYP I| HYP O| HYP P|    |    |    |
   * |-----------------------------------------------------------------------------------------+
   * |         | HYP A| HYP S| HYP D| HYP F|     |     |     |     |     |     |     |             |
   * |-----------------------------------------------------------------------------------------+
   * |           |     |     |     |     |     |     |     |     |     |     |     |     |     |
   * |-----------------------------------------------------------------------------------------+
   * |      |       |       |                                   |     |      |     |     |     |
   * `-----------------------------------------------------------------------------------------'
   */

  LAYOUT_directional(
      KC_GRV,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_TRNS,RESET,
      KC_NO,HYPR(KC_Q),HYPR(KC_W),HYPR(KC_E),HYPR(KC_R),HYPR(KC_T),HYPR(KC_Y),HYPR(KC_U),HYPR(KC_I),HYPR(KC_O),HYPR(KC_P),HYPR(KC_LBRC),HYPR(KC_RBRC),KC_NO,
      KC_NO,HYPR(KC_A),HYPR(KC_NO),HYPR(KC_NO),HYPR(KC_NO),HYPR(KC_NO),HYPR(KC_NO),HYPR(KC_NO),HYPR(KC_NO),HYPR(KC_L),HYPR(KC_SCLN),HYPR(KC_QUOT),KC_NO,
      KC_NO,HYPR(KC_Z),HYPR(KC_NO),HYPR(KC_NO),HYPR(KC_NO),HYPR(KC_NO),HYPR(KC_NO),HYPR(KC_M),HYPR(KC_COMM),HYPR(KC_DOT),KC_QUES,KC_QUES,KC_PGUP,KC_NO,
      KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_HOME,KC_PGDN,KC_END
      ),

/* ALT FN Layerq
   * ,-----------------------------------------------------------------------------------------.
   * |   |    |    |    |    |    |    | Prev |  Play |  Next | Mute | Vol- | Vol+ |   RESET   |
   * |-----------------------------------------------------------------------------------------+
   * |        |RBB T|RGB M| Hue+| Hue-| Sat+| Sat-| Val+| Val-|     |     |      |      |      |
   * |-----------------------------------------------------------------------------------------+
   * |         | BL T| BL M| BL+ | BL- |     |     |     |     |     |     |     |             |
   * |-----------------------------------------------------------------------------------------+
   * |           |     |     |     |     |     |     |     |     |     |     |     |     |     |
   * |-----------------------------------------------------------------------------------------+
   * |      |       |       |                                   |     |      |     |     |     |
   * `-----------------------------------------------------------------------------------------'
   */

  LAYOUT_directional(
      KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_MPRV,KC_MPLY,KC_MNXT,KC_MUTE,KC_VOLD,KC_VOLU,KC_TRNS,RESET,
      KC_NO,RGB_TOG,RGB_MOD,RGB_HUI,RGB_HUD,RGB_SAI,RGB_SAD,RGB_VAI,RGB_VAD,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
      KC_NO,BL_TOGG,BL_STEP,BL_INC,BL_DEC,BL_BRTG,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
      KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_QUES,KC_QUES,KC_NO,KC_TRNS,
      KC_NO,KC_NO,MAGIC_UNSWAP_ALT_GUI,KC_NO,KC_NO,KC_NO,KC_TRNS,KC_NO,KC_NO,KC_NO,KC_NO
      ),      
};
