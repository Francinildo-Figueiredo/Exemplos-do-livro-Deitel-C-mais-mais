#include <iostream>
using std::cin;
using std::cerr;
using std::cout;
using std::endl;

#include <stdexcept>
using std::runtime_error;

#include <locale>

double quotient( int numerator, int denominator ) throw ( runtime_error )
{
	// lança uma excessão após a tentativa de divisão por zero
	if ( denominator == 0 )
		throw runtime_error( "Tentativa de divisão por zero" ); // termina a função
	
	return static_cast< double >( numerator ) / denominator;
}

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	int number1;
	int number2;
	double result;
	
	cout << "Insira o numerador e logo após o denominador da divisão: ";
	
	while ( cin >> number1 >> number2 )
	{
		try
		{
			// O bloco try tenta realizar os cálculos, caso aconteça uma excessão ele passa
			// a execussão para o bloco catch.
			result = quotient( number1, number2 );
			cout << "O quociente é: " << result << endl;
		}
		
		// O bloco catch recebe a excessão, realiza o tratamento e retorna a execussão ao normal.
		catch( runtime_error &error )
		{
			cerr << "Ocorreu uma exceção: "
				<< error.what() << endl;
		}
		
		cout << "Insira dois inteiros: ";
	}
	
	cout << endl;
	
	return 0;
}

