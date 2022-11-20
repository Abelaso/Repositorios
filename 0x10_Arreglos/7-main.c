#include <stdio.h>
#include<limits.h>



int main()
{
    int Cantidad_De_Elementos[500];
    int X_Cantidad_de_elementos_que_se_van_a_contar;
    int contador;
    int impar=0;
    int par=0;
   

    printf("Cantidad de elementos que va a tener el arreglo\n");
    scanf("%d", &X_Cantidad_de_elementos_que_se_van_a_contar);
    printf("Ingrese %d numeros diferentes o iguales\n", X_Cantidad_de_elementos_que_se_van_a_contar);

    for (contador = 0; contador < X_Cantidad_de_elementos_que_se_van_a_contar; contador++)
    {
        scanf("%d", &Cantidad_De_Elementos[contador]);
    }

      for (contador = 0; contador < X_Cantidad_de_elementos_que_se_van_a_contar; contador++)
    {
        if (Cantidad_De_Elementos[contador]%2==0)
        {
            par++;
        }
        if (Cantidad_De_Elementos[contador]%2==1)
        {
            impar++;
        }
    }
    printf("Los numeros pares totales son: %d\n",par);
    printf("Los numeros impares totales son: %d\n",impar);

    return 0;
}