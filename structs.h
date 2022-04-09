
#ifndef LAB03_STRUCTS_H
#define LAB03_STRUCTS_H

class cx{
private:
    double x;
    double y;
public:
    cx(double x_, double y_);
    cx operator*(double a) const;
    friend cx operator*(double a, cx &b);
    cx operator+(cx &b) const;
    cx operator*(cx &b) const;
    explicit operator double() const;
    friend std::ostream& operator<<(std::ostream& os, const cx& x);
};

class mstack{
private:
    int data[100];
    int p = -1;
public:
    void operator<< (int x);
    int operator>>(int &x);
};

void print_mstack(mstack &x);

#endif //LAB03_STRUCTS_H
