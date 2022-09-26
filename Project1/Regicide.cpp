#include <iostream>

enum Suits
{
    CLUB,
    DIAMOND,
    HEART,
    SPADE
};

enum Ranks
{
    ACE = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
};

struct Card 
{
    Suits suit;
    Ranks rank;
};

struct Deck 
{
    Card deck[52];

    void makeDeck()
    {
        for (int suit = (int)Suits::CLUB; suit <= (int)Suits::SPADE; suit++)
        {
            for (int rank = (int)Ranks::ACE; rank <= (int)Ranks::KING; rank++)
            {
                Card c;
                c.rank = (Ranks)rank;
                c.suit = (Suits)suit;
                std::cout << c.rank << " of " << c.suit << '\n';
            }

            std::cout << '\n';
        }
    }
        
        
};

int main()
{
    Deck deck;
    deck.makeDeck();
}


