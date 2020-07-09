/*

Utilizando o operador de módulo para decidir se o inteiro é par ou ímpar.

*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <locale>

int main()
{
	setlocale(LC_ALL, "");
	
	int number;
	
	cout << "Informe um inteiro: ";
	cin >> number; // number == 4
	cout << endl;
	
	// Como o if interpreta 0 como falso o comando será passado para o else e o número será classificado como par.
	if( number % 2 ) // 4 % 2 => 0
		cout << "O número informado é ímpar!!!" << endl;
	else
		cout << "O número informado é par!!!" << endl;
	
	return 0;
}
