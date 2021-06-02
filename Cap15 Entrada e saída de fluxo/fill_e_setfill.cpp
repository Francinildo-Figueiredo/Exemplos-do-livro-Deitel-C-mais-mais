#include <iostream>
using std::cout;
using std::endl;
using std::hex;
using std::dec;
using std::left;
using std::right;
using std::internal;
using std::showbase;

#include <iomanip>
using std::setfill;
using std::setw;

int main()
{
	int x = 10000;
	
	// exibe x com base
	cout << "Exibe x com base, apartir daqui:\n" << showbase << setw( 10 ) << x << endl;
	
	// exibe x com alinhamento a esquerda
	cout << "\nExibe x com alinhamento a esquerda:\n" << left << setw( 10 ) << x << endl;
	
	// exibe x como hexadecimal com alinhamento interno
	cout << "\nExibe x em hexadecimal com alinhamento interno:\n" << internal
		<< setw( 10 ) << hex << x << endl << endl;
	
	// exibe x utilizando caracteres de preenchimento (à direita)
	cout << "\nExibe x utilizando caracteres de preenchimento (a direita):\n" << right;
	cout.fill( '*' );
	cout << setw( 10 ) << dec << x << endl;
	
	// exibe x utilizando caracteres de preenchimento (alinhamento a esquerda)
	cout << "\nExibe x utilizando caracteres de preenchimento (alinhamento a esquerda):\n"
		<< left << setw( 10 ) << setfill( '%' ) << x << endl;
	
	// exibe x utilizando caracteres de preechimmento (alinhamento interno)
	cout << "\nExibe x utilizando caracteres de preechimmento (alinhamento interno):\n"
		<< internal << setw( 10 ) << setfill( '^' ) << hex << x << endl;
		
	return 0;
}
