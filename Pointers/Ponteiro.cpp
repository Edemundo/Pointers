// Programa com ponteiros
#include "Meu.h"
//
// Entry point
//
void main(void)
{
	int i,				// indexador generico
		x,				// valor para multiplicar v1
		nMaiorValor,	// maior valor do vetor1
		vet1[10],		// vetor 1 de inteiras
		vet2[10];		//vetor 2 de inteiras
	for(i = 0; i < 10; i++)
	{
		cout << "Digite o valor a ocupar o indice " << i << " do vetor1: ";
		cin >> vet1[i];
	}
	cout << "Vetor completo: ";
	for(i = 0; i < 10; i++)
	{
		cout << vet1[i] << " ";
	}
	cout << endl;
	PAUSA;
	LIMPAR_TELA;

	nMaiorValor = inverte_vetor(vet1, &vet2[9], 10);
	cout << endl;
	PAUSA;
	LIMPAR_TELA;

	cout << "Informe o valor de X a ser multiplicado no vetor1: ";
	cin >> x;
	multiplica_escalar(vet1, vet2, x, 10);
	LIMPAR_TELA;
	for(i = 0; i < 10; i++)
		cout << vet2[i] << " ";
	PAUSA;
} // main