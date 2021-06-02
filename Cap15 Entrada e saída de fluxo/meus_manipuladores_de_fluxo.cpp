#include <iostream>
using std::cout;
using std::flush;
using std::ostream;

// manipulador bell (usando a sequência de escape \a)
ostream& bell( ostream& output )
{
	return output << '\a'; // emite um bip de sistema
}

// manipulador carriageReturn (usando a sequência de escape \r)
ostream& carriageReturn( ostream& output )
{
	return output << '\r'; // emite o retorno de carro
}

// manipulador tab (usando a sequência de escape \t)
ostream& tab( ostream& output )
{
	return output << '\t'; // emite tab
}

// manipulador endLine (usando a sequência de escape \n e a função-membro flush)
ostream& endLine( ostream& output )
{
	return output << '\n' << flush; // emite um fim de linha do tipo endl
}

int main()
{
	// usando os manipuladores tab e ensLine
	cout << "Testando o manipulador tab:" << endLine
		<< 'a' << tab << 'b' << tab << 'c' << endLine;
	
	cout << "Testando os manipuladores carriageReturn e bell:" << endLine
		<< "123456789";
		
	cout << bell;
	
	cout << carriageReturn << "98765" << endLine;
	
	return 0;
}
