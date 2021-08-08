#include <iostream>

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
    double yearly_temps[365]{ 0.0 };

    int num_legs[Animals::max_animals]{ 2, 4, 4, 4, 2, 0 };

    std::cout << "An elephant has " << num_legs[Animals::elephant] << " legs.\n";

    return 0;
}