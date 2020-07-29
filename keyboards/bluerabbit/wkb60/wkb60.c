#include "spi_master.h"
#include "print.h"

#include "wkb60.h"

#define SS_PIN A4

union Keycode_wireless {
    uint16_t kc;
    uint8_t bytes[2]; 
} kcw;

void keyboard_pre_init_kb(void) {
    spi_init();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
	// put your per-action keyboard code here
	// runs for every action, just before processing by the firmware
    kcw.kc = keycode;
   
    spi_start(SS_PIN, false, 0, 12);
    spi_transmit(kcw.bytes,sizeof(kcw.bytes));
    spi_stop();

	return process_record_user(keycode, record);
}

void keyboard_post_init_user(void) {
  debug_enable=true;
}