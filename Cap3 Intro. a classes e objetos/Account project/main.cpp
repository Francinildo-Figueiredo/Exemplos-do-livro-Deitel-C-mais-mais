#include <iostream>
#include <stdlib.h>
#include <locale>

#include "Account.h"

using namespace std;

int main()
{
	setlocale( LC_ALL, "");
	
	Account conta( 1000 );
	
	int operation, aux = 0;
	
	while( aux == 0 )
	{
		cout << "|\\    /|   |-----   |\\   |   |       |  " << endl;
		cout << "| \\  / |   |_____   | \\  |   |       |  " << endl;
		cout << "|  \\/  |   |        |  \\ |    -     -   " << endl;
		cout << "|      |   |_____   |   \\|     |___|    " << endl << endl;
		
		cout << "1 - Depositar" << endl;
		cout << "2 - Sacar " << endl;
		cout << "3 - Ver saldo " << endl;
		cout << "0 - Encerrar sessão " << endl;
		cout << "Escolha uma operação: ";
		cin >> operation;
		system( "cls" );
		
		switch( operation )
		{
			case 1:
				{
					int depositedAmount;
					cout << "Informe o valor a ser depositado: ";
					cin >> depositedAmount;
					conta.credit( depositedAmount );
					system( "cls" );
					break;
				}
			case 2:
				{
					int withdrawnAmount;
					cout << "Informe o valor a ser retirado: ";
					cin >> withdrawnAmount;
					conta.debit( withdrawnAmount );
					system( "pause" );
					system( "cls" );
					break;
				}
			case 3:
				{
					cout << "Saldo total: " << conta.getBalance() << endl;
					system( "pause" );
					system( "cls" );
					break;
				}
			case 0:
				{
					cout << "Encerrando sessão..." << endl;
					aux = 1;
					break;
				}
			default:
				{
					cout << "Operação incorreta!!! " << endl;
					break;
				}
		}
	}
	
	
	
	return 0;
}
