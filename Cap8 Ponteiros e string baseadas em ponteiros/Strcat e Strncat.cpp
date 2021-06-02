#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strcat;
using std::strncat;

int main()
{
	char s1[ 20 ] = "Happy "; // comprimento 6
	char s2[] = "New Year "; // comprimento 9
	char s3[ 40 ] = "";
	
	cout << "s1 = " << s1 << "\ns2 = " << s2;
	
	strcat( s1, s2 ); // comcatena s2 com s1 ( comprimento 15 )
	
	cout << "\n\nDepois de strcat( s1, s2 ):\ns1 = " << s1 << "\ns2 = " << s2;
	
	// concatena os 6 primeiros caracteres de s1 a s3
	strncat( s3, s1, 6 ); // coloca '\0' depois do último caractere
	
	cout << "\n\nDepois do strncat( s3, s1, 6 ):\ns1 = " << s1 << "\ns3 = " << s3;
	
	strcat( s3, s1 );
	cout << "\n\nDepois do strcat( s3, s1 ):\ns1 = " << s1 << "\ns3 = " << s3 << endl;
	
	return 0;
}
