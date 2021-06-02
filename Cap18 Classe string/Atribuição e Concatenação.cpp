#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <locale>

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	string string1( "cat" );
	string string2;
	string string3;
	
	string2 = string1; // atribui string1 a string2
	string3.assign( string1 ); // atribui string1 a string3
	cout << "string1: " << string1 << "\nstring2: " << string2
		<< "\nstring3: " << string3 << "\n\n";
	
	string2[ 0 ] = string3[ 2 ] = 'r';
	
	cout << "Depois da modificação da string2 e string3:\nstring1: " << string1
		<< "\nstring2: " << string2 << "\nstring3: ";
		
	// demonstrando a função membro at
	for ( int i = 0; i < string3.length(); i++ )
		cout << string3.at( i );
	
	string string4( string1 + "apult" ); // concatenação
	string string5;
	
	// += sobrecarregado
	string3 += "pet"; // cria "carpet"
	string1.append( "acomb" ); // cria "catacomb"
	
	string5.append( string1, 4, string1.length() - 4 );
	
	cout << "\n\nDepois da concatenação:\nstring1: " << string1
		<< "\nstring2: " << string2 << "\nstring3: " << string3
		<< "\nstring4: " << string4 << "\nstring5: " << string5 << endl;
	
	return 0;
}
