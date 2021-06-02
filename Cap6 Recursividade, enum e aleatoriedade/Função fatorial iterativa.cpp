#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

unsigned long factorial( unsigned long );

int main()
{
	for ( int counter = 0; counter <= 10; counter++ )
		cout << setw( 2 ) << counter << "! = " << factorial( counter ) << endl;
	
	cout << setw( 2 ) << "33" << "! = " << factorial( 33 ) << endl;
		
	return 0;
}

unsigned long factorial( unsigned long number )
{
	unsigned long result = 1;
	
	for ( unsigned long i = number; i >= 1; i-- )
		result *= i;
	
	return result;
}
