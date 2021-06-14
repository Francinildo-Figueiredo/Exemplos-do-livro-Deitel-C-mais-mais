#include <iostream>
using std::cout;
using std::endl;
using std::left;
using std::right;
using std::internal;
using std::showpos;

#include <iomanip>
using std::setw;

int main()
{
	int x = 12345;
	
	// exibe x alinhado a direita (padrão)
	cout << "Padrão, alinhamento a direita:\n"
		<< setw( 10 ) << x;
	
	// utiliza o manipulador left para exibir x alinhado a esquerda
	cout << "\n\nUtilizando a função-membro left para alinhar x a esquerda:\n"
		<< left << setw( 10 ) << x;
	
	cout << "\n\nUtilizando a função-membro right para realinhar x a direita:\n"
		<< right << setw( 10 ) << x << endl;
	
	// exibe o valor com espaçamento interno e sinal de adição
	cout << internal << showpos << setw( 10 ) << x << endl;
	return 0;
}
