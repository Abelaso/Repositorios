#include <stdio.h>
#include <math.h>
#include "main.h"

int area(int V)
{

    float area_del_cilindro;
    float x;
    float y;
    float Abc;
    int V_Exp;
    float Exp;
float area_Total;
    Abc=3.1416;
    V_Exp=2;
    
x=cbrt((2*V)/(4*Abc));

Exp=pow((x),V_Exp);

y=(V/(Abc*Exp));

area_del_cilindro=(((2*Abc)*(Exp))+((2*Abc)*(x*y)));
area_Total=area_del_cilindro;

return (area_Total);


}