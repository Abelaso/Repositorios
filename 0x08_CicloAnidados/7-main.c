#include <stdio.h>

int main(void)
{
    int N, i, j;

    printf("Ingrese el numero para determinar el tamaño de la cruz :\n");
    scanf("%d", &N);

    for (i = 1; i <= N * 2 - 1; i++)
    {
        if (i != N)
        {
            for (j = 1; j <= N; j++)
            {
                if (j == N)
                {
                    printf("*");
                }
                printf(" ");
            }
        }
            else
            {
                for (j = 1; j <= N * 2 - 1; j++)
                {
                    printf("*");
                }
            }
        
        printf("\n");
    }
    return (0);
}