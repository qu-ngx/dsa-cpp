#include <iostream>

int findMax(int x, int y) {
    if (x > y)
        return x;
    else
        return y;
}

int main() {
    int a, b, max;

    std::cout << "Enter two number: " << '\n';
    std::cin >> a;
    std::cin >> b;

    std::cout << "The larger number is" << findMax(a , b) << '\n';

}