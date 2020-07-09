/*

Utiizando os operadores de divisão inteira e módulo para separar os dígitos de um número inteiro.

O operador de divisão inteira retorna o valor inteiro da divisão, e descarta o a parte fracionária sem fazer arredondamentos. Já
o operador de módulo retorna o resto da divisão inteira.

*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <locale>

int main()
{
	setlocale(LC_ALL, "");
	
	int inteiro;
	
	cout << "Informe um número inteiro de cinco dígitos: ";
	cin >> inteiro; // inteiro == 12345
	
	int dezenaDeMilhar = inteiro / 10000;   // 12345 / 10000 => 1
	int milhar = (inteiro % 10000) / 1000;  // (12345 % 10000) / 1000 => 2345 / 1000 => 2
	int centena = (inteiro % 1000) / 100;   // (12345 % 1000) / 100 => 345 / 100 => 3
	int dezena = (inteiro % 100) / 10;      // (12345 % 100) / 10 => 45 / 10 => 4
	int unidade = (inteiro % 10);           // (12345 % 10) => 5
	
	cout << "Dezena de milhar: " << dezenaDeMilhar
		<< "\nMilhar: " << milhar
		<< "\nCentena: " << centena
		<< "\nDezena: " << dezena
		<< "\nUnidade: " << unidade << endl;
	return 0;
}
