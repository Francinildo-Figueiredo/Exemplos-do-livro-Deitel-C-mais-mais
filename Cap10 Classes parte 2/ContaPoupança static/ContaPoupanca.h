#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

class ContaPoupanca
{
	public:
		ContaPoupanca( const char * const, double = 0.0 );
		void setSaldo( double );
		double getSaldo() const;
		char *getNomePoupador() const;
		double calculaJurosMensal();
		void imprimeDados() const;
		
		static void modificaJurosAnual( double );
		static double getJurosAnual();
	private:
		char * nomePoupador;
		double saldo;
		
		static double jurosAnual;
};

#endif
