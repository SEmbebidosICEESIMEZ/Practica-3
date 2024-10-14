import time
import machine

# Set up the LED pin
led_pin = machine.Pin(25, machine.Pin.OUT)

# Blink the LED
while True:
    led_pin.value(1)  # Turn LED on
    time.sleep(0.5)   # Wait for 0.5 seconds
    led_pin.value(0)  # Turn LED off
    time.sleep(0.5)   # Wait for 0.5 seconds

# Print "Hello, World!"
print("Hello, World!")