#include "Interface.h"
#include "Implementation.h"

Interface::Interface( int v )
	: ptr ( new Implementation( v ) ) // inicializa ptr para apontar para 
{									  // um novo objeto Implementation
	
}

void Interface::setValue( int v )
{
	ptr->setValue( v );
}

int Interface::getValue() const
{
	ptr->getValue();
}

Interface::~Interface()
{
	delete ptr;
}
