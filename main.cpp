/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#define INCLUDES_INCLUDED
#include "mbed.h"
#include <string>
#include "text2morse.h"

// Blinking rate in milliseconds

DigitalOut led(LED1);

void init() {
    led = 0;
}
void exit() {

}

int main() {
  init();
  while (true) {
    stringToMorse(&led, "AHOJ");
  }
  exit();
}
