// VirtualDice, an Arduino library for making digital dice.
// Written by TheLBall.

#include "Arduino.h"

class VirtualDice
{
    public:
      VirtualDice(bool isDouble, int aPin);
      int roll();
      void init();
    private:
      bool _d;
      int _aPin;
};