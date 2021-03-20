#include <iostream>

int doubleNumber(int x) {
    return 2 * x;
}

int main() {
    std::cout << "Enter an integer:\n";
    int input{};
    std::cin >> input;

    std::cout << doubleNumber(5) << '\n';
    return 0;
}