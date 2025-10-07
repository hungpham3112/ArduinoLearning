#define DELAY_TIME_MS 200
uint8_t pin[] = {2,3, 5, 6, 8, 9, 11, 12};

void setup() {
  for (uint8_t i = 0; i < sizeof(pin); ++i) {
    pinMode(pin[i], OUTPUT);  
  }
}

void loop() {
  for (uint8_t i = 0; i < sizeof(pin); ++i) {
    digitalWrite(pin[i], HIGH);
    delay(DELAY_TIME_MS);
    digitalWrite(pin[i], LOW);
    delay(DELAY_TIME_MS);
  }
}
