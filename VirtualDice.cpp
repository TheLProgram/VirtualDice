#include "VirtualDice.h"

VirtualDice::VirtualDice(int isDouble, int aPin)
{
    _aPin = aPin;
    _d = isDouble;
}
int VirtualDice::roll()
{
    if (_d = 1) {
        return random(13);
    }
    else if (_d = 0) {
        return random(7);
    }
    else
    {
        return 0;
    }
}
void VirtualDice::init()
{
    randomSeed(analogRead(_aPin));
}