# Blink an LED and print "Hello, World!" in MicroPython

import machine
import utime

# Define the LED pin (onboard LED for Pico is on GPIO 25)
led = machine.Pin(25, machine.Pin.OUT)

# Blink LED and print Hello World
while True:
    led.value(1)  # Turn on the LED
    print("Hello, World!")
    utime.sleep(1)  # Wait for 1 second
    led.value(0)  # Turn off the LED
    utime.sleep(1)  # Wait for 1 second
