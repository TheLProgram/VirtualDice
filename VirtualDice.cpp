#include "VirtualDice.h"

VirtualDice::VirtualDice(bool isDouble, int aPin)
{
    _aPin = aPin;
    _d = isDouble;
}
int VirtualDice::roll()
{
    if (_d = true) {
        return random(13);
    }
    else {
        return random(7);
    }
}
void VirtualDice::init()
{
    randomSeed(analogRead(_aPin));
}