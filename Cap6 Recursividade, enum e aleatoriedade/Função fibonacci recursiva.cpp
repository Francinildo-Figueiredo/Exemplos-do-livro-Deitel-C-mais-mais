#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

unsigned long fibonacci( unsigned long );

int main()
{
	for ( int counter = 0; counter <= 10; counter++ )
		cout << setw( 2 ) << "fibonacci( " << counter << " ) = " << fibonacci( counter ) << endl;
	
	cout << setw( 2 ) << "fibonacci( " << 20 << " ) = " << fibonacci( 20 ) << endl;
	cout << setw( 2 ) << "fibonacci( " << 30 << " ) = " << fibonacci( 30 ) << endl;
	
	return 0;
}

unsigned long fibonacci( unsigned long number )
{
	if ( number == 0 || number == 1 )
		return number;
		
	else
		return fibonacci( number - 1 ) + fibonacci( number - 2 );
}
