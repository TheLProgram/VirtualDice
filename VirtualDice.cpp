#include "VirtualDice.h"

VirtualDice::VirtualDice(bool isDouble)
{
    _d = isDouble;
}
int VirtualDice::roll()
{
    if (_d == true) {
        return random(1,13);
    }
    else {
        return random(1,7);
    }
}