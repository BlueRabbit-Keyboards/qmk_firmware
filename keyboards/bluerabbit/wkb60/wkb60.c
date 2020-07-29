#include "spi_master.h"
#include "wkb60.h"

void keyboard_pre_init_kb(void) {
    spi_init();
}
