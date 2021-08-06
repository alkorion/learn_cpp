#include <iostream>

struct Fraction {
    int numerator{};
    int denominator{};
};

Fraction get_user_fraction() {
    Fraction fract;

    std::cout << "Enter the fraction numerator:\t";
    std::cin >> fract.numerator;
    std::cout << "Enter the fraction denominator:\t";
    std::cin >> fract.denominator;

    return fract;
}

double multiply(Fraction x, Fraction y) {
    int numer{x.numerator * y.numerator};
    int denom{x.denominator * y.denominator};

    return static_cast<double>(numer)/denom;
}

int main () {

    Fraction a{get_user_fraction()};
    Fraction b{get_user_fraction()};

    std::cout << a.numerator << "/" << a.denominator <<
        " * " << b.numerator << "/" << b.denominator <<
        " = " << multiply(a, b) << '\n';

    return 0;
}