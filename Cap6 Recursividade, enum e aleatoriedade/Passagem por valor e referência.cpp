#include <iostream>
using std::cout;
using std::endl;

#include <locale>

int squareByValue( int );
int squareByReference( int & );

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	int x = 2;
	int z = 4;
	
	cout << "x = " << x << " antes da passagem por valor\n";
	cout << "Valor retornado pela fun��o: " << squareByValue( x ) << endl;
	cout << "x = " << x << " depois da passagem por valor\n" << endl;
	
	cout << "z = " << z << " antes da passagem por refer�ncia\n";
	cout << "Valor retornado pela fun��o: " << squareByReference( z ) << endl;
	cout << "z = " << z << " depois da passagem por refer�ncia\n" << endl;
	
	return 0;
}

int squareByValue( int number )
{
	return number *= number;
}

int squareByReference( int &numberRef )
{
	return numberRef *= numberRef;
}
