#include <stdio.h>

int main()
{

    int n = 0;
    int contador = 0;
    printf("Ingrese el Numero\n");
    scanf("%d", &n);
    printf("Numero:%d\n", n);

    do
    {
        printf("Numero:%d\n", n);
        n = n / 10;
        contador++;

    } while (n > 0);

    printf("El numero tiene %d digitos\n", contador);

    return (0);
}