#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setfill;
using std::setw;

#include "TimeConst.h"

TimeConst::TimeConst( int hr, int min, int sec )
{
	setTime( hr, min, sec );
}

void TimeConst::setTime( int h, int m, int s )
{
	setHour( h );
	setMinute( m );
	setSecond( s );
}

void TimeConst::setHour( int h )
{
	hour = ( h >= 0 && h < 24 ) ? h : 0;
}

void TimeConst::setMinute( int m )
{
	minute = ( m >= 0 && m < 60 ) ? m : 0;
}

void TimeConst::setSecond( int s )
{
	second = ( s >= 0 && s < 60 ) ? s : 0;
}

int TimeConst::getHour() const
{
	return hour;
}

int TimeConst::getMinute() const
{
	return minute;
}

int TimeConst::getSecond() const
{
	return second;
}

void TimeConst::printUniversal() const
{
	cout << setfill( '0' ) << setw( 2 ) << getHour()
		<< ":" << setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond();
}

void TimeConst::printStandard()
{
	cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 ) << ":"
		<< setfill( '0' ) << setw( 2 ) << getMinute() << ":" << setw( 2 )
		<< getSecond() << ( hour < 12 ? " AM" : " PM" );
}
