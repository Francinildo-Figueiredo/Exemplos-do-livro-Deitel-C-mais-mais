#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strlen;
using std::strcpy;

#include "Name.h"

int Name::count = 0;

int Name::getCount()
{
	return count;
}

Name::Name( const char * const first, const char * const last )
{
	firstName = new char[ strlen( first ) + 1 ];
	strcpy( firstName, first );
	
	lastName = new char[ strlen( last ) + 1 ];
	strcpy( lastName, last );
	
	count++; // incrementa contagem estática de empregados
	
	cout << "Construtor para " << firstName
		<< ' ' << lastName << " chamado." << endl;
}

Name::~Name()
{
	cout << "Destrutor deletando " << firstName << ' '
		<< lastName << endl;
	
	delete [] firstName;
	delete [] lastName;
	
	count--; // decrementa contagem estática de empregados
}

const char *Name::getFirstName() const
{
	// const antes do tipo de retorno impede que o cliente 
	// modifique dados private; o cliente deve copiar a string 
	// retornada antes de o destrutor excluir o armazenamento
	// para impedir um ponteiro indefinido
	return firstName;
}

const char *Name::getLastName() const
{
	return lastName;
}
