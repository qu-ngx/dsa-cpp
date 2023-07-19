#include <iostream>
#include "ClassName.h"

int main()
{
    Counter ctr;
    Counter();
    std::cout << ctr.getCount() << '\n';

    ctr.increaseBy(3);
    std::cout << ctr.getCount() << '\n';

    ctr.increaseBy(5);
    std::cout << ctr.getCount() << '\n';

    return 0;
}