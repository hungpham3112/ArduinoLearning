#include <Arduino.h>

#define DELAY_TIME 200

int analog_pin = A1;
int val;
float volt;

void setup() {
  Serial.begin(9600); // set baud rate 9600, not understand yet
  pinMode(analog_pin, INPUT);
}

void loop() {
  val = analogRead(analog_pin);
  volt = val * 5.0 / 1023.0; // 5 Volt -> 1023, x Volt -> val, find x
  Serial.println(volt);
  delay(DELAY_TIME);
}