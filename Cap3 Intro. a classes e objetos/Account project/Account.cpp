#include "Account.h"

Account::Account( int b )
{
	if( b >= 0 )
		balance = b;
	else
	{
		balance = 0;
		
		cout << "Saldo inicial inválido!!!\n\nIfome um saldo positivo: ";
	}
}

void Account::credit( int add )
{
	balance += add;
}

void Account::debit( int rem )
{
	if( balance < rem )
		cout << "O debito exedeu o saldo da conta!!!\n" << endl;
	else
	{
		balance - rem;
	}
}

int Account::getBalance()
{
	return balance;
}
