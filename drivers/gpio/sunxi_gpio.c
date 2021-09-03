#include <common.h>
#include <asm/arch/gpio.h>
#include <asm/gpio.h>
#include <asm/io.h>


int gpio_set_value(unsigned gpio, int value) {
	return 0;
}

int gpio_get_value(unsigned gpio) {
	return 0;
}

int gpio_request(unsigned gpio, const char* label) {
	return 0;
}

int gpio_free(unsigned gpio) {
	return 0;
}

int gpio_direction_input(unsigned gpio) {
	return 0;
}

int gpio_direction_output(unsigned gpio, int value) {
	return 0;
}
