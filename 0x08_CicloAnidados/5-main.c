#include <stdio.h>

int main(void)
{
    int numero = 0;

    printf("Ingrese el numero para determinar el tamaño del medio diamante :\n");
    scanf("%d", &numero);

    for (int l = 1; l <= numero; l++)
    {

        for (int i = 1; i <= l; i++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int l = numero-1; l >= 0; l--)
    {

        for (int i = l; i >= 1; i--)
        {
            printf("*");
        }

        printf("\n");
    }


    return (0);
}
