#include <iostream>
#include "structs.h"


int main() {
    mstack x;
    x << 1;
    x << 2;
    x << 3;

    print_mstack(x);

    auto a = cx(1, 3);
    auto b = cx(3, 4);
    std::cout << a << '\n';
    std::cout << static_cast<double>(a + b) << '\n';
    std::cout << static_cast<double>(a * 5) << '\n';
}
