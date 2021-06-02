#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
	const int arraySize = 10;
	int data[ arraySize ] = { 34, 56, 4, 10, 77, 51, 93, 30, 5, 52 };
	int insert;
	
	cout << "Array desodenado:\n";
	
	for ( int i = 0; i < arraySize; i++ )
		cout << setw( 4 ) << data[ i ];
		
	for ( int next = 1; next < arraySize; next++ )
	{
		insert = data[ next ];
		
		int moveItem = next;
		
		while ( ( moveItem > 0 ) && ( data[ moveItem - 1 ] > insert ) )
		{
			//desloca o elemento uma posição para a direita
			data[ moveItem ] = data[ moveItem - 1 ];
			moveItem--;
		}
		
		data[ moveItem ] = insert;
	}
	
	cout << "\nArray ordenado:\n";
	
	for ( int i = 0; i < arraySize; i++ )
		cout << setw( 4 ) << data[ i ];
	
	cout << endl;
	return 0;
}
