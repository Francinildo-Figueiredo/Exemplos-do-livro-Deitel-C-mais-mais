#ifndef NAME_H
#define NAME_H

class Name
{
	public:
		Name( const char * const, const char * const );
		~Name();
		const char *getFirstName() const;
		const char *getLastName() const;
		
		// fun��o-menbro static
		static int getCount(); // retorna n�mero de objetos instanciados
	private:
		char *firstName;
		char *lastName;
		
		static int count; // n�mero de objetos instanciados
};

#endif
