#include <iostream>
using std::cout;
using std::endl;
using std::showpoint;

int main()
{
	// exibe os valores double no formato de fluxo-padrão
	cout << "Antes de utilizar showpoint" << endl
		<< "9.9900 imprime como: " << 9.9900 << endl
		<< "9.9000 imprime como: " << 9.9000 << endl
		<< "9.0000 imprime como: " << 9.0000 << endl;
	
	// exibe o valor double depois de showpoint
	cout << showpoint
		<< "Depois de utilizar showpoint" << endl
		<< "9.9900 imprime como: " << 9.9900 << endl
		<< "9.9000 imprime como: " << 9.9000 << endl
		<< "9.0000 imprime como: " << 9.0000 << endl;
	
	return 0;
}
