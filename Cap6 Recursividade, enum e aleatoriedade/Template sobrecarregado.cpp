#include <iostream>
using std::cout;
using std::cin;
using std::endl;

template < typename T >

T maximum( T value1, T value2, T value3 )
{
	T maximumValue = value1;
	
	if ( value2 > maximumValue )
		maximumValue = value2;
		
	if ( value3 > maximumValue )
		maximumValue = value3;
		
	return maximumValue;
}

int main()
{
	int int1, int2, int3;
	
	cout << "Insira tres inteiros: ";
	cin >> int1 >> int2 >> int3;
	
	cout << "Maior inteiro: " << maximum( int1, int2, int3 );
	
	double double1, double2, double3;
	
	cout << "\n\nInsira tres valores double: ";
	cin >> double1 >> double2 >> double3;
	
	cout << "Maior valor double: " << maximum( double1, double2, double3 );
	
	char char1, char2, char3;
	
	cout << "\n\nInsira tres caracteres: ";
	cin >> char1 >> char2 >> char3;
	
	cout << "Maior caractere: " << maximum( char1, char2, char3 ) << endl;
	
	return 0;
}
