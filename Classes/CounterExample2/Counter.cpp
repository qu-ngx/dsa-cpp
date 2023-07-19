#include "Counter.h"

Counter::Counter()
{
    count = 0;
}

Counter::Counter(int startVal)
{
    startVal = 0;
}

int Counter::getCount()
{
    return count;
}

void Counter::increaseBy(int x)
{
    count += x;
}