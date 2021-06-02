#include <iostream>
using std::cout;
using std::endl;

#include <locale>

#include "Name.h"

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	// utiliza o nome da classe e o operador de resolução de escopo binário para
	// acessar a função static number getCount
	cout << "Número de objetos antes da instanciação: " << Name::getCount() << endl << endl;
	
	// utiliza new para criar dinamicamente dois novos nomes
	// o operador new também chama o construtor do objeto
	Name nome1( "Bruskisfilde", "Silva" );
	Name *n2Ptr = new Name( "Jubileu", "Filho" );
	
	cout << "\nNúmero de objetos após a intanciação: " << nome1.getCount();
	
	cout << "\n\nNome 1: " << nome1.getFirstName() << ' ' << nome1.getLastName()
		<< "\nNome 2: " << n2Ptr->getFirstName() << ' ' << n2Ptr->getLastName() << "\n\n";
		
	delete n2Ptr; // desaloca memória
	n2Ptr = 0; // desconecta o ponteiro do espaço de armazenamento livre
	
	// utilizando novamente o operador de resolução de escopo binário
	cout << "\nNúmero de objetos após serem deletados: " << Name::getCount() << endl;
	
	return 0;
}
