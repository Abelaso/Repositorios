#include <stdio.h>
#include "main.h"

int main()
{
float r;
float D;
float C;
float A;

r=0;

printf("Ingrese un radio:\n");
scanf("%f",&r);

D=Diameter(r);
C=Circumference (r);
A=area_circle (r);

 printf("Diameter of circle= %.2f units\nCircumference of circle= %.2f units\nArea of circle= %.2f sq.units \n",D,C,A); 

return 0;

} 
