#include <stdio.h>

int main(void)
{
    int numero = 0;
    int contador = 0;
    int suma=0;

    printf("Ingrese el rango para evaluar los numeros impares\n");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++)
    {
        if (i % 2 == 1)
        {
            contador++;
        }
        if (contador == 1)
        {

           suma = suma + i;
            contador = 0;
        }
        else
        {
            contador = 0; 
        }
    }
    printf ("La suma de los numeros impares de 1 al %d es:\n%d\n",numero,suma);

return 0;
}