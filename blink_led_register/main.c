#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>

#define F_CPU 16000000UL // 16MHz for delay

int main() {

  DDRB |= (1 << PB5);
  while (1) {
    PORTB ^= (1 << PB5);
    _delay_ms(2000);
  }
  return 0;
}
