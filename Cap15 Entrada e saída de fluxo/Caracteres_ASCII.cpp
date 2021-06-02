#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;
using std::setfill;

#include <cmath>
using std::pow;

int main()
{
	int counter = 33, j = 0;
	
	cout << "\n";
	do
	{
		int i = 0, binary = 0, resto;
		int aux = counter;
		if ( counter <= 126 )
		{
			while ( aux != 0 )
			{
				resto = aux % 2;
				binary += resto * pow( 10, i );
				i++;
				aux /= 2;
			}
		}
		cout << "\t" << setfill('0') << setw( 3 ) << counter << " --> " << setw( 8 ) << binary << " --> ";
		cout.put( counter ) << "\t\t";
		counter++;
		j++;
		if ( j % 2 == 0 )
			cout << "\n\n";
				
	}while ( counter != 127 );
	
	cout << endl;
	
	return 0;
}
