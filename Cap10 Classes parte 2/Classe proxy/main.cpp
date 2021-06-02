#include <iostream>
using std::cout;
using std::endl;

#include "Interface.h"

int main()
{
	Interface i( 5 );
	
	cout << "A interface contem: " << i.getValue() << endl;
	
	i.setValue( 10 );
	
	cout << "A interface contem: " << i.getValue() << endl;
	
	return 0;
}
