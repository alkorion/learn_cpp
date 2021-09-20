#include <iostream>
#include <string>
#include <string_view>

int main() {

    constexpr std::string_view names[]{ "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };

    std::cout << "Enter a name: ";
    std::string input_name{};
    std::cin >> input_name;

    bool found_name{ false };

    for (auto& name : names) {
        if (name == input_name) {
            found_name = true;
            break;
        }
    }

    if (found_name)
        std::cout << input_name << " was found.\n";
    else
        std::cout << input_name << " was not found.\n";

    return 0;
}