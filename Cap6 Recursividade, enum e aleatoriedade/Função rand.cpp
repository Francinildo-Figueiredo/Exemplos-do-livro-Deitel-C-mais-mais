#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;

int main()
{
	for( int counter = 1; counter <= 20; counter++ )
	{
		cout << setw( 5 ) << ( 1 + rand() % 6 );
		
		if( counter % 5 == 0 )
			cout << endl;
	}
	
	system( "pause" );
	system( "cls" );
	
	const int arraySize = 7;
	int frequency[ arraySize ] = { 0 };
	
	for( int roll = 1; roll <= 6000000; roll++ )
	{
		frequency[ 1 + rand() % 6 ]++;
	}
	
	cout << "Face" << setw( 13 ) << "Frequency" << endl;
	
	for ( int face = 1; face < arraySize; face++ )
		cout << setw( 4 ) << face << setw( 13 ) << frequency[ face ] << endl;
	
	return 0;
}
