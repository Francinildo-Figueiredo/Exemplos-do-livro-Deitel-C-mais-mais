#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>

using namespace std;

class Invoice
{
	public:
		Invoice( string = " ", string = " ", int = 0, int = 0 );
		void setIdentificationNumber( string );
		void setDescription( string );
		void setQuantityPourchased( int );
		void setPricePerItem( int );
		string getIdentificationNumber();
		string getDescription();
		int getQuantityPourchased();
		int getPricePerItem();
		int getInvoiceAmount();
	protected:
		string identificationNumber;
		string description;
		int quantityPourchased;
		int pricePerItem;
};

#endif
