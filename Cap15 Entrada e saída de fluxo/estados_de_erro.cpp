#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <locale>

int main()
{
	setlocale( LC_ALL, "portuguese" );
	
	int inteiro;
	
	// exibe resultados de fun��es cin
	cout << "Antes de uma opera��o de entrada incorreta:"
		<< "\ncin.rdstate(): " << cin.rdstate() // retorna um inteiro que corresponde a um estado de fluxo espec�fico
		<< "\n    cin.eof(): " << cin.eof() // retorna true se o fim do arquivo for encontrado
		<< "\n   cin.fail(): " << cin.fail() // dado digitado incomp�tivel com o valor esperado
		<< "\n    cin.bad(): " << cin.bad() // ouve uma falha de leitura com perda de dados
		<< "\n   cin.good(): " << cin.good() // retorna verdadeiro se nenhum dos casos anteriores ocorrer
		<< "\n\nEsperava um inteiro, mas insira um caractere: ";
		
	cin >> inteiro; // insere um caractere
	cout << endl;
	
	// exibe resultados de fun��es cin depois da entrada inv�lida
	cout << "Depois de uma opera��o de entrada incorreta:"
		<< "\ncin.rdstate(): " << cin.rdstate()
		<< "\n    cin.eof(): " << cin.eof()
		<< "\n   cin.fail(): " << cin.fail()
		<< "\n    cin.bad(): " << cin.bad()
		<< "\n   cin.good(): " << cin.good() << endl << endl;
		
	cin.clear(); // limpa o fluxo
	
	// exibe resultados de fun��es cin depois de limpar cin
	cout << "Depois de cin.clear():" << "\ncin.fail(): " << cin.fail()
		<< "\ncin.good(): " << cin.good() << endl; 
	
	return 0;
}
