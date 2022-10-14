#include <stdio.h>

int main(void)
{
    int numero = 0;
    int contador = 0;
    int i = 1;

    printf("Ingrese el rango para evaluar los numeros impares\n");
    scanf("%d", &numero);

    while (i < numero)
    {
        i++;
        if (i % 2 == 1)
        {
            contador++;
        }
        if (contador == 1)
        {

            printf("%d\n", i);
            contador = 0;
        }
        else
        {
            contador = 0; 
        }
        
    }

     return 0;
}