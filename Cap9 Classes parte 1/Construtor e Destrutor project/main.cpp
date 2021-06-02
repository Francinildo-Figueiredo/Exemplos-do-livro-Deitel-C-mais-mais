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
	
	cout << "\nFUN��O MAIN: A EXECU��O COME�A" << endl;
	CreateAndDestroy second( 2, "(local autom�tica na main)" );
	static CreateAndDestroy third( 3, "(local static na main)" );
	
	create();
	
	cout << "\nFUN��O MAIN: RETOMA A EXECU��O" << endl;
	CreateAndDestroy fourth( 4, "(local autom�tica na main)" );
	cout << "\nFUN��O MAIN: FIM DA EXECU��O" << endl;
	
	return 0;
}

void create( void )
{
	cout << "\nFUN��O CREATE: A EXECU��O COME�A" << endl;
	CreateAndDestroy fifith( 5, "(local autom�tica na create)" );
	static CreateAndDestroy sixth( 6, "(local static na create)" );
	CreateAndDestroy seventh( 7, "(local autom�tica na create)" );
	cout << "\nFUN��O CREATE: FIM DA EXECU��O" << endl;
}
