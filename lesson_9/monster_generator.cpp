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
    if (t == MonsterType::ogre)
        return "Ogre";
    else if (t == MonsterType::dragon)
        return "Dragon";
    else if (t == MonsterType::orc)
        return "Orc";
    else if (t == MonsterType::giant_spider)
        return "Giant Spider";
    else if (t == MonsterType::slime)
        return "Slime";
    else
        return "<unknown type>";
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