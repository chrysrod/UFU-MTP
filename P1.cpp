//Nome: Chrystian Rodrigues Campos
//Matricula: 11721ECP006
//GitHub: chrysrodev

#include <stdio.h>

int main()
{
    int estado = 0, i = 0;
    char binario[256];
    
    printf("\n#### Implementacao do algoritmo de Automato Finito ####");
    printf("\n###### Developed by: Chrystian Rodrigues Campos #######");
    printf("\n############### Matricula: 11721ECP006 ################\n");
    printf("\nInsira um numero em binario para verificar se e multiplo de 3: ");
    scanf("%s", &binario);
      
	while(binario[i] != '\0')
    {
        if(binario[i] == '0')
        {
            if(estado == 0);
            else if(estado == 1) estado = 2;
            else if(estado == 2) estado = 1;
            i++;
        }
        else if(binario[i] == '1')
        {
            if(estado == 0) estado = 1;
            else if(estado == 1) estado = 0;
            else if(estado == 2);
            i++;
        }
        else
        {
            printf("\nNumero inserido nao e um numero binario");
            return 0;
        }
    }
    
    if(estado == 0) printf("\n O numero %s e multiplo de 3", binario);
    else printf("\n O numero binario %s nao e multiplo de 3", binario);
    return 0;
}

