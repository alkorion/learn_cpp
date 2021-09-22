#include <iostream>
#include <array>

enum Item {
    health_potions,
    torches,
    arrows
};

int countTotalItems(const std::array<int,3>& inventory) {
    int sum { 0 };

    for (int item_count : inventory) {
        sum += item_count;
    }

    return sum;
}

int main() {
    // initialize player inventory
    std::array player_inventory { 2, 5, 10};

    std::cout << "Total items held: " << countTotalItems(player_inventory) << '\n';
    std::cout << "Number of torches: " << player_inventory[torches] << '\n';

    return 0;
}