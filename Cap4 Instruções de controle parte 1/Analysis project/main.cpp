#include <iostream>
#include <locale>

#include "Analysis.h"

using namespace std;

int main()
{
	setlocale( LC_ALL, "" );
	
	Analysis teste;
	
	teste.processExameResults();
	
	return 0;
}
