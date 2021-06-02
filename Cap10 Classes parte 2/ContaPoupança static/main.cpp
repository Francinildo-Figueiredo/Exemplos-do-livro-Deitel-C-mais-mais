#include <iostream>
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::fixed;

#include <stdexcept>
using std::runtime_error;

#include <iomanip>
using std::setprecision;

#include <locale>

#include "ContaPoupanca.h"

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	ContaPoupanca poupador1( "Francinildo Figueiredo", 2000.00 );
	ContaPoupanca poupador2( "Xeroxvaldison da silva", 3000.00 );
	
	cout << fixed << setprecision( 2 );
	
	cout << "Poupador1:\n";
	poupador1.imprimeDados();
	
	cout << "\nPoupador2:\n";
	poupador2.imprimeDados();
	
	double taxa;
	
	cout << "\nInsira uma nova taxa de juros anual: ";
	cin >> taxa;
	
	try
	{
		ContaPoupanca::modificaJurosAnual( taxa );
		cout << "\nPoupador1:\n";
		cout << "Juros mensal: " << poupador1.calculaJurosMensal() << endl;
		poupador1.imprimeDados();
		
		cout << "\nPoupador2:\n";
		cout << "Juros mensal: " << poupador2.calculaJurosMensal() << endl;
		poupador2.imprimeDados();
	}
	
	catch ( runtime_error &error )
	{
		cerr << "\nOcorreu uma exceção: "
			<< error.what() << endl;
	}
	
	
	
	return 0;
}
