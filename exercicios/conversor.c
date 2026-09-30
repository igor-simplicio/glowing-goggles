#include <stdio.h>

int main(void)
{
    float quilometros;
    float metros;

    printf("Conversor de unidades\n");
    printf("Introduza a distancia em quilometros: ");
    if (scanf("%f", &quilometros) != 1)
    {
        printf("Valor invalido.\n");
        return 1;
    }

    metros = quilometros * 1000;
    printf("\n%.2f km correspondem a %.2f metros\n", quilometros, metros);
    return 0;
}
