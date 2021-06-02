#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
using std::scientific;
using std::uppercase;

int main()
{
	double x = 0.001234567;
	double y = 1.946e9;
	
	// exibe X e Y no formato padrão
	cout << "Formato padrao:\n" << x << '\t' << y << endl;
	
	// exibe X e Y no formato científico
	cout << "\nFormato cientifico:\n" << scientific << uppercase << x << '\t' << y << endl;
	
	// exxibe X e Y no formato fixo
	cout << "\nFormato fixo:\n" << fixed << x << '\t' << y << endl;
	
	return 0;
}
