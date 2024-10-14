#include "pico/stdlib.h"
#include <stdio.h>

int main() {
    const uint LED_PIN = 25;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    stdio_init_all();

    while (true) {
        gpio_put(LED_PIN, 1);
        printf("Hello, World!\n");
        sleep_ms(1000);
        gpio_put(LED_PIN, 0);
        sleep_ms(1000);
    }

    return 0;
}
