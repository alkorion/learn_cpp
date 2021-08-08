#include <iostream>
#include <iterator>

int get_user_int() {
    std::cout << "Enter an int between 1 and 9 (inclusive): ";
    int input {};
    std::cin >> input;

    return input;
}

int main() {
    // 9.3 Quiz #1
    constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };

    // 9.3 Quiz #2
    int user_int {0};

    // repeatedly prompt user for an int value between 1 and 9 
    while (user_int < 1 || user_int > 9) {
        user_int = get_user_int();
    }

    // print the provided array
    int array_size { static_cast<int>(std::size(array)) };
    for (int i{0}; i < array_size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';

    int matching_index { array_size }; // instantiate the matching index to "impossible" value
    for (int i {0}; i < array_size; ++i) {
        if (array[i] == user_int) {
            matching_index = i;
            break;
        }
    }

    if (matching_index == array_size)
        std::cout << "Error: matching index never found\n";
    else
        std::cout << "Matching index is: " << matching_index << '\n';

    return 0;
}