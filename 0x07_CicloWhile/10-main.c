#include <stdio.h>

int main(void)
{
    int numero = 0;
    int suma=0;
    int i=1;

    printf("Ingrese el limite\n");
    scanf("%d", &numero);

    do 
    {
                i++;

 suma = suma + i;


    }
   while (i<=numero);

   suma=suma-numero;

    printf ("La suma de los numeros de 1 al %d es:\n%d\n",numero,suma);

return 0;

}