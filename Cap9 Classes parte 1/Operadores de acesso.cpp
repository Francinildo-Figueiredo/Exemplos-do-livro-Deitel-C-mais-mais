// Demonstrando os operadores de acesso so membro de classe com . e ->

#include <iostream>
using std::cout;
using std::endl;

class Count
{
	public:
		
		void setX( int value )
		{
			x = value;
		}
		
		void print()
		{
			cout << x << endl;
		}
	
	private:
		int x;
};

int main()
{
	Count counter;
	Count *counterPtr = &counter; // cria um ponteiro para counter
	Count &counterRef = counter; // cria uma referência para counter
	
	cout << "Configurando e imprimindo o objeto pelo seu nome: ";
	counter.setX( 1 );
	counter.print();
	
	cout << "\nConfigurando e imprimindo o objeto referenciado: ";
	counterRef.setX( 2 );
	counterRef.print();
	
	cout << "\nConfigurando e imprimindo o objeto pelo ponteiro: ";
	counterPtr->setX( 3 );
	counterPtr->print();
	
	return 0;
}
