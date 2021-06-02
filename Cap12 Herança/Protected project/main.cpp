#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <locale>

#include "ComissaoExtraFuncionario.h"

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	ComissaoExtraFuncionario empregado( "Bob", "Junior", "33-33-3333", 5000, .04, 300 );
	
	cout << fixed << setprecision( 2 );
	
	empregado.imprimir();
	cout << endl;
	
	cout << "\nRendimento do empregado: $" << empregado.rendimento() << endl;
	
	empregado.setSalarioBase( 1000 );
	
	cout << "\nInforma��es ap�s a muda�a no sal�riio base:\n" << endl;
	
	empregado.imprimir();
	
	cout << "\n\nRendimento do empregado: $" << empregado.rendimento() << endl;
	
	return 0;
}