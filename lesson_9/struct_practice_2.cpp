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

int main () {
    Fraction fract{get_user_fraction()};

    return 0;
}