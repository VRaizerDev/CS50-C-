//aplicacao capaz de calcular o consumo de combustivel em base o km
#include "./bibliotecaslocais/combustivel.h"
#include "./bibliotecaslocais/colors.h"

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf(" ------  Calculadora de Combustivel ------ \n");
    printf("Quantos KM voce vai andar?:");
    scanf("%d", &Kilometros);
    printf("Quantos KM seu carro faz com 1L?:");
    scanf("%f", &Litros);
    float klitros = Kilometros / Litros; 
    set_color(COLOR_GREEN); 
    
    printf("Para fazer %dKM, Voce vai gasta de combustivel: %.2fL\n", Kilometros, klitros);    
    system("pause");

    return 0;
}
