#include <stdio.h>

int main()
{

    int n = 0;
    int contador = 0;
    printf("Ingrese el Numero\n");
    scanf("%d", &n);

    while (n>0)
    {
        n = n/10;
        printf("Numero:%d\n",n);
        contador++;
    }

    printf("El numero tiene %d digitos\n", contador);
    

    return (0);
}