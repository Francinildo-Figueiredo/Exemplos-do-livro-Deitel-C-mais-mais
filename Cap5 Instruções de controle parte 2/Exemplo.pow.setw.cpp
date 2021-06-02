//Programa que demonstra a utilização da função da biblioteca padrao pow, e também o manipulador de fluxo setw.



#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>

using namespace std;

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	double amount;
	double principal = 1000.0;
	double rate = .05;
	
	cout << "Year" << setw( 21 ) << "Amount on deposit" << endl;
	
	cout << fixed << setprecision( 2 );
	
	for( int year = 1; year <= 10; year++ )
	{
		amount = principal * pow( ( 1.0 + rate ), year );
		
		cout << setw( 4 ) << year << setw( 21 ) << amount << endl;
	}
	
	system( "pause" );
	system( "cls" );
	
 	int teste;
 	
 	cout << "Insira um inteiro positivo: ";
 	cin >> teste;
 	( teste >= 0 ) ? cout << "Tudo certo!!!" : cout << endl << "Inteiro negativo!!!";
	
	return 0;
}
