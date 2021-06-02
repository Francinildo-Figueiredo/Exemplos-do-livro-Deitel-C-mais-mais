#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <locale>

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	string joao( "Você não é chato" );
	string pedro( "eu sou chato?" );
	
	int result = joao.compare( pedro );
	
	if ( result == 0 )
		cout << "joao == pedro\n";
	else
	{
		if ( result > 0 )
			cout << "joao > pedro\n";
		else
			cout << "joao < pedro\n";
	}
	
	cout << "\n\nJoão: " << joao << "\nPedro: " << pedro << "\n\n";
	
	cout << "João substr: " << joao.substr( 0, 5 ) << joao.substr( 9, joao.length() ) << endl;
	
	joao.swap( pedro ); // troca o conteúdo das strings
	
	cout << "\n\nJoão: " << joao << "\nPedro: " << pedro << "\n\n";
	
	joao.erase( 6 ); // remove todos os caracteres apartir da posição 6
	
	int position = pedro.find( " " );
	
	while ( position != string::npos )
	{
		pedro.replace( position, 1, "." );
		position = pedro.find( " ", position++ );
	}
		
	cout << "\n\nJoão: " << joao << "\nPedro: " << pedro << "\n\n";
	
	return 0;
}
