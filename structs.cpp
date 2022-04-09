#include <cmath>
#include <stdexcept>
#include <iostream>
#include "structs.h"

cx::cx(double x_, double y_) : x(x_), y(y_) {}

cx cx::operator*(double a) const {
    return {x * a, y * a};
}

cx operator*(double a, cx &b) {
    return {b.x * a, b.y * a};
}

cx cx::operator+(cx &b) const {
    return {x + b.x, y + b.y};
}


cx cx::operator*(cx &b) const {
    return {x * b.x - y * b.y, x * b.y + b.x * y};
}

cx::operator double() const {
    return sqrt(x * x + y * y);
}

std::ostream &operator<<(std::ostream &os, const cx &x) {
    os << x.x << " + " << x.y << 'i';
    return os;
}

void mstack::operator<<(int x) {
    if (p == 100) throw std::out_of_range("Top");
    ++p;
    data[p] = x;
}

int mstack::operator>>(int &x) {
    if (p == -1) throw std::out_of_range("Bottom");
    x = data[p--];
    return x;
}

void print_mstack(mstack &x) {
    try {
        int b;
        while (true) {
            x >> b;
            std::cout << b << ' ';
        }
    } catch (std::out_of_range) {
        std::cout << '\n';
        return;
    }

}
