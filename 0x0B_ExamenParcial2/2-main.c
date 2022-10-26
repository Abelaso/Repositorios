#include <stdio.h>

int main(void)
{
    char L, M, X, J, V, S, D;
    char l, m, x, j, v, s, d;
    char dia;
    

    float Duraciondelallamada;

    float hora;
    float min;

    float Tarifa;

    int decision=0;

    printf("Ingrese el día que se hizo la llamada: \n");
    scanf("%c", &dia);

    printf("Ingrese la duración de la llamadas en minutos\n");
    scanf("%f", &Duraciondelallamada);

    printf("Ingrese la hora en la que se hizo la llamada\nPrimero la hora\nY luego los minutos\n");
    scanf("%f%f", &hora, &min);

    if (hora>=8 && hora<=20 )
        {
            printf ("Entra en el rango de lunes y viernes\n");
           
        }
        else 
        {
            printf ("No entra en el rango de lunes y viernes\n");
        }

    if  (dia=='L' || dia=='l' || dia=='M' || dia=='m' || dia=='X' || dia=='x' || dia=='J' || dia=='j' || dia=='V' || dia=='v')
    { 
        if (hora>=8 && hora<=20 )
        {
            Tarifa=Duraciondelallamada * 0.60;
           
        }
        else 
        {
            Tarifa=Duraciondelallamada * 0.25;
           

        }

    }
    if  (dia=='S' || dia=='s' || dia=='D' || dia=='d')
    {
        Tarifa=Duraciondelallamada * 0.15;
       
    }

    printf ("La tarifa es:%f\n",Tarifa);

    printf("Desea continuar?\nEscriba 1 para continuar\nEscriba cualquier otro numero para salir\n");
scanf ("\n%d",&decision);

while (decision==1)
{
    printf("Ingrese el día que se hizo la llamada: \n");
    scanf("%s", &dia);

    printf("Ingrese la duración de la llamadas en minutos\n");
    scanf("%f", &Duraciondelallamada);

    printf("Ingrese la hora en la que se hizo la llamada\nPrimero la hora\nY luego los minutos\n");
    scanf("%f%f", &hora, &min);

    if (hora>=8 && hora<=20 )
        {
            printf ("Entra en el rango de lunes y viernes\n");
           
        }
        else 
        {
            printf ("No entra en el rango de lunes y viernes\n");
        }

    if  (dia=='L' || dia=='l' || dia=='M' || dia=='m' || dia=='X' || dia=='x' || dia=='J' || dia=='j' || dia=='V' || dia=='v')
    { 
        if (hora>=8 && hora<=20 )
        {
            Tarifa=Duraciondelallamada * 0.60;
           
        }
        else 
        {
            Tarifa=Duraciondelallamada * 0.25;
           

        }

    }
    if  (dia=='S' || dia=='s' || dia=='D' || dia=='d')
    {
        Tarifa=Duraciondelallamada * 0.15;
       
    }

    printf ("La tarifa es:%f\n",Tarifa);

    printf("Desea continuar?\nEscriba 1 para continuar\nEscriba cualquier otro numero para salir\n");
scanf ("\n%d",&decision);

}

    return 0;

}


    

  