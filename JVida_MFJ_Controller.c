//JVida_MFJ_Controller.c
//Matheus Ferreira dos Santos Silvestre
//Filipi Mantelato Goncalves
//Joao Murilo de Amorim Mariano Santos

#include "JVida_MFJ_Model.h"
#include "JVida_MFJ_Controller.h"
#include "JVida_MFJ_View.h"

void criaMatriz()
{
	for(int i = 0; i < 60; i++)
	{
		for(int j = 0; j < 60; j++)
		{
			matJogo[i][j] = '.';
		}
	}
	
	apresentaMatriz(tamanhoMatrizUs());	
}