#include <stdio.h>
#include "main.h"

int main()
{
    int consumo;
    int cobro;

    char opcion;

    printf("Elija la tarifa en la que se encuentra:\n");
    printf("a- Tarifa1 \n");
    printf("b- Tarifa1A\n");
    printf("c- Tarifa1B\n");
    printf("d- Tarifa1C\n");
    printf("e- Tarifa1D\n");
    printf("f- Tarifa1E\n");
    printf("g- Tarifa1F\n");

    scanf("%c",&opcion);

printf("\nIngrese su consumo mensual en KWh: \n");
scanf("%d",&consumo);

switch (opcion)
{
case 'a':
cobro= Tarifa1(consumo);
    break;
case 'b':
cobro= Tarifa1A(consumo);
    break;
    case 'c':
cobro= Tarifa1B(consumo);
    break;
    case 'd':
cobro= Tarifa1C(consumo);
    break;
    case 'e':
cobro= Tarifa1E(consumo);
    break;
    case 'f':
cobro= Tarifa1D(consumo);
    break;
    case 'g':
cobro= Tarifa1F(consumo);
    break;
default:
printf ("Opcion no valida\n");

    return (1);

}

     printf ("El costo a pagar por KWh es de: %.2d\n",cobro);
}