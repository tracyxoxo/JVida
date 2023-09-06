//JVida_MFJ_View.c
//Matheus Ferreira dos Santos Silvestre
//Filipi Mantelato Goncalves
//Joao Murilo de Amorim Mariano Santos

#include "JVida_MFJ_View.h"

int tamanhoMatrizUs()
{
	int tamanhoMatriz;
	
	printf("  Digite o tamanho do mundo desejado(entre 10 e 60): ");
	scanf("%d", &tamanhoMatriz);
	
	return tamanhoMatriz;
	
}	

void apresentaMatriz(int x)
{
	printf("%d", x);
}