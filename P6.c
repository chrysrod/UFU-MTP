//Aluno: Chrystian Rodrigues Campos
//Matrícula: 11721ECP006

#include <stdio.h>

int soma(int *termo1, int *termo2)
{	
	return (*termo2) + ((termo2==termo1) ? 0 : soma(termo1, termo2 - 1));
}
	
float divide(float termo1, float termo2)
{	
	return termo2/termo1;
}

int main ()
{
	int indice = 0, tamanho = 0, vetor[20], *termo1, *termo2;
	float j = 0, k = 0;
	
	printf("\nInsira um numero (5-20) que sera o tamanho do vetor: ");
	do
	{	
		scanf("%d", &tamanho);
	}while(tamanho < 5 || tamanho > 20);
	
	do{ 
		vetor[indice] = 0; indice++; 
	}while(indice < tamanho);

	indice = 0;
	
	while(indice < tamanho)
	{	
		printf("\nDigite o valor %d do vetor: ", indice+1);
		scanf("%d", &vetor[indice]);	indice++;	}
		termo1 = vetor;	
		termo2 = vetor + tamanho - 1;
		indice=tamanho;
    	j = float(soma(termo1, termo2));
    	k = float(indice);
		printf("\n\n Media = %.1f", divide(indice, j));
		return 0;
	}
}