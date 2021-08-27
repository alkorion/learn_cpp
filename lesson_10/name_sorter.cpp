#include <iostream>
#include <algorithm>

int main() {
    
    // Ask the user how many names they wish to enter
    std::cout << "How many names would you like to enter? ";
    int num_names{};
    std::cin >> num_names;

    // Dynamically allocate a std::string array
    std::string* name_array{ new std::string[num_names]{} };

    // Ask the user to enter each name
    for (int i{0}; i < num_names; ++i) {
        std::cout << "Enter name #" << i+1 << ": ";
        std::cin >> name_array[i];
    }

    // Sort the names using std::sort
    std::sort(name_array, name_array + num_names);

    // Print the sorted list of names
    std::cout << "\nHere is your sorted list: \n";

    for (int i{0}; i < num_names; ++i) {
        std::cout << "Name #" << i+1 << ": " << *(name_array+i) << '\n';
        // std::cin >> name_array[i];
    }

    return 0;
}