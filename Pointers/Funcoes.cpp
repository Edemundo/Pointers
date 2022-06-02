// Include
#include "Meu.h"
// Funções do programa
//
//Função que inverte um vetor e o armazena em outro
int inverte_vetor(int *v1, int *v2, int n)
{
	int i;	// indexador e contador
	cout << "Vetor Invertido: ";
	for(i = 0; i < 10; i++)
	{
		*(v2 - i) = *(v1 + i);
		cout << *(v2 - i) << " ";
		if(i == 0)
			continue;
		else
		{
			if(*(v1 + i) > *(v1 + i - 1))
				n = *(v1 + i);
		}
	}
	return n;
}

// Função que multiplica o vetor por um valor X
void multiplica_escalar(int *v1, int *v2, int x, int n)
{
	int i;
	for(i = 0; i < 10; i++)
		*(v2 + i) = *(v1 + i) * x;
	return;
}