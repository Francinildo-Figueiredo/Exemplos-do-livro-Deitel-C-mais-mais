#include <iostream>
using std::cout;
using std::endl;

#include "TimeCascata.h"

int main()
{
	TimeCascata tc;
	
	// chamadas de função em cascata
	tc.setHour( 18 ).setMinute( 30 ).setSecond( 22 );
	
	cout << "Universal time: ";
	tc.printUniversal();
	
	cout << "\nStandart time: ";
	tc.printStandard();
	
	cout << "\n\nNew standard time: ";
	
	tc.setTime( 20, 20, 20 ).printStandard();
	cout << endl;
	
	return 0;
}
