#include <iostream>
using std::cout;
using std::endl;

#include <locale>

#include <cstring>
using std::strtok;
using std::strlen;

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	char sentence[] = "Essa senten�a tem 5 tokens";
	char *tokenPtr;
	
	cout << "Tamanho da sentence: " << strlen( sentence )
		<< "\nA string a ser tokenizada �: \"" << sentence
		<< "\"" << "\n\nE os tokens s�o:\n\n";
	
	// inicia a tokeniza��o da frase
	tokenPtr = strtok( sentence, " " );
	
	// continua tokenizando ate a frase tornar-se NULL
	while( tokenPtr != NULL )
	{
		cout << tokenPtr << '\n';
		tokenPtr = strtok( NULL, " " ); // obt�m o pr�ximo token
	}
	
	cout << "\nNovo tamanho da sentence: " << strlen( sentence )
		<< "\nDepois de strtok, sentence = " << sentence
		<< "\nSegundo token da sentence = " << sentence << endl;
	return 0;
}
