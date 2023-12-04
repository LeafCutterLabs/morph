/* Copyright 2018 Yiancar
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

extern MidiDevice midi_device;

enum custom_keycodes {
    MIDI_CC20 = SAFE_RANGE,
	MIDI_CC21,
	MIDI_CC22,
	MIDI_CC23,
	MIDI_CC24,
	MIDI_CC25,
	MIDI_CC26,
	MIDI_CC85,
	MIDI_CC86,
	MIDI_CC88,
	MIDI_CC89,
	MIDI_CC90,
	MIDI_CC102,  
	MIDI_CC103,
	MIDI_CC104,
	MIDI_CC105,
	MIDI_CC106,
	MIDI_CC107,
	MIDI_CC108,
	MIDI_CC109,
	MIDI_CC110,
	MIDI_CC111,
	MIDI_CC112,
	MIDI_CC117,
	MIDI_CC118,
	MIDI_CC119,
};

#define MIDI_CC_OFF 0
#define MIDI_CC_ON  127

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MIDI_CC20:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 20, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 20, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC21:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 21, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 21, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC22:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 22, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 22, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC23:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 23, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 23, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC24:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 24, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 24, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC25:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 25, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 25, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC26:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 26, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 26, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC85:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 85, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 85, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC86:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 86, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 86, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC88:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 88, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 88, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC89:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 89, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 89, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC90:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 90, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 90, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC102:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 102, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 102, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC103:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 103, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 103, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC104:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 104, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 104, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC105:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 105, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 105, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC106:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 106, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 106, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC107:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 107, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 107, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC108:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 108, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 108, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC109:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 109, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 109, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC110:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 110, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 110, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC111:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 111, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 111, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC112:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 112, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 112, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC117:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 117, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 117, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC118:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 118, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 118, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC119:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 119, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 119, MIDI_CC_OFF);
            }
            return true;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_6x10(
  MI_C2,	MI_Db2,	MI_Eb2,	MI_F2,	MI_G2,	MI_A2,	MI_B2,	MI_Cs2,	MI_Ds2,	MI_E2,
  MI_Gb2,	MI_Ab2,	MI_Bb2, MI_C2,  MI_D2, 	MI_E2, 	MI_Fs2, MI_Gs2, MI_As2, KC_NO,
  MI_C1,	MI_Db1,	MI_Eb1, MI_F1, 	MI_G1,	MI_A1,	MI_B1,	MI_Cs1,	MI_Ds1,	MI_E1,
  MI_Gb1,	MI_Ab1,	MI_Bb1, MI_C1,  MI_D1, 	MI_E1, 	MI_Fs1, MI_Gs1, MI_As1, KC_NO,
  MI_C,		MI_Db,	MI_Eb, 	MI_F, 	MI_G,	MI_A,	MI_B,	MI_Cs,	MI_Ds,	MI_E,
  MI_Gb,	MI_Ab,	MI_Bb,  MI_C,  	MI_D,  	MI_E,  	MI_Fs,  MI_Gs,  MI_As,  KC_NO
  ),
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
/*
void housekeeping_task_user(void) { 
    rgblight_setrgb_at(RGB_ORANGE, 0);
    rgblight_setrgb_at(RGB_WHITE, 18);
	rgblight_setrgb_at(RGB_PURPLE, 19);
    rgblight_setrgb_at(RGB_PINK, 37);
	rgblight_setrgb_at(RGB_ORANGE, 38);
    rgblight_setrgb_at(RGB_WHITE, 56);
	
}
*/
/*#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [1] = { ENCODER_CCW_CW(KC_2, KC_3) },
	[2] = { ENCODER_CCW_CW(KC_4, KC_5) },
    [3] = { ENCODER_CCW_CW(MI_A3, MI_A4) }
};
#endif
*/

//midi_send_cc(&midi_device, midi_config.channel, 80, 30);