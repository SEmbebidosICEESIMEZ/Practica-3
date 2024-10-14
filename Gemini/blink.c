#include <stdio.h>
#include "pico/stdlib.h"

int main() {
    // Initialize the GPIO pins
    stdio_init_all();
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    // Blink the LED
    while (true) {
        gpio_put(LED_PIN, 1);  // Turn LED on
        sleep_ms(500);         // Wait for 500 milliseconds
        gpio_put(LED_PIN, 0);  // Turn LED off
        sleep_ms(500);         // Wait for 500 milliseconds
    }

    // Print "Hello, World!"
    printf("Hello, World!\n");

    return 0;
}