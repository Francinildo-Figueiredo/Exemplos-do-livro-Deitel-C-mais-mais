#include "TimeConst.h"

int main()
{
	TimeConst wakeup( 6, 54, 0 );
	const TimeConst noon( 12, 0, 0 ); // objeto constante
	
	                       // OBJETO       FUN��O-MEMBRO
	wakeup.setHour( 18 );  // n�o-const    n�o-const
	
	noon.setHour( 15 );    // const        n�o-const // ERRO
	 
	wakeup.getHour();      // n�o-const    const
	
	noon.getMinute();      // const        const
	noon.printUniversal(); // const        const
	
	noon.printStandard();  // const        n�o-const // ERRO
	return 0;
}
