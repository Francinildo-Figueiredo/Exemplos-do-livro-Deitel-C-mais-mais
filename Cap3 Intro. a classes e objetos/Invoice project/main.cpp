#include <iostream>
#include <stdlib.h>
#include <locale>

#include "Invoice.h"

#define quant 2

using namespace std;

int main()
{
	setlocale( LC_ALL, "" );
	
	Invoice accounts[quant];
	
	string IN, desc;
	int quantPourchased, priceItem;
	
	for( int i = 0; i < quant; i++ )
	{
		cout << endl << "Informe o número de identificação da " << i + 1 << "ª fatura: ";
		getline( cin, IN );
		accounts[i].setIdentificationNumber( IN );
		cout << endl << "Informe a descrição da " << i + 1 << "ª fatura: ";
		getline( cin, desc );
		accounts[i].setDescription( desc );
		cout << endl << "Informe a quantidade de itens da " << i + 1 << "ª fatura: ";
		cin >> quantPourchased;
		accounts[i].setQuantityPourchased( quantPourchased );
		cout << endl << "Infome o preço do item da " << i + 1 << "ª fatura: ";
		cin >> priceItem;
		accounts[i].setPricePerItem( priceItem );
		cin.ignore();
	}
	
	system( "cls" );
	
	for( int i = 0; i < quant; i++)
	{
		cout << i + 1 << "º invoice data: " << endl << endl;
		cout << "Identification number of the " << i + 1 << "º invoice: " << accounts[i].getIdentificationNumber() << endl;
		cout << "Description of the " << i + 1 << "º invoice: " << accounts[i].getDescription() << endl;
		cout << "Quatity pourchased of items on the " << i + 1 << "º invoice: " << accounts[i].getQuantityPourchased() << endl;
		cout << "Price per item of the " << i + 1 << "º invoice: " << accounts[i].getPricePerItem() << endl << endl;
	}
	
	system( "pause" );
	system( "cls" );
	
	for( int i = 0; i < quant; i++)
	{
		cout << "Ivoice amount of the " << i + 1 << "º invoice: " << accounts[i].getInvoiceAmount() << endl;
	}
	
	return 0;
}
