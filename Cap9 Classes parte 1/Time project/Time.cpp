
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setfill;
using std::setw;

#include "Time.h"

Time::Time( int hr, int min, int sec )
{
	setTime( hr, min, sec );
}

void Time::setTime( int h, int m, int s )
{
	setHour( h );
	setMinute( m );
	setSecond( s );
}

void Time::setHour( int h )
{
	hour = ( h >= 0 && h < 24 ) ? h : 0;
}

void Time::setMinute( int m )
{
	minute = ( m >= 0 && m < 60 ) ? m : 0;
}

void Time::setSecond( int s )
{
	second = ( s >= 0 && s < 60 ) ? s : 0;
}

int Time::getHour()
{
	return hour;
}

int Time::getMinute()
{
	return minute;
}

int Time::getSecond()
{
	return second;
}

void Time::printUniversal()
{
	cout << setfill( '0' ) << setw( 2 ) << getHour()
		<< ":" << setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond();
}

void Time::printStandard()
{
	cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 ) << ":"
		<< setfill( '0' ) << setw( 2 ) << getMinute() << ":" << setw( 2 )
		<< getSecond() << ( hour < 12 ? " AM" : " PM" );
}
