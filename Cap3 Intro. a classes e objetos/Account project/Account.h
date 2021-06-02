#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>

using namespace std;

class Account
{
	public:
		Account( int = 0 );
		void credit( int );
		void debit( int );
		int getBalance();
	private:
		int balance;
};

#endif
