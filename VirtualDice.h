// VirtualDice, an Arduino library for making digital dice.
// Written by TheLBall.

#include "Arduino.h"

class VirtualDice
{
    pubic:
      VirtualDice(bool double, int aPin);
      int roll();
    private:
      bool _d;
      int _aPin;
}