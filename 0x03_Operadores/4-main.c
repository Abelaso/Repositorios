#include <stdio.h>
#include "main.h"

int main()
{
    float cm;
    float m;
    float km;

    cm=0;

    printf("Enter length in centimeter:\n");
scanf("%f",&cm);

m=cm_a_m (cm);
km=cm_a_km (cm);

 printf("Length in Meter= %.2f m\nLength in Kilometer= %.2f km\n",m,km);

 return 0;

}