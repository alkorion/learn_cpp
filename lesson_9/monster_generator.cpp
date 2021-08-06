#include <iostream>

enum class MonsterType {
    ogre,
    dragon,
    orc,
    giant_spider,
    slime
};

struct Monster {
    MonsterType type{};
    std::string name{};
    int health{};
};

std::string type_to_string(MonsterType t) {
    switch (t) {
        case MonsterType::ogre:
            return "Ogre";
        case MonsterType::dragon:
            return "Dragon";
        case MonsterType::orc:
            return "Orc";
        case MonsterType::giant_spider:
            return "Giant Spider";
        case MonsterType::slime:
            return "Slime";
        default:
            return "Unknown Type";
    }

}

void printMonster(Monster m) {
    std::cout << "This " << type_to_string(m.type) << " is named " << m.name << " and has " << m.health << " health.\n";
}

int main() {

    Monster m1{MonsterType::ogre, "Torg", 145};
    Monster m2{MonsterType::slime, "Blurp", 23};

    printMonster(m1);
    printMonster(m2);

    return 0;
}