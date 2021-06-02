#include "TimeConst.h"

int main()
{
	TimeConst wakeup( 6, 54, 0 );
	const TimeConst noon( 12, 0, 0 ); // objeto constante
	
	                       // OBJETO       FUNÇÃO-MEMBRO
	wakeup.setHour( 18 );  // não-const    não-const
	
	noon.setHour( 15 );    // const        não-const // ERRO
	 
	wakeup.getHour();      // não-const    const
	
	noon.getMinute();      // const        const
	noon.printUniversal(); // const        const
	
	noon.printStandard();  // const        não-const // ERRO
	return 0;
}
