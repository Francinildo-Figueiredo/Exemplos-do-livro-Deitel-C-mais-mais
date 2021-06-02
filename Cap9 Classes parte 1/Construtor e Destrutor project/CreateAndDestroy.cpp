#include <iostream>
using std::cout;
using std::endl;

#include "CreateAndDestroy.h"

CreateAndDestroy::CreateAndDestroy( int ID, string messageString )
{
	objectID = ID;
	message = messageString;
	
	cout << "Objeto " << objectID << "  construtor executando   " << message << endl;
}

CreateAndDestroy::~CreateAndDestroy()
{
	cout << ( objectID == 1 || objectID == 6 ? "\n" : "" );
	
	cout << "object " << objectID << "  destrutor executando   " << message << endl;
}
