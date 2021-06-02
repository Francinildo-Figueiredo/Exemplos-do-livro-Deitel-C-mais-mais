#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	const int size = 80;
	char buffer1[ size ];
	char buffer2[ size ];
	char buffer3[ size ];
	
	cout << "Insira uma frase:" << endl;
	cin >> buffer1;
	
	cout << "\nA string lida com cin foi:" << endl
		<< buffer1 << endl << endl;
	
	cin.ignore( 2 );
	//cin.putback( 'o' );
	cout << "\nValor ASCII do proximo caractere do fluxo: " << cin.peek() << endl;
	cin.get( buffer2, size );
	
	cout << "\nA string lida com cin.get foi:" << endl
		<< buffer2 << endl;
	
	cin.ignore();
	cout << "\nInsira outra frase:" << endl;
	cin.getline( buffer3, size );
	cout << "\nA string lida com cin.getline foi:" << endl
		<< buffer3 << endl;
	return 0;
}
