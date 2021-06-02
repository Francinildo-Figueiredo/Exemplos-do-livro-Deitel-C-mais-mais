#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::dec;
using std::hex;
using std::oct;
using std::uppercase;

#include <iomanip>
using std::setbase;

int main()
{
	int number;
	
	cout << "Insira um número decimal: ";
	cin >> number;
	
	cout << number << " --> hexadecimal: " << uppercase << hex << number << endl;
	
	cout << dec << number << " --> octal: " << oct << number << endl;
	
	cout << setbase(10) << number << " --> decimal: " << number << endl; 
	
	return 0;
}
