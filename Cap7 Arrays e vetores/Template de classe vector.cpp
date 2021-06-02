
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <vector>
using std::vector;

#include <locale>

void outputVector( const vector< int > & );
void inputVector( vector< int > & );

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	vector< int > integers1( 7 );
	vector< int > integers2 ( 10 );
	
	cout << "O tamanho do vector integers1 é " << integers1.size() << "\nVector depois da inicialização: " << endl;
	outputVector( integers1 );
	
	cout << "O tamanho do vector integers2 é " << integers2.size() << "\nVector depois da inicialização: " << endl;
	outputVector( integers2 );
	
	//insere e imprime integers1 e integers2
	cout << "\nInsira 17 interiros: " << endl;
	inputVector( integers1 );
	inputVector( integers2 );
	
	cout << "\nDepois de inseridos o vector contém:\n" << "integers1:" << endl;
	outputVector( integers1 );
	cout << "integers2:" << endl;
	outputVector( integers2 );
	
	cout << "\nAvaliando: integers1 != integers2" << endl;
	
	if ( integers1 != integers2 )
		cout << "integers1 e integers2 não são iguais" << endl;
		
	vector< int > integers3( integers1 );
	
	cout << "O tamanho do vector integers3 é " << integers3.size() << "\nVector depois da inicialização: " << endl;
	outputVector( integers3 ); 
	
	cout << "Atribuindo integers2 a integers1:" << endl;
	integers1 = integers2;
	
	cout << "integers1:" << endl;
	outputVector( integers1 );
	cout << "integers2:" << endl;
	outputVector( integers2 );
	
	cout << "Avaliando: integers1 == integers2" << endl;
	
	if ( integers1 == integers2 )
		cout << "integers1 e integers2 são iguais" << endl;
		
	cout << "\nintegers1[5] é " << integers1[ 5 ];
	
	cout << "\n\nAtribuindo 1000 a integers1[5]" << endl;
	integers1[ 5 ] = 1000;
	cout << "integers1:" << endl;
	outputVector( integers1 );
	
	cout << "Tentativa de atribuir 1000 a integers1.at( 15 )" << endl;
	integers1.at( 15 ) = 1000; // ERRO: fora do entervalo
	
	return 0;
}

void outputVector( const vector< int > &array )
{
	size_t i;
	
	for ( i = 0; i < array.size(); i++ )
	{
		cout << setw( 12 ) << array[ i ];
		
		if ( ( i + 1 ) % 4 == 0 ) // 4 por linha
			cout << endl;
	}
	
	if ( i % 4 != 0 )
		cout << endl;
}

void inputVector( vector< int > &array )
{
	for ( size_t i = 0; i < array.size(); i++ )
		cin >> array[ i ];
}
