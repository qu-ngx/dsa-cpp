#include "Counter.h"
#include <iostream>

int main()
{
    std::cout << "----------------------------------" << '\n';
    Counter ctr;
    std::cout << ctr.getCount() << '\n';

    ctr.increaseBy(3);
    std::cout << ctr.getCount() << '\n';

    Counter ctr2{15};
    std::cout << ctr2.getCount() << '\n';

    ctr2.increaseBy(3);
    std::cout << ctr2.getCount() << '\n';

    std::cout << "----------------------------------" << '\n';

    Counter ctr3{15};
    std::cout << ctr3.getCount() << '\n';

    ctr3.increaseBy(3);
    std::cout << ctr3.getCount() << '\n';

    return 0;
}
