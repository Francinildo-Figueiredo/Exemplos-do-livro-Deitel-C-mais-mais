#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
	vector < int > numbers;
	vector < string > names;
	
	int integer;
	
	vector < int >::const_iterator iteConst;
	
	for ( int i = 0; i < 2; i++ )
	{
		cin >> integer;
		numbers.push_back( integer );
	}
	
	for ( iteConst = numbers.begin(); iteConst != numbers.end(); iteConst++ )
	{
		cout << *iteConst;
	}
	
	
	
	return 0;
}
