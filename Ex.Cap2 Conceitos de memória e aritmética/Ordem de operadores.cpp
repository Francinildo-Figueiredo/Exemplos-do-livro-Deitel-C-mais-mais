/* 

A ordem de preced�ncia dos operadores em C++ � id�ntica � da aritm�tica. A �nica diferen�a � que ao inv�s de utilizarmos
chaves e conchetes, utilizamos apenas par�nteses.

Ordem de preced�ncia dos operadores aritm�ticos em C++:

( )   Avaliados primeiro. Se estiverem uns dentro dos outros a prefer�ncia ser� do mais interno, j� se estiverem uns ao lado dos outros
	  a prefer�ncia ser� feita da esquerda para a direita.
	  
*, /, %   Avaliado em segundo lugar. Se houver v�rios ser�o avaliados da esquerda para a direita.

+, -   Avaliado em terceiro lugar. Se hover v�rios ser�o avaliados da esquerda para a direita.

*/

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int x;
	
	x = 7 + 3 * 6 / 2 - 1; // => 7 + 18 / 2 - 1 => 7 + 9 - 1 => 16 - 1 => 15 
	
	cout << "x = " << x << endl; // sa�da: x = 15
	
	x = 2 % 2 + 2 * 2 - 2 / 2; // 0 + 2 * 2 - 2 / 2 => 0 + 4 - 2 / 2 => 0 + 4 - 1 => 4 - 1 => 3
	
	cout << "x = " << x << endl; // sa�da: x = 3
	
	x = ( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) ); // ( 3 * 9 * ( 3 + ( 27 / 3 ) ) ) => ( 3 * 9 * ( 3 + 9 ) )
											   // => ( 3 * 9 * 12 ) => ( 27 * 12 ) => ( 324 ) => 324
	
	cout << "x = " << x << endl; // sa�da: x = 324
	
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
