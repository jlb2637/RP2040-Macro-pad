// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
		DCMUTE = SAFE_RANGE, //discord mute
		DCDEFN, //discord deafen
		DCJVC,  //discord join pre-selected voice channel, (currently games in chonk zone)
		DCDC,   //discord disconnect from voice channel,
		SPTPLY, //spotify play/pause
		SPTYNX, //spotify next song
		SPTYPV, //spotify next song
		GITHUB, //opens my github page in chrome
		CTLPNL, //open control panel
		PCRNBW, //set PC RGB lights to standard pastel rainbow
		PCRGBO, //turn off PC RGB lights
		FLOPEN, //open a new fl studio project with my standard template
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌────────┬────────┬────────┐
     * │ DCMUTE │ DCDEFN │ DCJVC  │
     * ├────────┼────────┼────────┤
     * │ CTLPNL │ GITHUB │ DCDC   │
     * ├────────┼────────┼────────┤
     * │ PCRNBW │ PCRGBO │ FLOPEN │
     * ├────────┼────────┼────────┤
     * │ SPTYPV │ SPTPLY │ SPTYNX │
     * └────────┴────────┴────────┘
     */
    [0] = LAYOUT(
        DCMUTE,   DCDEFN,  DCJVC,
        PCRNBW,   PCRGBO,  DCDC,
        CTLPNL,   GITHUB,  FLOPEN,
        SPTYPV,   SPTPLY,  SPTYNX
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
	switch (keycode) {
		case DCMUTE: //discord mute button! works even when discord is not focused
			//dcmute macro events
			if (record ->event.pressed) {
			//events on press of key
				//SEND_STRING(SS_LCTL(SS_LSFT("k")));
				tap_code(KC_F13);
			} else {
				//events on release of key
				
			}
		break;
		
		case DCDEFN:
			if (record ->event.pressed) {
				tap_code(KC_F14);
			} else {
				
			}
		break;
		
		case DCJVC:
			if (record ->event.pressed) {
				tap_code(KC_F15);
			} else {
				
			}
		break;
		
		case DCDC:
			if (record ->event.pressed) {
				tap_code(KC_F16);
			} else {
				
			}
		break;
		
		case SPTPLY:
			if (record ->event.pressed) {
			//events on press of key
				//SEND_STRING(SS_LCTL(SS_LSFT("k")));
				tap_code(KC_MEDIA_PLAY_PAUSE);
			} else {
				//events on release of key
				
			}
		break;
		
		case SPTYPV:
			if (record ->event.pressed) {
			//events on press of key
				tap_code(KC_MEDIA_PREV_TRACK);
			} else {
				//events on release of key
				
			}
		break;
		
		case SPTYNX:
			if (record ->event.pressed) {
			//events on press of key
				tap_code(KC_MEDIA_NEXT_TRACK);
			} else {
				//events on release of key
				
			}
		break;
		
		case GITHUB:
			if (record ->event.pressed) {
			    //events on press of key
			
			} else {
				//events on release of key
				
			}
		break;
		
		case CTLPNL:
			if (record ->event.pressed) {
			//events on press of key
				SEND_STRING(SS_TAP(X_LGUI) "Control Panel" SS_DELAY(500) SS_TAP(X_ENT));
			} else {
				//events on release of key
				
			}
		break;
		
		case PCRNBW:
			if (record ->event.pressed) {
			    //events on press of key
			
			} else {
				//events on release of key
				
			}
		break;
		
		case PCRGBO:
			if (record ->event.pressed) {
			    //events on press of key
			
			} else {
				//events on release of key
				
			}
		break;
		
		case FLOPEN:
			if (record ->event.pressed) {
			    //events on press of key
				SEND_STRING(SS_TAP(X_LGUI) "fl studio" SS_DELAY(500) SS_TAP(X_ENT));
			} else {
				//events on release of key
				
			}
		break;
	}
	return true;
};