#include <stdio.h>
#include "pico/stdlib.h"

int main() {
    printf("Hello, World!\n");
    // Initialize the LED pin (GP25)
    gpio_init(25);
    gpio_set_dir(25, GPIO_OUT);

    while (true) {
        // Turn the LED on
        gpio_put(25, 1);
        sleep_ms(500);
        
        // Turn the LED off
        gpio_put(25, 0);
        sleep_ms(500);
    }

    return 0;
}