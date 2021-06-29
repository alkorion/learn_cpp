#include<iostream>

bool isEven(int x) {
    if (x % 2 == 0)
        return true;
    else
        return false;

}

int main() {
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    if (isEven(x))
        std::cout << x << " is even\n";
    else
        std::cout << x << " is odd\n";

    return 0;
} 