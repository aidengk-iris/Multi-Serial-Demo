#include <Arduino.h>

// define baud rate for UART. The three UART modules can use different baud rates. 
#define BAUD_RATE 9600

// define the pins to use for each UART module
#define RX0 47
#define TX0 48
#define RX1 13
#define TX1 14
#define RX2 19
#define TX2 20 

// a helper function to print messages via each UART module
void PrintToSerial(HardwareSerial& serial_port, int port_number)
{
  serial_port.print("Message from UART " + String(port_number));
  serial_port.print("\r\n");
}

void setup() {
  // begin UART communication. All UARTs are configured as 8 data bits, no parity bit, and 1 stop bit. 
  Serial.begin( BAUD_RATE, SERIAL_8N1, RX0, TX0 );
  Serial1.begin( BAUD_RATE, SERIAL_8N1, RX1, TX1 );
  Serial2.begin( BAUD_RATE, SERIAL_8N1, RX2, TX2 );


}

void loop() {
  // Print to each UART at 1Hz
  PrintToSerial( Serial, 0 );
  PrintToSerial( Serial1, 1);
  PrintToSerial( Serial2, 2 );
  delay(1000);  // wait for 1 second
}