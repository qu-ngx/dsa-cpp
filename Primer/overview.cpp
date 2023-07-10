#include <cstdlib>
#include <iostream>

/* This program inputs two numbers x and y and outputs their sum */

int main() {
    int x, y;
    std::cout << "Pls enter two numbers: ";
    std::cin >> x >> y;
    int sum = x + y;
    std::cout << "Their sum is " << sum << '\n';
    return EXIT_SUCCESS;
}

