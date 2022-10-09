#include <stdio.h>

int main(void)
{
    int numero = 0;
    int suma=0;

    printf("Ingrese el limite\n");
    scanf("%d", &numero);


    for (int i=1; i<=numero;i++)
    {

        suma = suma + i;

    }

printf ("La suma de los numeros de 1 al %d es:\n%d\n",numero,suma);

return 0;

}