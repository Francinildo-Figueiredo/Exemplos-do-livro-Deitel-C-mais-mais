#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

class DeckOfCards
{
	public:
		DeckOfCards(); // construtor inicializa o deck
		void shuffle(); // embaralha as cartas
		void deal(); // distribui as cartas do baralho
	private:
		int deck[ 4 ][ 13 ];
};

#endif
