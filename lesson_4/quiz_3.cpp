#include <iostream>

double get_double() {
    // get and return double value
    std::cout << "Enter a double value: ";
    double val{};
    std::cin >> val;

    return val;
}

char get_operator() {
    // get and return operator char
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char op{};
    std::cin >> op;

    return op;

}

void evaluate_eq(double x, double y, char op) {
    // take in op and two values
    if (op == '+')
        std::cout << x << " * " << y << " = " << x + y << '\n';
    else if (op == '-')
        std::cout << x << " - " << y << " = " << x - y << '\n';
    else if (op == '*')
        std::cout << x << " * " << y << " = " << x * y << '\n';
    else if (op == '/')
        std::cout << x << " / " << y << " = " << x / y << '\n';
}


int main() {
    evaluate_eq(get_double(), get_double(), get_operator());

    return 0;
}
