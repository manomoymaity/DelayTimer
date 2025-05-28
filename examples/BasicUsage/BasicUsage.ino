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
