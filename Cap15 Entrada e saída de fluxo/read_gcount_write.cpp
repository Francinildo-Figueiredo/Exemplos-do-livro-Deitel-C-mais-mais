#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int SIZE = 80;
	char buffer[ SIZE ];
//	char buffer2[ SIZE ];
	
	// utiliza função read para inserir caracters  no buffer
	cout << "Insira uma frase: ";
	cin.read( buffer, 20 );
	
//	cin.get( buffer2, SIZE );
//	cout << buffer2 << endl;
	
	// utiliza funções write e gcount para exibir caracteres de buffer
	cout << "\nA frase lida foi: ";
	cout.write(buffer, cin.gcount() );
	cout << endl;
	
	return 0;
}
