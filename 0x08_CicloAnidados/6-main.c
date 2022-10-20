#include <stdio.h>

int main(void)
{
    int numero, l, j;

    printf("Ingrese el numero para determinar el del diamante :\n");
    scanf("%d", &numero);

    for (l = 1; l <= numero; l++)
    {
        for (j = l; j <= numero; j++)
        {
            printf("*");
        }
        for (j = 1; j <= (2 * l - 2); j++)
        {
            printf(" ");
        }
        for (j = l; j <= numero; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (l = 1; l <= numero; l++)
    {

        for (j = 1; j <= l; j++)
        {
            printf("*");
        }
        for (j = ((2 * l) - 2); j < ((2 * numero) - 2); j++)
        {
            printf(" ");
        }

        for (j = 1; j <= l; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return (0);
}
