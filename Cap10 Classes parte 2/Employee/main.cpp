#include <iostream>
using std::cout;
using std::endl;

#include <locale>

#include "Employee.h"

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	Date birth( 7, 24, 1949 );
	Date hire( 3, 12, 1988 );
	Employee manager( "Bob", "Blue", birth, hire );
	
	cout << endl;
	manager.print();
	
	cout << "\nData teste para o construtor com valores inválidos:\n";
	Date lastDayOff( 14, 35, 1994 );
	cout << endl;
	
	return 0;
}
