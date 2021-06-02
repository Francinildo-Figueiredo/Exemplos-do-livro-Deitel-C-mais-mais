#include <iostream>
using std::cout;

#include "ComissaoExtraFuncionario.h"

ComissaoExtraFuncionario::ComissaoExtraFuncionario( const string &first, const string &last,
	const string &ssn, double sales, double rate, double salary )
	// chama explicitamente o construtor da classe b�sica
	: ComissaoFuncionario( first, last, ssn, sales, rate )
{
	setSalarioBase( salary );
}

void ComissaoExtraFuncionario::setSalarioBase( double salary )
{
	salarioBase = ( salary < 0.0 ) ? 0.0 : salary;
}

double ComissaoExtraFuncionario::getSalarioBase() const
{
	return salarioBase;
}

double ComissaoExtraFuncionario::rendimento() const
{
	// pode acessar dados protecteed da classe b�sica
	return salarioBase + ( porcentagemComissao * vendaBruta );
}

void ComissaoExtraFuncionario::imprimir() const
{
	cout << "Funcion�rio comissionado: " << getNome() << ' ' << getSobrenome()
		<< "\nN�mero de seguran�a social: " << getNumSeguranca()
		<< "\nVendas brutas semanais: " << getVendaBruta()
		<< "\nPorcentagem de comiss�o: " << getPorcentComissao()
		<< "\nSal�rio base: " << getSalarioBase();
}