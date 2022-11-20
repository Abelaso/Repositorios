#include <stdio.h>
#include<limits.h>



int main()
{
    int Cantidad_De_Elementos[500];
    int X_Cantidad_de_elementos_que_se_van_a_contar;
    int contador;
    int segundo_numero_mayor=0;
    int maximo=0;
   

    printf("Cantidad de elementos que va a tener el arreglo\n");
    scanf("%d", &X_Cantidad_de_elementos_que_se_van_a_contar);
    printf("Ingrese %d numeros diferentes o iguales\n", X_Cantidad_de_elementos_que_se_van_a_contar);

    for (contador = 0; contador < X_Cantidad_de_elementos_que_se_van_a_contar; contador++)
    {
        scanf("%d", &Cantidad_De_Elementos[contador]);
    }

    for (contador = 0; contador < X_Cantidad_de_elementos_que_se_van_a_contar; contador++)
    {
       if (maximo<=Cantidad_De_Elementos[contador])
       {
        maximo=Cantidad_De_Elementos[contador];
       }

    }

    for (contador = 0; contador < X_Cantidad_de_elementos_que_se_van_a_contar; contador++)
    {
        if (segundo_numero_mayor<Cantidad_De_Elementos[contador]&& Cantidad_De_Elementos[contador]!=maximo)
        {
            segundo_numero_mayor=Cantidad_De_Elementos[contador];
        }
    }


    printf ("El segundo valor mayor es: %d\n",segundo_numero_mayor);

    return 0;
}
