#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

#include <string>
using std::string;
using std::stoi;

#include <cctype>
using std::isdigit;

#include <locale>

void respostas( int, int & );

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	int number;
	
	int chute;
	char sentinela = 's';
	
	while ( sentinela == 's' )
	{
		system( "cls" );
		
		int counter = 0;
		string aux;
		srand( time( 0 ) );
		number = 1 + rand() % 1000;
		
		cout << "Tenho um n�mero entre 1 e 1000.";
		cout << "\nVoc� consegue adivinh�-lo?";
		cout << "\n\nDigite sua primeira suposi��o: ";
		
		do
		{
			cin >> aux;
			for (size_t i = 0; i < aux.size(); i++)
			{
				if ( isdigit(aux[i]) )
					chute = stoi(aux);
				else
				{
					chute = 0;
					i = aux.size();
				}
			}
			
			if ( chute >= 1 && chute <= 1000 )
			{
				respostas(number, chute);
				counter++;
			}
			else
			{	
				cout << "\nAhhhh! Voc� n�o sabe jogar, tchau.\n\n";
				system("pause");
			}	
		}while ( chute >= 1 && chute <= 1000 );
		
		system( "cls" );
		
		if ( counter > 10 )
			cout << "Voc� deveria ser capaz de fazer melhor!\n\n";
		else
			if ( counter != 0 && counter < 10 && chute != 0 )
				cout << "Voc� sabe o segredo ou teve sorte!\n\n";
		else 
			if ( counter == 10 )
				cout << "Ahah! Voc� sabe o segredo!\n\n";
		
		cout << "Deseja jogar de novo (s ou n)? ";
		cin >> sentinela;
	}
	return 0;
}

void respostas( int number, int &assumpNumber )
{
	if ( assumpNumber < number )
		cout << "Muito baixo.\nTente novamente: ";
	else
		if ( assumpNumber > number )
			cout << "Muito alto.\nTente novamente: ";
	else
		if ( assumpNumber == number )
		{
			cout << "\nExelente! Voc� adivinhou o n�mero!\n" << endl;
			system( "pause" );
			assumpNumber = 0;
		}
	else
		cout << "Caractere n�o pertence ao intervalo de 1 a 1000!";
			 
}
