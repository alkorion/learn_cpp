#include <iostream>

int main() {
    std::cout << "Enter an integer: ";
    int user_int_1{0};
    std::cin >> user_int_1;
    
    std::cout << "Enter another integer: ";
    int user_int_2{0};
    std::cin >> user_int_2;

    std::cout << user_int_1 << " + " << user_int_2 << " is " << user_int_1 + user_int_2 << ".\n";
    std::cout << user_int_1 << " - " << user_int_2 << " is " << user_int_1 - user_int_2 << ".\n";

    return 0;
}