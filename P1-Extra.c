//Nome: Chrystian Rodrigues Campos
//Matricula: 11721ECP006
//GitHub: chrysrodev

#include <stdio.h>

int main()
{
    int n = 0;
    char binario[256];
    
    printf("\n### Implementacao do algoritmo de Serie de Fibonacci ###");
    printf("\n###### Developed by: Chrystian Rodrigues Campos ########");
    printf("\n############### Matricula: 11721ECP006 #################\n");
    printf("\nInsira a quantidade de termos desejada da serie de fibonacci: ");
    scanf("%i", &n);
    
    printf("\nA Serie de Fibonacci com %i termos: ", n);

	for(int i = 0, a = 0, b = 1; i <= n; printf("%i ", a), b = a + b, a = b - a, i++);

	return 0;
}


