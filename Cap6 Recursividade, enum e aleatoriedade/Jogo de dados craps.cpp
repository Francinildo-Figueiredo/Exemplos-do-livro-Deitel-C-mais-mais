#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

#include <locale>

int rollDice();

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	enum Status 
	{
		CONTINUE, WIN, LOST
	};
	
	int myPoint;
	Status gameStatus;
	
	srand( time( 0 ) );
	
	int sumOfDice = rollDice();
	
	switch( sumOfDice )
	{
		case 7:
		case 11:
			gameStatus = WIN;
			break;
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;
		default:
			gameStatus = CONTINUE;
			myPoint = sumOfDice;
			cout << "Os pontos são: " << myPoint << endl << endl;
			break;
	}
	
	system( "pause" );
	system( "cls" );
	
	while( gameStatus == CONTINUE )
	{
		cout << "\nRolando dado..." << endl;
		sumOfDice = rollDice();
		
		if( sumOfDice == myPoint )
			gameStatus = WIN;
		else
			if( sumOfDice == 7 )
				gameStatus = LOST;
		
		system( "pause" );
	}
	
	if( gameStatus == WIN )
		cout << "Jogador ganhou!!! " << endl;
	else
		cout << "Jogador perdeu!!! " << endl;
	
	return 0;
}

int rollDice()
{
	int dice1 = 1 + rand() % 6;
	int dice2 = 1 + rand() % 6;
	
	int sum = dice1 + dice2;
	
	cout << "O jogador rolou " << dice1 << " + " << dice2 << " = " << sum << endl << endl;
	
	return sum;
}

