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
	
	char sentence[] = "Essa sentença tem 5 tokens";
	char *tokenPtr;
	
	cout << "Tamanho da sentence: " << strlen( sentence )
		<< "\nA string a ser tokenizada é: \"" << sentence
		<< "\"" << "\n\nE os tokens são:\n\n";
	
	// inicia a tokenização da frase
	tokenPtr = strtok( sentence, " " );
	
	// continua tokenizando ate a frase tornar-se NULL
	while( tokenPtr != NULL )
	{
		cout << tokenPtr << '\n';
		tokenPtr = strtok( NULL, " " ); // obtém o próximo token
	}
	
	cout << "\nNovo tamanho da sentence: " << strlen( sentence )
		<< "\nDepois de strtok, sentence = " << sentence
		<< "\nSegundo token da sentence = " << sentence << endl;
	return 0;
}
