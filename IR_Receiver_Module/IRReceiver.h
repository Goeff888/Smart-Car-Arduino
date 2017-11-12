//Christian Göhler
//2017.11.12

#ifndef __IRRECEIVER__
#define __IRRECEIVER__

#include <Arduino.h>
#include <IRremote.h>

class IRReceiver {
public:
  IRReceiver (int pin);
  void StartIR();
  void decodeData();
  void Resume();
private:
 int _pin;
};

#endif

