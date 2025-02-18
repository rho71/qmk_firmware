/*
Copyright 2019 Stephen Peery

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _BASE = 0,
    _GAME = 1,
    _FL,
    _CL
};

enum layer_keycodes {
  BASE = SAFE_RANGE,
  GAME,
  EMAIL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*  Row:        0           1           2           3        4           5        6        7           8           9           10          11          12          13          14          15          16          */
    [_BASE] = { {   KC_ESC,     KC_F1,      KC_F2,      KC_F3,   KC_F4,      KC_F5,   KC_F6,   KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_NO,      KC_PSCR,    KC_SLCK,    KC_PAUSE },
                {   KC_GRV,     KC_1,       KC_2,       KC_3,    KC_4,       KC_5,    KC_6,    KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSPC,    KC_INS,     KC_HOME,    KC_PGUP  },
                {   KC_TAB,     KC_Q,       KC_W,       KC_E,    KC_R,       KC_T,    KC_Y,    KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS,    KC_DEL,     KC_END,     KC_PGDN  },
                {   KC_CAPS,    KC_A,       KC_S,       KC_D,    KC_F,       KC_G,    KC_H,    KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    KC_NUHS,    KC_ENT,     KC_NO,      KC_NO,      KC_NO    },
                {   KC_LSFT,    KC_NUBS,    KC_Z,       KC_X,    KC_C,       KC_V,    KC_B,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_INT1,    KC_RSFT,    KC_NO,      KC_UP,      KC_NO    },
                {   KC_LCTL,    KC_LGUI,    KC_LALT,    KC_SPC,  KC_RALT,    MO(_FL), KC_APP,  KC_NO,      KC_RCTL,    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_LEFT,    KC_DOWN,    KC_RIGHT }
              },
    [_GAME] = { {   KC_ESC,     KC_F1,      KC_F2,      KC_F3,   KC_F4,      KC_F5,   KC_F6,   KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_NO,      KC_PSCR,    KC_SLCK,    KC_PAUSE },
                {   KC_GRV,     KC_1,       KC_2,       KC_3,    KC_4,       KC_5,    KC_6,    KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSPC,    KC_INS,     KC_HOME,    KC_PGUP  },
                {   KC_TAB,     KC_Q,       KC_W,       KC_E,    KC_R,       KC_T,    KC_Y,    KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS,    KC_DEL,     KC_END,     KC_PGDN  },
                {   KC_CAPS,    KC_A,       KC_S,       KC_D,    KC_F,       KC_G,    KC_H,    KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    KC_NUHS,    KC_ENT,     KC_NO,      KC_NO,      KC_NO    },
                {   KC_LSFT,    KC_NUBS,    KC_Z,       KC_X,    KC_C,       KC_V,    KC_B,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_INT1,    KC_RSFT,    KC_NO,      KC_UP,      KC_NO    },
                {   KC_LCTL,    KC_NO,    KC_LALT,    KC_SPC,  KC_RALT,    MO(_CL), KC_APP,  KC_NO,      KC_RCTL,    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_LEFT,    KC_DOWN,    KC_RIGHT }
              },
    [_FL]   = { {   RESET,      KC_MYCM,    KC_WHOM,    KC_CALC, KC_MSEL,    KC_MPRV, KC_MNXT, KC_MPLY,    KC_MSTP,    KC_MUTE,    KC_VOLD,    KC_VOLU,    KC_SLEP,    _______,    _______,    _______,    _______  },
                {   BASE,    _______,    _______,    _______, _______,    _______, _______, _______,    _______,    _______,    _______,    RGB_HUD,    RGB_HUI,    _______,    RGB_MOD,    RGB_RMOD,    RGB_TOG  },
                {   _______,    _______,    _______,    EMAIL, _______,    _______, _______, _______,    _______,    _______,    _______,    _______,    _______,    _______,   RGB_MODE_PLAIN,    RGB_SAI,   RGB_SAD  },
                {   _______,    _______,    _______,    _______, _______,    _______, _______, _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______  },
                {   _______,    _______,    _______,    _______, _______,    _______, _______, _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    RGB_VAI,    _______  },
                {   _______,    GAME,    _______,    _______, _______,    _______, _______, _______,    _______,    _______,    _______,    MO(_FL),    _______,    _______,    RGB_SPD,    RGB_VAD,    RGB_SPI  }
             },
    [_CL]   = { {   RESET,      KC_MYCM,    KC_WHOM,    KC_CALC, KC_MSEL,    KC_MPRV, KC_MNXT, KC_MPLY,    KC_MSTP,    KC_MUTE,    KC_VOLD,    KC_VOLU,    KC_SLEP,    _______,    _______,    _______,    _______  },
                {   BASE,    _______,    _______,    _______, _______,    _______, _______, _______,    _______,    _______,    _______,    RGB_HUD,    RGB_HUI,    _______,    RGB_MOD,    RGB_RMOD,    RGB_TOG  },
                {   _______,    _______,    _______,    EMAIL, _______,    _______, _______, _______,    _______,    _______,    _______,    _______,    _______,    _______,   RGB_MODE_PLAIN,    RGB_SAI,   RGB_SAD  },
                {   _______,    _______,    _______,    _______, _______,    _______, _______, _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______  },
                {   _______,    _______,    _______,    _______, _______,    _______, _______, _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    RGB_VAI,    _______  },
                {   _______,    GAME,    _______,    _______, _______,    _______, _______, _______,    _______,    _______,    _______,    MO(_CL),    _______,    _______,    RGB_SPD,    RGB_VAD,    RGB_SPI  }
             }
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case BASE:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_BASE);
        writePinLow(LED_SCROLL_LOCK_PIN);
      }
      return false;
      break;
    case GAME:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_GAME);
	writePinLow(LED_CAPS_LOCK_PIN);
      }
      return false;
      break;
    case EMAIL:
      if (record->event.pressed) {
           SEND_STRING("intershopper01" SS_RALT("q") "t-online.de");
      }
      return false;
      break;

  }
  return true;
}
