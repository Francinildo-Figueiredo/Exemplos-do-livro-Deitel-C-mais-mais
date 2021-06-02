#ifndef COMISSAOEXTRAFUNCIONARIO_H
#define COMISSAOEXTRAFUNCIONARIO_H

#include <string>
using std::string;

#include "ComissaoFuncionario.h"

class ComissaoExtraFuncionario : public ComissaoFuncionario
{
	public:
		ComissaoExtraFuncionario( const string &, const string &, const string &,
			double = 0.0, double = 0.0, double = 0.0 );
			
		void setSalarioBase( double );
		double getSalarioBase() const;
		
		double rendimento() const;
		void imprimir() const;
	private:
		double salarioBase;
};

#endif