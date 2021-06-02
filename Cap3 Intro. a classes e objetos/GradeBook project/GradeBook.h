#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
	public:
		GradeBook( string = " ", string = " ");
		void setCourseName( string );
		void setInstructorName( string );
		string getInstructorName( );
		string getCourseName( );
		void displayMenssage( );
	private:
		string courseName;
		string instructorName;
};

#endif
