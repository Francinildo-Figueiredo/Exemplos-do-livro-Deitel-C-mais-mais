#include <iostream>
using std::cout;
using std::endl;

#include <locale>

#include "Name.h"

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	// utiliza o nome da classe e o operador de resolu��o de escopo bin�rio para
	// acessar a fun��o static number getCount
	cout << "N�mero de objetos antes da instancia��o: " << Name::getCount() << endl << endl;
	
	// utiliza new para criar dinamicamente dois novos nomes
	// o operador new tamb�m chama o construtor do objeto
	Name nome1( "Bruskisfilde", "Silva" );
	Name *n2Ptr = new Name( "Jubileu", "Filho" );
	
	cout << "\nN�mero de objetos ap�s a intancia��o: " << nome1.getCount();
	
	cout << "\n\nNome 1: " << nome1.getFirstName() << ' ' << nome1.getLastName()
		<< "\nNome 2: " << n2Ptr->getFirstName() << ' ' << n2Ptr->getLastName() << "\n\n";
		
	delete n2Ptr; // desaloca mem�ria
	n2Ptr = 0; // desconecta o ponteiro do espa�o de armazenamento livre
	
	// utilizando novamente o operador de resolu��o de escopo bin�rio
	cout << "\nN�mero de objetos ap�s serem deletados: " << Name::getCount() << endl;
	
	return 0;
}
