#ifndef NAME_H
#define NAME_H

class Name
{
	public:
		Name( const char * const, const char * const );
		~Name();
		const char *getFirstName() const;
		const char *getLastName() const;
		
		// função-menbro static
		static int getCount(); // retorna número de objetos instanciados
	private:
		char *firstName;
		char *lastName;
		
		static int count; // número de objetos instanciados
};

#endif
