#include <stdio.h>
#include "main.h"

int main (void)
{
    int numero;
    printf ("Ingrese un numero\n");
    scanf ("%d",&numero);
    primos (numero);
    return (0);
}