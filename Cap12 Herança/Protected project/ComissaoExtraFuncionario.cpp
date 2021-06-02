#include <iostream>
using std::cout;

#include "ComissaoExtraFuncionario.h"

ComissaoExtraFuncionario::ComissaoExtraFuncionario( const string &first, const string &last,
	const string &ssn, double sales, double rate, double salary )
	// chama explicitamente o construtor da classe básica
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
	// pode acessar dados protecteed da classe básica
	return salarioBase + ( porcentagemComissao * vendaBruta );
}

void ComissaoExtraFuncionario::imprimir() const
{
	cout << "Funcionário comissionado: " << getNome() << ' ' << getSobrenome()
		<< "\nNúmero de segurança social: " << getNumSeguranca()
		<< "\nVendas brutas semanais: " << getVendaBruta()
		<< "\nPorcentagem de comissão: " << getPorcentComissao()
		<< "\nSalário base: " << getSalarioBase();
}