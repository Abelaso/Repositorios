#include <stdio.h>

int main()
{
    int numero;
    float ultimodigito;
    float primerodigito;
    int Sumatotal = 0;

    printf("Ingrese los digitos\n");
    scanf("%d\n", &numero);

     ultimodigito = numero % 10;

    while (numero >= 1)
    {
        numero = numero / 10;
    }
    primerodigito = numero;

    Sumatotal = primerodigito + ultimodigito;

    printf("%d\n", Sumatotal);

    return 0;
}