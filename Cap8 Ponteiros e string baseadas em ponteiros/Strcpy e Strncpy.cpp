#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strcpy;
using std::strncpy;

int main()
{
	char x[] = "Happy Birthday to You";
	char y[ 25 ];
	char z[ 15 ];
	
	strcpy( y, x ); // copia o conte�do de x para y
	
	cout << "String no array x: " << x
		<< "\nString no array y: " << y << '\n';
		
	strncpy( z, x, 14 ); // n�o copia o caractere nulo
	z[ 14 ] = '\0'; // acrescenta '\0' ao conte�do de z
	
	cout <<	"String no array z: " << z << endl;
	
	return 0;
}
