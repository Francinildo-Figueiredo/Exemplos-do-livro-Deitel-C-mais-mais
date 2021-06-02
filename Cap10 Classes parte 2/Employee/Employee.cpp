#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strlen;
using std::strncpy;

#include "Employee.h"
#include "Date.h"

Employee::Employee( const char * const first, const char * const last,
	const Date &dateOfBirth, const Date &dateOfHire )
	: birthDate( dateOfBirth ), hireDate( dateOfHire )
{
	
	// copia primeiro para firstName e certifica-se que ele se ajuste
	int length = strlen( first );
	length = ( length < 25 ? length : 24 );
	strncpy( firstName, first, length );
	firstName[ length ] = '\0';
	
	// copia por último para lastName e certica-se de que ele se ajuste
	length = strlen( last );
	length = ( length < 25 ? length : 24 );
	strncpy( lastName, last, length );
	lastName[ length ] = '\0';
	
	// gera saída do objeto Employee para mostrar quanto o construtor é chamado
	cout << "Objeto Employee construtor: "
		<< firstName << ' ' << lastName << endl;
}

void Employee::print() const
{
	cout << lastName << ", " << firstName << " Contratado: ";
	hireDate.print();
	cout << "  Nascimento: ";
	birthDate.print();
	cout << endl;
}

Employee::~Employee()
{
	cout << "Objeto Employee destrutor: "
		<< lastName << ", " << firstName << endl;
}
