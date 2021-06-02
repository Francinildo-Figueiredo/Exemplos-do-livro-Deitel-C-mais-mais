#include "Analysis.h"

void Analysis::processExameResults()
{
	int aprovados = 0;
	int reprovados = 0;
	int contador = 1;
	int resultado;
	
	cout << "Digite 1 para aprovado ou 2 para reprovado.\n\n"; 
	
	while( contador <= 10 )
	{	
		cout << "Informe o resultado do teste do " << contador << "º aluno: ";
		cin >> resultado;
		
		if( resultado == 1 )
			aprovados++;
		else if( resultado == 2 )
			reprovados++;
		else
		{
			cout << "\nResultado de teste inválido!!!\n" << endl;
			contador--;
		}
			
		contador++;
	}
	
	system( "cls" );
	
	cout << "Alunos aprovados: " << aprovados << endl;
	cout << "Alunos reprovados: " << reprovados << endl << endl;
	
	if( aprovados > 8 )
		cout << "Aumentar mensalidade escolar." << endl;
}
