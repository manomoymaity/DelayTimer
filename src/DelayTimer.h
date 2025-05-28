#ifndef DELAYTIMER_H
#define DELAYTIMER_H

class DelayTimer {
  unsigned long interval;
  unsigned long lastTime;

public:
  DelayTimer(unsigned long ms = 1000);
  bool ready();
  void reset();
  void setInterval(unsigned long ms);
  unsigned long getInterval() const;
};

#endif
