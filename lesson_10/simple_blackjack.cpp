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

    // temp return
    return false;
}

int main() {
    deck_type deck = createDeck();
    shuffleDeck(deck);

    playBlackjack(deck);

    return 0;
}