#include "wkb60.h"
#include "spi_master.h"

void keyboard_pre_init_kb(void) { keyboard_pre_init_user(); }

void keyboard_post_init_kb(void) {
	spi_init(); 
	spi_start(A4, FALSE, 0, 16);
	keyboard_post_init_user();
}