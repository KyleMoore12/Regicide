#include <iostream>
#include <vector>

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
    std::vector<Card> enemyDeck;
    std::vector<Card> playerDeck;
    std::vector<Card> discard;
    std::vector<Card> combat;
    void makeDecks()
    {
        for (int suit = (int)Suits::CLUB; suit <= (int)Suits::SPADE; suit++)
        {
            for (int rank = (int)Ranks::ACE; rank <= (int)Ranks::KING; rank++)
            {
                Card c;
                c.rank = (Ranks)rank;
                c.suit = (Suits)suit;
                if (rank <= 10)
                {
                    playerDeck.push_back(c);
                }
                else
                {
                    enemyDeck.push_back(c);
                }
            }
        }
    }
};

int main()
{
    Deck deck;
    deck.makeDecks();
}


