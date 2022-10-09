#include <stdio.h>

int main(void)
{
    int numero = 0;

    printf("Ingrese hasta donde voy a contar\n");
    scanf("%d", &numero);

    printf("inicia conteo...\n");

    for (int i=1; i<=numero; numero--)
    {

        printf ("%d\n",numero);

    }

printf ("Fin del conteo...\n");

return 0;

}