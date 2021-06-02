#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <cctype>
using std::islower;
using std::toupper;

#include <locale>

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	const int tam = 6;
	string lista[] = { "pedro", "andré", "lucas", "david", "flávio", "Denise" };
	string aux;
	
	for ( size_t i = 0; i < tam; i++ )
	{
		if ( islower( lista[ i ][ 0 ] ) )
			lista[ i ][ 0 ] = toupper( lista[ i ][ 0 ] );
	}
	
	cout << "Lista na ordem de inserção:\n\n";
	for ( size_t i = 0; i < tam; i++ )
		cout << lista[ i ] << "\n";
		
	for ( size_t j = 0; j < tam; j++ )
	{
		for ( size_t i = 0; i < tam - 1; i++ )
		{	
			if ( lista[ i ].compare( lista[ i + 1 ] ) > 0 )
			{
				aux = lista[ i ];
				lista[ i ] = lista[ i + 1 ];
				lista[ i + 1 ] = aux;
			}
			
		}
	}
	
	cout << "\nLista em ordem alfabética:\n\n";
	for ( size_t i = 0; i < tam; i++ )
		cout << lista[ i ] << "\n";
	
	return 0;
}
