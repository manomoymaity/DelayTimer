# DelayTimer

A lightweight non-blocking delay timer based on `millis()` for Arduino.

## Features
- Simple API (`ready()`, `reset()`, `setInterval()`)
- Ideal for animations, servo steps, and event timing
- Zero callbacks or forced structures

## Example
```cpp
#include <DelayTimer.h>

DelayTimer t15(15);

void setup() {
  Serial.begin(115200);
}

void loop() {
  if (t15.ready()) {
    Serial.println("15ms timer tick");
  }
}
```
