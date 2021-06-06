#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    double age_per_letter {};
    age_per_letter =  static_cast<double>(age) / static_cast<double>(name.length()) ;

    std::cout << "You've lived " << age_per_letter << " years for each letter in your name.\n";
}