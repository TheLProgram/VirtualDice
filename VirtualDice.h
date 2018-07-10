// VirtualDice, an Arduino library for making digital dice.
// Written by TheLBall.

#include "Arduino.h"

class VirtualDice
{
    public:
      VirtualDice(int isDouble, int aPin);
      int roll();
      void init();
    private:
      int _d;
      int _aPin;
};