#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <cmath>
using std::sqrt;

#include <locale>

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	double root2 = sqrt( 2 );
	int places; // precis�o, que varia de 0-9
	
	cout << "Raiz quadreda de 2, com a precis�o de 0-9. Por meio da precis�o sa fun��o ios_base:" << endl;
	
	cout << fixed; // usa nota��o de ponto fixo
	
	// exibe a raiz quadrada utilizando a precis�o da fun��o ios_base
	for( places = 0; places <= 9; places++ )
	{
		cout.precision( places );
		cout << root2 << endl;
	}
	
	cout << "\nPrecis�o por meio da stream manipuladora setprecision:" << endl;
	
	for( places = 0; places <= 9; places++ )
		cout << setprecision( places ) << root2 << endl;
		
	return 0;
}
