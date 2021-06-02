#ifndef DATE_H
#define DATE_H

class Date
{
	public:
		Date( int = 1, int = 1, int = 1900 );
		void print() const;
		~Date();
	private:
		int mounth; // 1-12
		int day; // 1-31
		int year; // qualquer ano
		
		int checkDay( int ) const;
};

#endif
