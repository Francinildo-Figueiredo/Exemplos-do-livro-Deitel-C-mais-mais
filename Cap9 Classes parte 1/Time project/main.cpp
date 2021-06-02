#include <iostream>
using std::cout;
using std::endl;

#include <locale>

#include "Time.h"

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	Time t1; // argumentos inicializados pelo construtor padrão
	Time t2( 2 ); // especificando inicialização da hora
	Time t3( 21, 34 ); // hora e minutos especificados
	Time t4( 12, 25, 42 ); // hora, minuto e segundos especificados
	Time t5( 27, 74, 99 ); // valores inválidos
	
	cout << "inicializado pelo construtor:\n\nt1: todos os argumentos por default\n  ";
	t1.printUniversal();
	cout << "\n  ";
	t1.printStandard();
	
	cout << "\n\nt2: hora especificada\n  ";
	t2.printUniversal();
	cout << "\n  ";
	t2.printStandard(); 
	
	cout << "\n\nt3: hora e minuto especificado\n  ";
	t3.printUniversal();
	cout << "\n  ";
	t3.printStandard(); 
	
	cout << "\n\nt4: hora, minuto e segundo especificado\n  ";
	t4.printUniversal();
	cout << "\n  ";
	t4.printStandard(); 
	
	cout << "\n\nt5: Todos os valores especificados inválidos\n  ";
	t5.printUniversal();
	cout << "\n  ";
	t5.printStandard(); 
	
	return 0;
}
