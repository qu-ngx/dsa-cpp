#include <iostream>

int main() {
    
    int array[10];

    for (int i = 0; i < 10; i++) {
        array[i] = i;
    }

    int sum = 0;
    int i = 0;
    while (sum < 10) {
        sum += array[i];
        i++;
    }

    std::cout << "The sum of the first " << i << "numbers is"
    << sum << "." << '\n';

    return 0;
}


