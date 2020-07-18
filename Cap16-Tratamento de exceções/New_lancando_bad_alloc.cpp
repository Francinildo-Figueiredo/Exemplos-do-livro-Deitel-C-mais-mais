#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

#include <new>
using std::bad_alloc;

int main()
{
	double *ptr[ 50 ];
	
	try
	{
		// Tentando alocar 50 milh�es de posi��es em ptr[i], new lan�a bad_alloc caso n�o consiga alocar na mem�ria.
		for ( int i = 0; i < 50; i++ )
		{
			ptr[ i ] = new double[ 50000000 ]; // pode lan�ar exce��o
			cout << "Alocados 50 mih�es de posi��es em ptr[ " << i << "]\n";
		}
	}
	
	// Tratando a excess�o e retomando a execuss�o normalmente
	catch ( bad_alloc &memoryAllocationException )
	{
		cerr << "Ocorreu uma exce��o: "
			<< memoryAllocationException.what() << endl;
	}
	return 0;
}
