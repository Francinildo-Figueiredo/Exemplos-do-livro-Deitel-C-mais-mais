#include <iostream>
using std::cout;
using std::endl;

#include <locale>

#include "CreateAndDestroy.h"

void create( void );

CreateAndDestroy first( 1, "(global antes da main)" );

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	cout << "\nFUNÇÃO MAIN: A EXECUÇÃO COMEÇA" << endl;
	CreateAndDestroy second( 2, "(local automática na main)" );
	static CreateAndDestroy third( 3, "(local static na main)" );
	
	create();
	
	cout << "\nFUNÇÃO MAIN: RETOMA A EXECUÇÃO" << endl;
	CreateAndDestroy fourth( 4, "(local automática na main)" );
	cout << "\nFUNÇÃO MAIN: FIM DA EXECUÇÃO" << endl;
	
	return 0;
}

void create( void )
{
	cout << "\nFUNÇÃO CREATE: A EXECUÇÃO COMEÇA" << endl;
	CreateAndDestroy fifith( 5, "(local automática na create)" );
	static CreateAndDestroy sixth( 6, "(local static na create)" );
	CreateAndDestroy seventh( 7, "(local automática na create)" );
	cout << "\nFUNÇÃO CREATE: FIM DA EXECUÇÃO" << endl;
}
