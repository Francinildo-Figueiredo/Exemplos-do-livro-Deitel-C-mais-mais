#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <locale>

int linearSearch( const int [], int, int );

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	const int arraySize = 100;
	int a[ arraySize ];
	int searchKey;
	
	for ( int i = 0; i < arraySize; i++ )
		a[ i ] = 2 * i;
		
	for( int k = 0; k < arraySize; k++ )
	{
		cout << setw( 6 ) << a[ k ];
		
		if ( ( k + 1 ) % 5 == 0 )
			cout << endl;
	}
		
	cout << "\n\nInsira a chave de pesquisa: ";
	cin >> searchKey;
	
	int element = linearSearch( a, searchKey, arraySize );
	
	if ( element != -1 )
		cout << "Posição do elemento: " << element << endl;
	else
		cout << "Valor não encontrado!!!" << endl;	
	
	return 0;
}

int linearSearch( const int array[], int key, int sizeOfArray )
{
	for ( int j = 0; j < sizeOfArray; j++ )
		if ( array[ j ] == key )
			return j;
			
	return -1;
}
