#ifndef TIMECONST_H
#define TIMECONST_H

class TimeConst
{
	public:
		TimeConst( int = 0, int = 0, int = 0 ); // construtor padrão
		
		// funções set
		void setTime( int, int, int );
		void setHour( int );
		void setMinute( int );
		void setSecond( int );
		
		// funções get
		int getHour() const;
		int getMinute() const;
		int getSecond() const;
		
		void printUniversal() const;
		void printStandard();
	private:
		int hour; // 0 - 23 
		int minute; // 0 - 59
		int second; // 0 - 59
};

#endif
