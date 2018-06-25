//Aluno: Chrystian Rodrigues Campos
//Matrícula: 11721ECP006

#include <stdio.h>

int som(int vetor[20], int aux)
{
	if(aux == 0)
		return 0;
	else 
	{
		int somatorio = 0;

		somatorio = soma(vetor, aux - 1);
		
		if(vetor[aux - 1] > 0)
		{
			somatorio =+ vetor[aux - 1];
		}
		
		return somatorio;
	}
}

float med(int soma, float termos)
{
	float resultado;

	resultado = soma / termos;

	return resultado;
}

void preenche(int vetor[20])
{
	int i = 0;
	for(i = 0; i < 20; i++)
	{
		vetor[i] = 0;
	}
}

int main ()
{
	int vetor[20], i, soma, numeros;
	float p;
	printf("Digite a quantidade de numeros inteiros: ");
	scanf("%d", &numeros);
	preenche(vetor);
	for(i = 0; i < numeros; i++)
	{
		printf("\nDigite o numero %d do vetor: ", i+1);
		scanf("%d", &vetor[i]);
		getchar();

		if(vetor[i] != 0)
		{
			p++;
		}
	}
	soma = (som(vetor, i));
	printf("\nA media eh: %.1f", med(soma, p));
	return 0;
}
