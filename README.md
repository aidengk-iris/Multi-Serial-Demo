# Multi-Serial-Demo

## Description
 A simple demo of using all three UARTs in the ESP32-S3 dev kit.
 
 The root directory contains a Platform IO ESP32 project that sends messages to 3 serial ports (using built-in hardware UARTs).
 The zip file in the root directory is a archive of a PSoC5LP project that reads a serial port and forwards the data to the computer.

## Running the project
To run the project, clone the repository and open it in platform io.  
Connect the [ESP32-S3 dev kit](https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/hw-reference/esp32s3/user-guide-devkitc-1.html) to the computer and upload the program.  

After flashing the ESP32 with the program, you can monitor the TX pins on the ESP32 to see messages from each of the UARTs.
