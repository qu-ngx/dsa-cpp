#include <iostream>

int main()
{
    int num[4] = {1, 2, 3, 4};

    for (int i = 0; i < 4; i++)
    {
        std::cout << "index: " << i << ","
                  << "value: " << num[i]
                  << ", adress: " << &num[i] << '\n';
    }
}