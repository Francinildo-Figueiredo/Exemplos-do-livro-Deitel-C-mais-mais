#ifndef TIMECASCATA_H
#define TIMECASCATA_H

class TimeCascata
{
	public:
		TimeCascata( int = 0, int = 0, int = 0 ); // construtor padrão
		
		// funções set
		TimeCascata &setTime( int, int, int );
		TimeCascata &setHour( int );
		TimeCascata &setMinute( int );
		TimeCascata &setSecond( int );
		
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
