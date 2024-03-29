#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <ctime>
#include <random>

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
    switch(card.rank) {
        case Rank::rank_2:      std::cout << '2';    break;
        case Rank::rank_3:      std::cout << '3';    break;
        case Rank::rank_4:      std::cout << '4';    break;
        case Rank::rank_5:      std::cout << '5';    break;
        case Rank::rank_6:      std::cout << '6';    break;
        case Rank::rank_7:      std::cout << '7';    break;
        case Rank::rank_8:      std::cout << '8';    break;
        case Rank::rank_9:      std::cout << '9';    break;
        case Rank::rank_10:     std::cout << 'T';    break;
        case Rank::rank_jack:   std::cout << 'J';    break;
        case Rank::rank_queen:  std::cout << 'Q';    break;
        case Rank::rank_king:   std::cout << 'K';    break;
        case Rank::rank_ace:    std::cout << 'A';    break;
        default:
            std::cout << '?';
            std::cerr << "Card Rank error\n";
    }

    switch(card.suit) {
        case Suit::clubs:       std::cout << 'C';    break;
        case Suit::diamonds:    std::cout << 'D';    break;
        case Suit::hearts:      std::cout << 'H';    break;
        case Suit::spades:      std::cout << 'S';    break;
        default:
            std::cout << '?';
            std::cerr << "Card Suit error\n";
    }
}

using deck_type = std::array<Card,52>;

deck_type createDeck() {
    deck_type deck;

    int index{0};

    for (int suit{0}; suit < static_cast<int>(Suit::max_suits); ++suit) {
        for (int rank{0}; rank < static_cast<int>(Rank::max_ranks); ++rank) {
            Card card;
            card.rank = static_cast<Rank>(rank);
            card.suit = static_cast<Suit>(suit);

            deck[index] = card;
            ++index;
        }
    }

    return deck;
}

void printDeck(const deck_type& deck) {
    for (Card card : deck) {
        
        printCard(card);
        std::cout << ' ';
    }
    std::cout << '\n';
}

void shuffleDeck(deck_type& deck) {
    // only initialize mt once since it's static
    static std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
    std::shuffle(deck.begin(), deck.end(), mt);
}

int getCardValue(const Card& card) {
    switch (card.rank) {
        case Rank::rank_2:
        case Rank::rank_3:
        case Rank::rank_4:
        case Rank::rank_5:
        case Rank::rank_6:
        case Rank::rank_7:
        case Rank::rank_8:
        case Rank::rank_9:
        case Rank::rank_10:     return static_cast<int>(card.rank) + 2;
        case Rank::rank_jack:
        case Rank::rank_queen:
        case Rank::rank_king:   return 10;  // royal face cards worth 10
        case Rank::rank_ace:    return 11;
        default:                return 0;
    }
}

// int main() {

//     deck_type deck = createDeck();
//     printDeck(deck);

//     shuffleDeck(deck);
//     printDeck(deck);

//     printCard(deck[0]);
//     std::cout << " has value: " << getCardValue(deck[0]) << '\n';

//     return 0;
// }