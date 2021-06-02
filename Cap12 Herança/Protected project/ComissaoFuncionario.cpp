#include <iostream>
using std::cout;

#include "ComissaoFuncionario.h"

ComissaoFuncionario::ComissaoFuncionario( const string &first, const string &last, const string &ssn,
	double sales, double rate )
{
	nome = first;
	sobrenome = last;
	numeroSeguranca = ssn;
	setVendaBruta( sales );
	setPorcentComissao( rate );
}

void ComissaoFuncionario::setNome( const string &first )
{
	nome = first;
}

string ComissaoFuncionario::getNome() const
{
	return nome;
}

void ComissaoFuncionario::setSobrenome( const string &last )
{
	sobrenome = last;
}

string ComissaoFuncionario::getSobrenome() const
{
	return sobrenome;
}

void ComissaoFuncionario::setNumSeguranca( const string &ssn )
{
	numeroSeguranca = ssn;
}

string ComissaoFuncionario::getNumSeguranca() const
{
	return numeroSeguranca;
}

void ComissaoFuncionario::setVendaBruta( double sales )
{
	vendaBruta = ( sales < 0.0 ) ? 0.0 : sales;
}

double ComissaoFuncionario::getVendaBruta() const
{
	return vendaBruta;
}

void ComissaoFuncionario::setPorcentComissao( double rate )
{
	porcentagemComissao = ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0;
}

double ComissaoFuncionario::getPorcentComissao() const
{
	return porcentagemComissao;
}

double ComissaoFuncionario::rendimento() const
{
	return getVendaBruta() * getPorcentComissao();
}

void ComissaoFuncionario::imprimir() const
{
	cout << "Funcionário comissionado: " << getNome() << ' ' << getSobrenome()
		<< "\nNúmero de segurança social: " << getNumSeguranca()
		<< "\nVendas brutas semanais: " << getVendaBruta()
		<< "\nPorcentagem de comissão: " << getPorcentComissao();
}