#include "DelayTimer.h"
#include <Arduino.h>

DelayTimer::DelayTimer(unsigned long ms) {
  interval = ms;
  lastTime = millis();
}

bool DelayTimer::ready() {
  if (millis() - lastTime >= interval) {
    lastTime += interval;
    return true;
  }
  return false;
}

void DelayTimer::reset() {
  lastTime = millis();
}

void DelayTimer::setInterval(unsigned long ms) {
  interval = ms;
}

unsigned long DelayTimer::getInterval() const {
  return interval;
}
