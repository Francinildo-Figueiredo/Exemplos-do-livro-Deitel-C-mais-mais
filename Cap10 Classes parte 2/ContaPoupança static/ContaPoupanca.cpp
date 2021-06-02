#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strlen;
using std::strcpy;

#include <stdexcept>
using std::runtime_error;

#include "ContaPoupanca.h"

double ContaPoupanca::jurosAnual = 0.03;

void ContaPoupanca::modificaJurosAnual( double rate )
{
	if ( rate > 1.0 && rate <= 100 )
		jurosAnual = rate / 100;
	else
		if ( rate >= 0.0 )
			jurosAnual = rate;
	else
		throw runtime_error( "Taxa de juros anual negativa" );
 }

double ContaPoupanca::getJurosAnual()
{
	return jurosAnual;
}

ContaPoupanca::ContaPoupanca( const char * const name, double balance )
{
	nomePoupador = new char[ strlen( name ) + 1 ];
	strcpy( nomePoupador, name );
	setSaldo( balance );
}

void ContaPoupanca::setSaldo( double balance )
{
	saldo = balance > 0.0 ? balance : 0.0;
}

double ContaPoupanca::getSaldo() const
{
	return saldo;
}

char *ContaPoupanca::getNomePoupador() const
{
	return nomePoupador;
}

double ContaPoupanca::calculaJurosMensal()
{
	double result;
	result = ( jurosAnual * saldo ) / 12;
	saldo += result;
	return result;
}

void ContaPoupanca::imprimeDados() const
{
	cout << "Nome do poupador: " << getNomePoupador()
		<< "\nTaxa de Juros anual: " << getJurosAnual() * 100 << " %"
		<< "\nSaldo: " << getSaldo() << endl;
}
