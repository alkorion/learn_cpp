#include <iostream>

int calculate(int a, int b, char op) {
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    default:
        std::cout << "calculate() unhandled case\n";
        return 0;
    }
}

int main() {

    int a;
    int b;
    char op;

    std::cout << "Enter an interger: ";
    std::cin >> a;
    std::cout << "Enter another interger: ";
    std::cin >> b;
    std::cout << "Enter an operator char: ";
    std::cin >> op;

    std::cout << a << " " << op << " " << b << " = " << calculate(a, b, op) << '\n';

    return 0;
}