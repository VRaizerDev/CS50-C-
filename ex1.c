// App que verifica o comprimento da variavel caso for maior que 20 caracteres retorna "nao aceitavel" && Caso for menor que 20 Caracteres retorna "Aceital"
// as definicoes de variaveis estao


#include "./bibliotecaslocais/numbers.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    printf("rodando\n");
    scanf("%s", carro); 
    size_t comprimento = strlen(carro); 
    if (strlen(carro) > Limites_Carro)
    {    

            printf("nao aceitavel\n\a"); 
            printf("comprimento = %d\n", comprimento); 
            system("pause"); 
    }
    else {
            printf("aceitavel\n");
            printf("comprimento = %d\n", comprimento); 
            system("pause");
    }
    return 0;
}
