#ifndef COMISSAOFUNCIONARIO_H
#define COMISSAOFUNCIONARIO_H

#include <string>
using std::string;

class ComissaoFuncionario
{
	public:
		ComissaoFuncionario( const string &, const string &, const string &,
			double = 0.0, double = 0.0 );
			
		void setNome( const string & );
		string getNome() const;
		
		void setSobrenome( const string & );
		string getSobrenome() const;
		
		void setNumSeguranca( const string & );
		string getNumSeguranca() const;
		
		void setVendaBruta( double );
		double getVendaBruta() const;
		
		void setPorcentComissao( double );
		double getPorcentComissao() const;
		
		double rendimento() const;
		void imprimir() const;
	protected:
		string nome;
		string sobrenome;
		string numeroSeguranca;
		double vendaBruta;
		double porcentagemComissao;
};

#endif