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
	// lan�a uma excess�o ap�s a tentativa de divis�o por zero
	if ( denominator == 0 )
		throw runtime_error( "Tentativa de divis�o por zero" ); // termina a fun��o
	
	return static_cast< double >( numerator ) / denominator;
}

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	int number1;
	int number2;
	double result;
	
	cout << "Insira o numerador e logo ap�s o denominador da divis�o: ";
	
	while ( cin >> number1 >> number2 )
	{
		try
		{
			// O bloco try tenta realizar os c�lculos, caso aconte�a uma excess�o ele passa
			// a execuss�o para o bloco catch.
			result = quotient( number1, number2 );
			cout << "O quociente �: " << result << endl;
		}
		
		// O bloco catch recebe a excess�o, realiza o tratamento e retorna a execuss�o ao normal.
		catch( runtime_error &error )
		{
			cerr << "Ocorreu uma exce��o: "
				<< error.what() << endl;
		}
		
		cout << "Insira dois inteiros: ";
	}
	
	cout << endl;
	
	return 0;
}

