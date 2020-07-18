/* 

A ordem de precedência dos operadores em C++ é idêntica à da aritmética. A única diferença é que ao invés de utilizarmos
chaves e conchetes, utilizamos apenas parênteses.

Ordem de precedência dos operadores aritméticos em C++:

( )   Avaliados primeiro. Se estiverem uns dentro dos outros a preferência será do mais interno, já se estiverem uns ao lado dos outros
	  a preferência será feita da esquerda para a direita.
	  
*, /, %   Avaliado em segundo lugar. Se houver vários serão avaliados da esquerda para a direita.

+, -   Avaliado em terceiro lugar. Se hover vários serão avaliados da esquerda para a direita.

*/

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int x;
	
	x = 7 + 3 * 6 / 2 - 1; // => 7 + 18 / 2 - 1 => 7 + 9 - 1 => 16 - 1 => 15 
	
	cout << "x = " << x << endl; // saída: x = 15
	
	x = 2 % 2 + 2 * 2 - 2 / 2; // 0 + 2 * 2 - 2 / 2 => 0 + 4 - 2 / 2 => 0 + 4 - 1 => 4 - 1 => 3
	
	cout << "x = " << x << endl; // saída: x = 3
	
	x = ( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) ); // ( 3 * 9 * ( 3 + ( 27 / 3 ) ) ) => ( 3 * 9 * ( 3 + 9 ) )
											   // => ( 3 * 9 * 12 ) => ( 27 * 12 ) => ( 324 ) => 324
	
	cout << "x = " << x << endl; // saída: x = 324
	
	cout << "*********           ***             *              *" << endl;
	cout << "*       *         *     *          ***            * *" << endl;
	cout << "*       *        *       *        *****          *   *" << endl;
	cout << "*       *        *       *          *           *     *" << endl;
	cout << "*       *        *       *          *          *       *" << endl;
	cout << "*       *        *       *          *           *     *" << endl;
	cout << "*       *        *       *          *            *   *" << endl;
	cout << "*       *         *     *           *             * *" << endl;
	cout << "*********           ***             *              *" << endl;
	
	return 0;
}
