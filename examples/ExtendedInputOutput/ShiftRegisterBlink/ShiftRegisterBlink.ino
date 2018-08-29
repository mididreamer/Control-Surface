/**
 * @brief   This example demonstrates the use of shift registers as if they were
 *          just normal IO pins.
 * 
 * Connections:  
 * 
 *   - 10: 74HC595 ST_CP
 *   - 12: 74HC595 DS
 *   - 13: 74HC595 SH_CP
 * 
 * Connect an LEDs (and series resistor) between the first output of the
 * shift register and ground. 
 * 
 * Remember to connect the enable pins the shift register to ground in order to 
 * enable it.  
 *  
 * This sketch will just blink the LED once a second.
 * 
 * Written by PieterP, 2018-08-29
 * https://github.com/tttapa/Control-Surface
 */

#include <Control_Surface.h> // Include the Control Surface library.

using namespace ExtIO;

const pin_t latchPin = 10;  // Pin connected to ST_CP of 74HC595
const pin_t dataPin  = 12;  // Pin connected to DS of 74HC595
const pin_t clockPin = 13;  // Pin connected to SH_CP of 74HC595

/** Instantiate a shift registers on the correct pins, most significant bit
 * first, and a total of 8 outputs. */
ShiftRegisterOut sreg = { dataPin, clockPin, latchPin, MSBFIRST, 8 };

const pin_t ledPin = sreg.pin(0); // first pin of the shift register

void setup() { /* Initialize everything. */
  sreg.begin();
  pinMode(ledPin, OUTPUT); // You don't even need this line, since
                           // shift registers are always outputs
}

void loop() { /* Check if a button is pressed, if so toggle the LED. */
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
}
