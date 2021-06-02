#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <locale>

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	string joao( "Voc� n�o � chato" );
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
	
	cout << "\n\nJo�o: " << joao << "\nPedro: " << pedro << "\n\n";
	
	cout << "Jo�o substr: " << joao.substr( 0, 5 ) << joao.substr( 9, joao.length() ) << endl;
	
	joao.swap( pedro ); // troca o conte�do das strings
	
	cout << "\n\nJo�o: " << joao << "\nPedro: " << pedro << "\n\n";
	
	joao.erase( 6 ); // remove todos os caracteres apartir da posi��o 6
	
	int position = pedro.find( " " );
	
	while ( position != string::npos )
	{
		pedro.replace( position, 1, "." );
		position = pedro.find( " ", position++ );
	}
		
	cout << "\n\nJo�o: " << joao << "\nPedro: " << pedro << "\n\n";
	
	return 0;
}
