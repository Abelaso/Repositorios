#include <stdio.h>
#include "main.h"

int primos(int n)
{
  int contador = 0;

  for (int i = 1; i <= n; i++)//Subira la cantidad del dividiendo a partir del numero ingresado
  {
    for (int d = 1; d <= i; d++)//subira la cantidad del divisor a partir del limite que llego el dividiendo
    {
      if (i % d == 0)//El dividiendo ira aumentando hasta llegar al numero anotado;y conforme este aumente 1,el divisor buscara todas posibilidades que den un residuo de 0 hasta llegar a la cantidad donde quedo el dividendo
      {

        contador++;//Cada que el residuo de la division del dividendo y el divisor de 0,habra un contador que ira aumentando de 1 en 1
      }
    }

    if (contador == 2)//El contador debe quedar exactamente una cantidad de 2 residuos de 0,sí se pasa o le falta este no imprimira el digito del dividendo (que en este caso es el numero anotado por la persona)
    {

      printf("Los numeros primos son:\n%d\n", i);
      contador = 0; //Despues de imprimir el numero que si es primo,el contador regresara a cero para aumentar 1 al dividendo y que el divisor se encargue de buscar residuos de 0 con el nuevo numero
    }
    else
    {
      contador = 0; //En caso de pasarse o faltar una cantidad exacta de 2 residuos de 0,el numero del dividendo sera descartado y seguira con el otro para seguir con el proceso
    }
  }

  return 0;
}
