// Blink an LED and print "Hello, World!" in C (Pico SDK)

#include "pico/stdlib.h"

int main() {
    const uint LED_PIN = 25;  // Define LED pin (GPIO 25 for onboard LED)
    
    // Initialize the LED pin as output
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    // Initialize the standard I/O (for printing to console)
    stdio_init_all();

    while (true) {
        // Turn on the LED
        gpio_put(LED_PIN, 1);
        printf("Hello, World!\n");
        sleep_ms(1000);  // Wait for 1 second

        // Turn off the LED
        gpio_put(LED_PIN, 0);
        sleep_ms(1000);  // Wait for 1 second
    }
}
