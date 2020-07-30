#include "spi_master.h"
#include "print.h"
#include <string.h>

#include "wkb60.h"

#define BLE_SS_PIN A4

union Keycode_wireless {
    uint16_t kc;
    uint8_t bytes[2]; 
} kcw;


void transmit_to_ble(uint8_t *keycode){
    spi_start(BLE_SS_PIN, false, 0, 12);
    spi_transmit(kcw.bytes,sizeof(kcw.bytes));
    spi_stop();
}

void keyboard_pre_init_kb(void) {
    spi_init();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
	// put your per-action keyboard code here
	// runs for every action, just before processing by the firmware
    kcw.kc = keycode;

    if (record->event.pressed){
        transmit_to_ble(kcw.bytes);
    } else {
        memset(kcw.bytes, 0, sizeof(kcw.bytes));
        transmit_to_ble(kcw.bytes);
    }

	return process_record_user(keycode, record);
}

void keyboard_post_init_user(void) {
  debug_enable=true;
}