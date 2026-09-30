#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int soma = 0;

    printf("Introduza um numero inteiro positivo: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("O numero tem de ser um inteiro positivo.\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        soma = soma + i;
    }

    printf("\nA soma dos primeiros %d numeros e: %d\n", n, soma);
    return 0;
}
