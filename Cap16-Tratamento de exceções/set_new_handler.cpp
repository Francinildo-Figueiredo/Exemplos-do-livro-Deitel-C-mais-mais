#include <iostream>
using std::cerr;
using std::cout;

#include <new>
using std::set_new_handler;

#include <cstdlib>
using std::abort;

// trata a falha de alocação de memória
void customNewHandler()
{
	cerr << "customNewHandler foi chamado";
	abort();
}

int main()
{
	double *ptr[ 50 ];
	
	// especifica que customNewHandler deve ser chamado em
	// caso de falha na alocação de memória
	set_new_handler( customNewHandler );
	
	for ( int i = 0; i < 50; i++ )
	{
		ptr[ i ] = new double[ 500000000 ];
		cout << "Alocados 50000000 doubles em ptr[ " << i << " ]\n";
	}
	return 0;
}
