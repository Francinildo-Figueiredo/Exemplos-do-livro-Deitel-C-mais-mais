#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::rand;

#include <ctime>
using std::time;

int main()
{
	unsigned seed;
	
	cout << "Entre com uma semente: ";
	cin >> seed;
	srand( seed );
	
	for( int counter = 1; counter <= 10; counter++ )
	{
		cout << setw( 5 ) << ( 1 + rand() % 6 );
		
		if( counter % 5 == 0 )
			cout << endl;
	}
	
	cout << time( 0 );

	return 0;
}

