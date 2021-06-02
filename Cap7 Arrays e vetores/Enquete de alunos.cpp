#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <locale>

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	const int responseSize = 40;
	const int frequencySize = 11;
	
	const int responses[ responseSize ] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6,
	3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };
	
	int frequency[ frequencySize ] = { 0 };
	
	for ( int answer = 0; answer < responseSize; answer++ )
		frequency[ responses[ answer ] ]++;
		
	cout << "Avaliação" << setw( 17 ) << "Frequência" << endl;
	
	for ( int rating = 1; rating < frequencySize; rating++ )
		cout << setw( 9 ) << rating << setw( 17 ) << frequency[ rating ] << endl;
	
	return 0;
}
