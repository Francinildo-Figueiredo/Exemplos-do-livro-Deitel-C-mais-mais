#ifndef TIME_H
#define TIME_H

class Time
{
	public:
		Time( int = 0, int = 0, int = 0 ); // construtor padr�o
		
		// fun��es set
		void setTime( int, int, int );
		void setHour( int );
		void setMinute( int );
		void setSecond( int );
		
		// fun��es get
		int getHour();
		int getMinute();
		int getSecond();
		
		void printUniversal();
		void printStandard();
	private:
		int hour; // 0 - 23 
		int minute; // 0 - 59
		int second; // 0 - 59
};

#endif
