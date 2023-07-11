
#include <string>
#include <iostream>


void f1(int x) {
    x = 22;
}

void f2(int &x) {
    x = 22;
}

int main() {
    std::cout << "----------------------------------------------" << '\n';
    std::cout << "Calling f1" << '\n';
    int x = 5;
    int y = 6; 
    f1(x);
    f1(y);

    std::cout << x << ", " << y << '\n';

    std::cout << "----------------------------------------------" << '\n';
    std::cout << "Calling f2" << '\n';
    
    x = 5;
    y = 6;

    f2(x);
    f2(y);

    std::cout << x << ',' << y << '\n';
    

    return 0;
}