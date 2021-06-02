#include "GradeBook.h"

GradeBook::GradeBook( string name, string iName )
{
	setCourseName( name );
	setInstructorName( iName );
}

void GradeBook::setCourseName( string name )
{
	if( name.length() <= 25 )
			courseName = name;

	else
	{
		courseName = name.substr( 0, 25 );
	
		cout << "O nome \"" << name << "\" exedeu o tamanho máximo de 25 caracteres.\n"
			<< "O nome do curso foi limitado aos 25 primeiros caracteres !!!\n" << endl;
	}	

}

void GradeBook::setInstructorName( string name )
{
	if( name.length() <= 25 )
			instructorName = name;

	else
	{
		instructorName = name.substr( 0, 25 );
	
		cout << "O nome \"" << name << "\" exedeu o tamanho máximo de 25 caracteres.\n"
			<< "O nome do curso foi limitado aos 25 primeiros caracteres !!!\n" << endl;
	}	

}

string GradeBook::getCourseName()
{
	return courseName;
}

string GradeBook::getInstructorName()
{
	return instructorName;
}

void GradeBook::displayMenssage()
{
	cout << "Bem vindo ao gradebook do " << getCourseName() << "!\n" 
		<< "do instrutor " << getInstructorName() << "." << endl; 
}




