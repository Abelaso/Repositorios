#include <stdio.h>
#include <math.h>

int main()

{
    int a,b,c;
    float area;
    float perimetro;
   

    printf("Cuales son los numeros de los lados del triangulo?\n");
    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);

    if (a+b>c && a+c>b && b+c>a)
    {
        float semiperimetro;
        perimetro=a+b+c;
        semiperimetro=(a+b+c)/2;
        area=(cbrt ((semiperimetro)*(semiperimetro-a)*(semiperimetro-b)*(semiperimetro-c)));
        printf ("Perimetro:%f\nsemiperimetro:%f\narea:%f\n",perimetro,semiperimetro,area);
    }
    else
    {
printf ("No son validos los datos\n");
    }


    return 0;
}