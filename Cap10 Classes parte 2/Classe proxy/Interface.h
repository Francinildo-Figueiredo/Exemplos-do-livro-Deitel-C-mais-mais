#ifndef INTERFACE_H
#define INTERFACE_H

class Implementation;

class Interface
{
	public:
		Interface( int );
		void setValue( int );
		int getValue() const;
		~Interface();
	private:
		Implementation *ptr;
};

#endif
