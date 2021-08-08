#include <iostream>
#include <iterator>

// 9.2 Quiz #2
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
    // 9.2 Quiz #1
    double yearly_temps[365]{ 0.0 };

    // 9.2 Quiz #2
    int num_legs[Animals::max_animals]{ 2, 4, 4, 4, 2, 0 };
    std::cout << "An elephant has " << num_legs[Animals::elephant] << " legs.\n";

    return 0;
}