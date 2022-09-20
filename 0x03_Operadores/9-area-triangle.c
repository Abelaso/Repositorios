#include <stdio.h>

float main ()
{
    float b=0;
    float h=0;
    float Area;

    printf("Ingrese la base del triangulo:\n");
scanf ("%f",&b);

printf ("Ingrese la altura del triangulo:\n");
scanf ("%f",&h);

Area=(h*b)/2;

printf ("El area del triangulo es=%.2f sq.units\n",Area);


return 0;

}