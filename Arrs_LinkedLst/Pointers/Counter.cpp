#include "Counter.h"

Counter::Counter()
{
    count = 0;
}

Counter::Counter(int startVal)
{
    count = startVal;
}

int Counter::getCount()
{
    return count;
}

void Counter::increaseBy(int x)
{
    count += x;
}