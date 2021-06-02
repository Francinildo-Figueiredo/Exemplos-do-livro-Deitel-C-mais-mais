#include <iostream>
using std::cout;
using std::left;
using std::right;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

#include "DeckOfCards.h"

DeckOfCards::DeckOfCards()
{
	for ( int row = 0; row <= 3; row++ )
	{
		for ( int column = 0; column <= 12; column++ )
		{
			deck[ row ][ column ] = 0; 
		}
	}
	
	srand( time( 0 ) ); // semeia o gerador de número aleatório
}

void DeckOfCards::shuffle()
{
	int row; // representa o valor do naipe da carta
	int column; // representa o valor da face da carta
	
	for ( int card = 1; card <= 52; card++ )
	{
		do
		{
			row = rand() % 4; // seleciona uma linha aleatoriamente
			column = rand() % 13; // seleciona uma coluna aleatoriamente
		} while ( deck[ row ][ column ] != 0 );
		
		// coloca o número de carta no slot escolhido
		deck[ row ][ column ] = card;
	}
}

void DeckOfCards::deal()
{
	static const char *suit[ 4 ] = { "Copas", "Ouros", "Paus", "Espadas" };
	
	static const char *face[ 13 ] = { "As", "Dois", "Tres", "Quatro", "Cinco", "Seis",
	 "Sete", "Oito", "Nove", "Dez", "Valete", "Rainha", "Rei" };
	
	// para cada uma das 52 cartas
	for ( int card = 1; card <= 52; card++ )
	{
		// itera pelas linhas do baralho
		for ( int row = 0; row <= 3; row++ )
		{
			// itera pelas colunas do baralho pela linha atual
			for ( int column = 0; column <= 12; column++ )
			{
				// se o slot contiver a carta atual, exibe a carta
				if ( deck[ row ][ column ] == card )
				{
					cout << setw( 8 ) << right << face[ column ] << " de " << setw( 10 ) << left 
						<< suit[ row ] << ( card % 2 == 0 ? '\n' : '\t' );
				}
			}
		}
	}
}
