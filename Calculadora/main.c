#include <stdio.h>
#include "main.h"

int main()
{
    int n1;
    int n2;

    n1=0;
    n2=0;

    float total;

     char opcion;

    printf("Menu\nElija el tipo de operador:\n");
    printf("a- Suma \n");
    printf("b- Resta\n");
    printf("c- Multiplicacion\n");
    printf("d- Division\n");
    printf("e- Modulo\n");

     scanf("%c",&opcion);

printf("\nIngrese los dos numeros: \n");
scanf("%d%d",&n1,&n2);

switch (opcion)
{
case 'a':
total=suma (n1,n2);
    break;
case 'b':
total= resta(n1,n2);
    break;
    case 'c':
total= multiplicacion(n1,n2);
    break;
    case 'd':
total= division(n1,n2);
    break;
    case 'e':
total= modulo(n1,n2);
    break;

default:
printf ("Opcion no valida\n");

    return (1);

}

     printf ("El total es: %f\n",total);
}
    