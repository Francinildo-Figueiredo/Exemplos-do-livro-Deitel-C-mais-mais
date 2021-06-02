#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int largura = 4;
	char sentence[ 10 ];
	
	cout << "Insira uma frase: " << endl;
	cin.width( 5 ); // insere somente 5 caracteres da frase
	
	// configura o campo, e então exibe caracteristicas com base nessa largura
	while ( cin >> sentence )
	{
		cout.width( largura++ );
		cout << sentence << endl;
		cin.width( 5 ); // insere mais 5 caracteres a partir da frase
	}
	
	return 0;
}
