#include <stdio.h>

int main(void)
{
    int n, i, l;

    printf("Ingrese numero: \n");
    scanf("%d", &n);

    for (l = n / 2; l <= n; l += 2)
    {
        for (i = 1; i < (n - l); i += 2)
        {
            printf(" ");
        }
        for (i = 1; i <= l; i++)
        {
            printf("*");
        }
        for (i = 1; i <= (n - l); ++i)
        {
            printf(" ");
        }
        for (i = 1; i <= l; i++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (i = 1; i <= n; i++)
    {
        for (l = 1; l <= i; l++)
        {
            printf(" ");
        }

        for (l = 1; l <= 2 * (n - i) - 1; l++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
    return 0;
}
