#include "Invoice.h"

Invoice::Invoice( string IN, string d, int qp, int ppi )
{
	identificationNumber = IN;
	description = d;
	setQuantityPourchased( qp );
	setPricePerItem( ppi );
}

void Invoice::setIdentificationNumber( string IN )
{
	identificationNumber = IN;
}

void Invoice::setDescription( string d )
{
	description = d;
}

void Invoice::setQuantityPourchased( int quantPour )
{
	if( quantPour < 0 )
		quantityPourchased = 0;
	else
		quantityPourchased = quantPour;
}

void Invoice::setPricePerItem( int ppi )
{
	if( ppi < 0 )
		pricePerItem = 0;
	else
		pricePerItem = ppi;
}

string Invoice::getIdentificationNumber()
{
	return identificationNumber;
}

string Invoice::getDescription()
{
	return description;
}

int Invoice::getQuantityPourchased()
{
	return quantityPourchased;
}

int Invoice::getPricePerItem()
{
	return pricePerItem;
}

int Invoice::getInvoiceAmount()
{
	return quantityPourchased * pricePerItem;
}
