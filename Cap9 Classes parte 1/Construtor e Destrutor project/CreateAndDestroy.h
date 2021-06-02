#include <string>
using std::string;

#ifndef CREATEANDDESTROY_H
#define CREATEANDDESTROY_H

class CreateAndDestroy
{
	public:
		CreateAndDestroy( int, string );
		~CreateAndDestroy();
	private:
		int objectID;
		string message;
};

#endif
