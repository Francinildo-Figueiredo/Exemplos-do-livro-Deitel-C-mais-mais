#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <locale>

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	string string1( "Testing the comparison functions." );
	string string2( "Hello" );
	string string3( "stinger" );
	string string4( string2 );
	
	cout << "string1: " << string1 << "\nstring2: " << string2
		<< "\nstring3: " << string3 << "\nstring4: " << string4 << "\n\n";
		
	if ( string1 == string4 )
		cout << "string1 == string4\n";
	else
	{
		if ( string1 > string4 )
			cout << "string1 > string4\n";
		else
			cout << "string1 < string4\n";
	}
	
	// comparando string1 e string2
	int result = string1.compare( string2 );
	
	if ( result == 0 )
		cout << "string1.compare( string2 ) == 0\n";
	else
	{
		if ( result > 0 )
			cout << "string1.compare( string2 ) > 0\n";
		else
			cout << "string1.compare( string2 ) < 0\n";
	}
	
	// comparando string1 (elementos 2-5) e string3 (elemntos 0-5)
	result = string1.compare( 2, 5, string3, 0, 5 );
	
	if ( result == 0 )
		cout << "string1.compare( 2, 5, string3, 0, 5 ) == 0\n";
	else
	{
		if ( result > 0 )
			cout << "string1.compare( 2, 5, string3, 0, 5 ) > 0\n";
		else
			cout << "string1.compare( 2, 5, string3, 0, 5 ) < 0\n";
	}
	
	result = string4.compare( 0, string2.length(), string2 );
	
	if ( result == 0 )
		cout << "string4.compare( 0, string2.length(), string2 ) == 0\n";
	else
	{
		if ( result > 0 )
			cout << "string4.compare( 0, string2.length(), string2 ) > 0\n";
		else
			cout << "string4.compare( 0, string2.length(), string2 ) < 0\n";
	}
	
	result = string2.compare( 0, 3, string4 );
	
	if ( result == 0 )
		cout << "string2.compare( 0, 3, string4 ) == 0\n";
	else
	{
		if ( result > 0 )
			cout << "string2.compare( 0, 3, string4 ) > 0\n";
		else
			cout << "string2.compare( 0, 3, string4 ) < 0\n";
	}
	
	return 0;
}
