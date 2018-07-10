// VirtualDice, an Arduino library for making digital dice.
// Written by TheLBall.

#include "Arduino.h"

class VirtualDice
{
    public:
      VirtualDice(bool isDouble);
      int roll();
    private:
      bool _d;
};