#include "Adafruit_VL53L0X.h"

Adafruit_VL53L0X lox = Adafruit_VL53L0X();

void setup() {
  // put your setup code here, to run once:
  lox.begin(0x32);

}

void loop() {
  // put your main code here, to run repeatedly:

}
