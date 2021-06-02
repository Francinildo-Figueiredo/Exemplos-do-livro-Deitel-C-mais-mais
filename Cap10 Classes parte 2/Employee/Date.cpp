#include <iostream>
using std::cout;
using std::endl;

#include "Date.h"

Date::Date( int mn, int dy, int yr )
{
	if ( mn > 0 && mn <= 12 )
		mounth = mn;
	else
	{
		mounth = 1; // m�s inv�lido configurado como 1
	  	cout << "M�s invalido (" << mn << "), atualizado como 1.\n";
	}
	
	year = yr;
	day  = checkDay( dy );
	
	cout << "Construtor inicializou data como ";
	print();
	cout << endl;
}

void Date::print() const
{
	cout << mounth << '/' << day << '/' << year;
}

Date::~Date()
{
	cout << "Destrutor finalizou data como ";
	print();
	cout << endl;
}

// fun��o utilit�ria para confirmar valor adequado de day
int Date::checkDay( int testDay ) const
{
	static const int daysPerMounth[ 13 ] =
		{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	// determina se testDay � v�lido durante m�s especificado
	if ( testDay > 0 && testDay <= daysPerMounth[ mounth ] )
		return testDay;
	
	// verifica��o 29 de fevereiro para ano bissexto
	if ( mounth == 2 && testDay == 29 && ( year % 400 == 0 ||
		( year % 4 == 0 && year % 100 != 0 ) ) )
		return testDay;
	
	cout << "Dia Inv�lido (" << testDay << "), inicializado como 1.\n";
}
