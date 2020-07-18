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
		// Tentando alocar 50 milhões de posições em ptr[i], new lança bad_alloc caso não consiga alocar na memória.
		for ( int i = 0; i < 50; i++ )
		{
			ptr[ i ] = new double[ 50000000 ]; // pode lançar exceção
			cout << "Alocados 50 mihões de posições em ptr[ " << i << "]\n";
		}
	}
	
	// Tratando a excessão e retomando a execussão normalmente
	catch ( bad_alloc &memoryAllocationException )
	{
		cerr << "Ocorreu uma exceção: "
			<< memoryAllocationException.what() << endl;
	}
	return 0;
}
