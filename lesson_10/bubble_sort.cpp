#include <iostream>
#include <iterator>
#include <utility>

int main() {
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    int array_size{ static_cast<int>(std::size(array)) };
    bool swap_occurred { false };

    // iterate bubble-sort <array_size> times
    for (int current_iteration{ 0 }; current_iteration < array_size; ++current_iteration) {

        // bubble sort elements up to the index last "bubbled" based on iteration
        for (int current_index{ 0 }; current_index < array_size - (1 + current_iteration); ++current_index) {

            // if adjacent values are decreasing in size, swap them
            if (array[current_index] > array[current_index + 1]) {
                std::swap(array[current_index], array[current_index+1]);
                swap_occurred = true;
            }
        }

        // Add early termination clause if an entire iteration occurs without a swap
        if (!swap_occurred) {
            std::cout << "Early termination on iteration " << current_iteration + 1 << '\n';
            break;
        }
        else // If a swap DID occur, reset the flag to "false" for next iteration
            swap_occurred = false;
    }

    // print the final array
    for (int i{0}; i < array_size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';

    return 0;
}