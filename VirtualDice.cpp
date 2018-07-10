#include "VirtualDice.h"

VirtualDice::VirtualDice(int isDouble, int aPin)
{
    _aPin = aPin;
    _d = isDouble;
}
int VirtualDice::roll()
{
    if (_d == 1) {
        return random(1,13);
    }
    else {
        return random(1,7);
    }
}
void VirtualDice::init()
{
    randomSeed(analogRead(_aPin));
}