#include "VirtualDice.h"

VirtualDice::VirtualDice(bool double, int aPin)
{
    randomSeed(analogRead(aPin));
    _d = double;
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