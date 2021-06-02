#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha;
using std::noboolalpha;

int main()
{
	bool valorBooleano = true;
	
	cout << "Valor booleano: " << valorBooleano << endl;
	
	cout << "Valor booleano (apos utilizar o boolalpha): "
		<< boolalpha << valorBooleano << endl;
	
	cout << "\nModifindo o valor booleano...";	
	valorBooleano = false;
	cout << noboolalpha;
	
	cout << "\n\nValor booleano agora: " << valorBooleano << endl;
	
	cout << "Valor booleano agora (apos utilizar o boolalpha): "
		<< boolalpha << valorBooleano << endl << endl;
	
	return 0;
}
