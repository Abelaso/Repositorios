#include <stdio.h>

int main(void)
{
    int numero = 0;

    int i=1;

    printf("Ingrese hasta donde voy a contar\n");
    scanf("%d", &numero);

    printf("inicia conteo...\n");


    while (i<=numero)
    {
        printf ("%d\n",i);
        i++;

    }

printf ("Fin del conteo...\n");

return 0;

}