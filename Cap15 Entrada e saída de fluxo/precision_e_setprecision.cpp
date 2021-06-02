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
	int places; // precisão, que varia de 0-9
	
	cout << "Raiz quadreda de 2, com a precisão de 0-9. Por meio da precisão sa função ios_base:" << endl;
	
	cout << fixed; // usa notação de ponto fixo
	
	// exibe a raiz quadrada utilizando a precisão da função ios_base
	for( places = 0; places <= 9; places++ )
	{
		cout.precision( places );
		cout << root2 << endl;
	}
	
	cout << "\nPrecisão por meio da stream manipuladora setprecision:" << endl;
	
	for( places = 0; places <= 9; places++ )
		cout << setprecision( places ) << root2 << endl;
		
	return 0;
}
