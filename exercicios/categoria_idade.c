#include <stdio.h>

int main(void)
{
    int idade;

    printf("Introduza a sua idade: ");
    if (scanf("%d", &idade) != 1 || idade < 0)
    {
        printf("Idade invalida.\n");
        return 1;
    }

    if (idade < 13)
    {
        printf("Categoria: Crianca\n");
    }
    else if (idade < 18)
    {
        printf("Categoria: Adolescente\n");
    }
    else if (idade < 65)
    {
        printf("Categoria: Adulta\n");
    }
    else
    {
        printf("Categoria: Senior\n");
    }

    return 0;
}
