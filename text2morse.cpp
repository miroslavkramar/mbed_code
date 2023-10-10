#ifndef INCLUDES_INCLUDED
#define INCLUDES_INCLUDED
#include "mbed.h"
#include <string>
#include "text2morse.h"
#endif

#define BLINKING_RATE_DOT 250ms
#define BLINKING_RATE_DASH 1000ms
#define BLINKING_RATE_OFF 1000ms

void dot(DigitalOut * led) {
  *led = 0;
  ThisThread::sleep_for(BLINKING_RATE_DOT);
  *led = 1;
  ThisThread::sleep_for(BLINKING_RATE_OFF);
}

void dash(DigitalOut * led) {
  *led = 0;
  ThisThread::sleep_for(BLINKING_RATE_DASH);
  *led = 1;
  ThisThread::sleep_for(BLINKING_RATE_OFF);
}

void alphabetToMorse(DigitalOut * led, char *c) {
  switch (*c) {
  case 'A':
    dot(led);
    dash(led);
    break;
  case 'B':
    dash(led);
    dot(led);
    dot(led);
    dot(led);
    break;
  case 'C':
    dash(led);
    dot(led);
    dash(led);
    dot(led);
    break;
  case 'D':
    dash(led);
    dot(led);
    dot(led);
    break;
  case 'E':
    dot(led);
    break;
  case 'F':
    dot(led);
    dot(led);
    dash(led);
    dot(led);
    break;
  case 'G':
    dash(led);
    dash(led);
    dot(led);
    break;
  case 'H':
    dot(led);
    dot(led);
    dot(led);
    dot(led);
    break;
  case 'I':
    dot(led);
    dot(led);
    break;
  case 'J':
    dot(led);
    dash(led);
    dash(led);
    dash(led);
    break;
  case 'K':
    dash(led);
    dot(led);
    dash(led);
    break;
  case 'L':
    dot(led);
    dash(led);
    dot(led);
    dot(led);
    break;
  case 'M':
    dash(led);
    dash(led);
    break;
  case 'N':
    dash(led);
    dot(led);
    break;
  case 'O':
    dash(led);
    dash(led);
    dash(led);
    break;
  case 'P':
    dot(led);
    dash(led);
    dash(led);
    dot(led);
    break;
  case 'Q':
    dash(led);
    dash(led);
    dot(led);
    dash(led);
    break;
  case 'R':
    dot(led);
    dash(led);
    dot(led);
    break;
  case 'S':
    dot(led);
    dot(led);
    dot(led);
    break;
  case 'T':
    dash(led);
    break;
  case 'U':
    dot(led);
    dot(led);
    dash(led);
    break;
  case 'V':
    dot(led);
    dot(led);
    dot(led);
    dash(led);
    break;
  case 'W':
    dot(led);
    dash(led);
    dash(led);
    break;
  case 'X':
    dash(led);
    dot(led);
    dot(led);
    dash(led);
    break;
  case 'Y':
    dash(led);
    dot(led);
    dash(led);
    dash(led);
    break;
  case 'Z':
    dash(led);
    dash(led);
    dot(led);
    dot(led);
    break;
  case '0':
    dash(led);
    dash(led);
    dash(led);
    dash(led);
    dash(led);
    break;
  case '1':
    dot(led);
    dash(led);
    dash(led);
    dash(led);
    dash(led);
    break;
  case '2':
    dot(led);
    dot(led);
    dash(led);
    dash(led);
    dash(led);
    break;
  case '3':
    dot(led);
    dot(led);
    dot(led);
    dash(led);
    dash(led);
    break;
  case '4':
    dot(led);
    dot(led);
    dot(led);
    dot(led);
    dash(led);
    break;
  case '5':
    dot(led);
    dot(led);
    dot(led);
    dot(led);
    dot(led);
    break;
  case '6':
    dash(led);
    dot(led);
    dot(led);
    dot(led);
    dot(led);
    break;
  case '7':
    dash(led);
    dash(led);
    dot(led);
    dot(led);
    dot(led);
    break;
  case '8':
    dash(led);
    dash(led);
    dash(led);
    dot(led);
    dot(led);
    break;
  case '9':
    dash(led);
    dash(led);
    dash(led);
    dash(led);
    dot(led);
    break;
  }
}

void stringToMorse(DigitalOut * led, std::string s) {
  int stringLength = s.length();
  for (int i = 0; i < stringLength; i++) {
    alphabetToMorse(led, &s[i]);
  }
  ThisThread::sleep_for(BLINKING_RATE_OFF);
}