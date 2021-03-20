#include <iostream>

int main() {
    std::cout << "Hello world!" << std::endl;
    // return 0;

    std::cout << "Why don't you enter in some text?\n";
    int user_input{};
    std::cin >> user_input;
    std::cout << "You entered the following text:\n" << user_input << '\n';

    int x;
    std::cout << "The value of x is: " << x << '\n';
    return 0;
}