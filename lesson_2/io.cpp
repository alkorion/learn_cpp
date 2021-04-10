// io.cpp

#include <iostream>


int readNumber() {

    std::cout << "Enter a number: ";
    int x {};
    std::cin >> x;

    return x;
}

void writeAnswer(int answer) {
    std::cout << "The answer is " << answer << '\n';
}
