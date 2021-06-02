#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int character; //Utiliza um int, porque char não pode representar EOF
	
	cout << "Antes da entrada, cin.eof() " << cin.eof() << endl
		<< "Insira uma frase seguida por um End-Of-File: " << endl;
		
	while ( ( character = cin.get() ) != EOF )
		cout.put( character );
	
	cout << "\nEOF nesse sistema e: " << character << endl;
	cout << "Depois da entrada de EOF, cin.eof() " << cin.eof() << endl;
	
	return 0;
}
