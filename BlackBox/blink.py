import machine
import time

# Initialize the LED pin (GP25)
led = machine.Pin(25, machine.Pin.OUT)

while True:
    # Turn the LED on
    led.value(1)
    time.sleep(0.5)
    
    # Turn the LED off
    led.value(0)
    time.sleep(0.5)

    print("Hello, World!")
