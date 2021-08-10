#include <iostream>
#include <iterator>
#include <utility>

int main() {
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    int array_size{ static_cast<int>(std::size(array)) };

    for (int current_iteration{ 0 }; current_iteration < array_size; ++current_iteration) {
        for (int current_index{ 0 }; current_index < array_size - 1; ++current_index) {
            if (array[current_index] > array[current_index+1]) {
                std::swap(array[current_index], array[current_index+1]);
            }
        }
    }

    // print the final array
    for (int i{0}; i < array_size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';

    return 0;
}