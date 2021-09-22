#include <iostream>
#include <numeric> // std::reduce
#include <array>

enum ItemTypes
{
    health_potions,
    torches,
    arrows,
    max_items
};

int countTotalItems(const std::array<int, ItemTypes::max_items>& inventory)
{
    return std::reduce(inventory.begin(), inventory.end());
}

int main()
{
    // initialize player inventory
    std::array player_inventory { 2, 5, 10};

    std::cout << "Total items held: " << countTotalItems(player_inventory) << '\n';
    std::cout << "Number of torches: " << player_inventory[ItemTypes::torches] << '\n';

    return 0;
}