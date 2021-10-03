#include <iostream>
#include "card_game.cpp"

using deck_type = std::array<Card,52>;

bool playBlackjack(deck_type deck) {
    /*
    - The dealer gets one card to start (in real life, the dealer gets two, but one is face down so it doesn’t matter at this point).
    - The player gets two cards to start.
    - The player goes first.
    - A player can repeatedly “hit” or “stand”.
    - If the player “stands”, their turn is over, and their score is calculated based on the cards they have been dealt.
    - If the player “hits”, they get another card and the value of that card is added to their total score.
    - An ace normally counts as a 1 or an 11 (whichever is better for the total score). For simplicity, we’ll count it as an 11 here.
    - If the player goes over a score of 21, they bust and lose immediately.
    - The dealer goes after the player.
    - The dealer repeatedly draws until they reach a score of 17 or more, at which point they stand.
    - If the dealer goes over a score of 21, they bust and the player wins immediately.
    - Otherwise, if the player has a higher score than the dealer, the player wins. Otherwise, the player loses (we’ll consider ties as dealer wins for simplicity).
    
    psuedo-code:
    // initialize the board:
    give dealer one card, and player two cards
    // start player turn
    while loop:
        print current player score
        prompt player to hit/stand
        if HIT and player_score > 21
            return false
            break
        if STAND
            break // end player turn
    // start dealer turn
    while loop:
        if dealer score < 17:
            dealer HITS
            if score > 21:
                return true // dealer busts
        else:
            dealer STANDS

    // neither player has busted, compare scores
    if player score > dealer score
        return true
    else
        return false
        
    
    */

    constexpr int dealer_max = 17;
    constexpr int blackjack_max = 21;

    // initialize scores
    int dealer_score {};
    int player_score {};

    // initialize dealer and player cards
    dealer_score += getCardValue(deck[0]);
    player_score += getCardValue(deck[1]) + getCardValue(deck[2]);

    if (player_score > 21) // edge-case player draws two aces
        player_score = 12;

    // create indext to track top of deck
    int card_index {3}; // start at index 3 since 3 cards have already been drawn

    bool dealer_done {false};
    bool player_done {false};

    // player turn
    while (!player_done) {
        Card current_card { deck[card_index] };
        
        // prompt player to hit/stand  
        std::cout << "Dealer score =\t" << dealer_score << '\n';
        std::cout << "Player score = \t" << player_score << '\n';
        std::cout << "Enter '1' for 'hit or '0' for 'stand': ";
        int player_response{};
        std::cin >> player_response;

        switch (player_response) {
            case 0:
                player_done = true;
                continue;
            case 1:
                player_score += getCardValue(current_card);
                std::cout << "Player drew a: ";
                printCard(current_card);
                std::cout << '\n';
                ++card_index; // update next card
                
                if (player_score > blackjack_max) {
                    player_done = true;
                    continue;
                }
                continue; 
            default:
                std::cout << "Faulty response, please enter '0' or '1'\n";
        }   

    }
    if (player_score > blackjack_max) {
        std::cout << "Player busts with score of " << player_score << '\n';
        return false;   // player busts and loses
    }

    // dealer turn
    while (!dealer_done) {
        Card current_card { deck[card_index] };

        std::cout << "Dealer score = " << dealer_score << '\n';
        std::cout << "Player score = " << player_score << '\n';
        
        // dealer is under and hits
        if (dealer_score < dealer_max) {
            std::cout << "Dealer hits\n";
            dealer_score += getCardValue(current_card);
            std::cout << "Dealer drew a: ";
            printCard(current_card);
            std::cout << '\n';
            ++card_index;
            if (dealer_score > blackjack_max) {
                dealer_done = true;
                continue;
            }
            continue;
        }
        // dealer is over max and stands
        else {
            dealer_done = true;
            continue;
        }
    }
    
    if (dealer_score > blackjack_max) {
        std::cout << "Dealer busts with score of " << dealer_score << '\n';
        return true;   // dealer busts and loses
    }

    std::cout << "Dealer final score = " << dealer_score << '\n';
    std::cout << "Player final score = " << player_score << '\n';

    return player_score > dealer_score;

}

int main() {
    deck_type deck = createDeck();
    shuffleDeck(deck);

    if (playBlackjack(deck))
        std::cout << "Player Wins!\n";
    else
        std::cout << "Player Loses.\n";
    

    return 0;
}