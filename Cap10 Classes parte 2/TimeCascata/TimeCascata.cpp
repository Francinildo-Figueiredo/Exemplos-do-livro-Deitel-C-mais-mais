
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setfill;
using std::setw;

#include "TimeCascata.h"

TimeCascata::TimeCascata( int hr, int min, int sec )
{
	setTime( hr, min, sec );
}

TimeCascata &TimeCascata::setTime( int h, int m, int s )
{
	setHour( h );
	setMinute( m );
	setSecond( s );
	return *this;
}

TimeCascata &TimeCascata::setHour( int h )
{
	hour = ( h >= 0 && h < 24 ) ? h : 0;
	return *this;
}

TimeCascata &TimeCascata::setMinute( int m )
{
	minute = ( m >= 0 && m < 60 ) ? m : 0;
	return *this;
}

TimeCascata &TimeCascata::setSecond( int s )
{
	second = ( s >= 0 && s < 60 ) ? s : 0;
	return *this;
}

int TimeCascata::getHour() const
{
	return hour;
}

int TimeCascata::getMinute() const
{
	return minute;
}

int TimeCascata::getSecond() const
{
	return second;
}

void TimeCascata::printUniversal() const
{
	cout << setfill( '0' ) << setw( 2 ) << getHour()
		<< ":" << setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond();
}

void TimeCascata::printStandard()
{
	cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 ) << ":"
		<< setfill( '0' ) << setw( 2 ) << getMinute() << ":" << setw( 2 )
		<< getSecond() << ( hour < 12 ? " AM" : " PM" );
}
