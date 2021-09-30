#include <iostream>
#include <string>

enum class Rank {
    rank_2,
    rank_3,
    rank_4,
    rank_5,
    rank_6,
    rank_7,
    rank_8,
    rank_9,
    rank_10,
    rank_jack,
    rank_queen,
    rank_king,
    rank_ace,

    max_ranks
};

enum class Suit {
    clubs,
    diamonds,
    hearts,
    spades,

    max_suits
};

struct Card {
    Rank rank{};
    Suit suit{};
};

void printCard(const Card& card) {
    std::string rank;
    std::string suit;
    switch(card.rank) {
        case Rank::rank_2:
            rank = "2";
        case Rank::rank_3:
            rank = "3";
        case Rank::rank_4:
            rank = "4";
        case Rank::rank_5:
            rank = "5";
        case Rank::rank_6:
            rank = "6";
        case Rank::rank_7:
            rank = "7";
        case Rank::rank_8:
            rank = "8";
        case Rank::rank_9:
            rank = "9";
        case Rank::rank_10:
            rank = "10";
        case Rank::rank_jack:
            rank = "J";
        case Rank::rank_queen:
            rank = "Q";
        case Rank::rank_king:
            rank = "K";
        case Rank::rank_ace:
            rank = "A";
        default:
            std::cout << "Card Rank error\n";
    }

    switch(card.suit) {
        case Suit::clubs:
            suit = "C";
        case Suit::diamonds:
            suit = "D";
        case Suit::hearts:
            suit = "H";
        case Suit::spades:
            suit = "S";
        default:
            std::cout << "Card Suit error\n";
    }

    std::cout << rank << suit << '\n';
}

int main() {
    
    return 0;
}