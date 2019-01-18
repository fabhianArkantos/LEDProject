
#include "Led.h"

Led _green_led(3);

void setup() {

}

void loop() {

	_green_led.turnOn();
	delay(1000);
	_green_led.turnOff();
	delay(1000);

}
