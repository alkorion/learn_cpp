#include <iostream>
#include <iterator>

// 10.2 Quiz #2
namespace Animals {
    enum Animals {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        max_animals
    };
}

int main() {
    // 10.2 Quiz #1
    double yearly_temps[365]{ 0.0 };

    // 10.2 Quiz #2
    int num_legs[Animals::max_animals]{ 2, 4, 4, 4, 2, 0 };
    std::cout << "An elephant has " << num_legs[Animals::elephant] << " legs.\n";

    // 10.3 Quiz #1
    constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };

    for (int i{0}; i < static_cast<int>(std::size(array)); ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';

    return 0;
}