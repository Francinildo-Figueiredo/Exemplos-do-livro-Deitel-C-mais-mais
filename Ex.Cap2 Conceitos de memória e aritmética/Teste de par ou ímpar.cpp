/*

Utilizando o operador de m�dulo para decidir se o inteiro � par ou �mpar.

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
	
	// Como o if interpreta 0 como falso o comando ser� passado para o else e o n�mero ser� classificado como par.
	if( number % 2 ) // 4 % 2 => 0
		cout << "O n�mero informado � �mpar!!!" << endl;
	else
		cout << "O n�mero informado � par!!!" << endl;
	
	return 0;
}
