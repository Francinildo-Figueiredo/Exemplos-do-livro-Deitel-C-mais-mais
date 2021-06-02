#include <iostream>
#include <stdlib.h>
#include <locale.h>

#include "GradeBook.h"

using namespace std;

int main()
{
	setlocale( LC_ALL, "");
	
	GradeBook gradebook1( "Curso de férias", "Bruskisfilde" );
	
	gradebook1.displayMenssage();
	
	cout << endl;
	
	GradeBook gradebook2( "Curso para fazer uma boa prova de monitoria", "Jubriscleibison" );
	
	cout << endl << "O nome inicial do gradebook1 é: " << gradebook1.getCourseName() << "\nO nome inicial do gradebook2 é: "
	 << gradebook2.getCourseName() << endl;
	 
	cout << endl << "O nome do instrutor do gradebook1 é: " << gradebook1.getInstructorName() 
		<< "\nO nome inicial do instrutor do gradebook2 é: "<< gradebook2.getInstructorName() << endl;
	 
	return 0;	 
}
