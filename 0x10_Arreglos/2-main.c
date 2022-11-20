#include <stdio.h>

int main()
{
    int Cantidad_De_Elementos [500];
    int X_Cantidad_de_elementos_que_se_van_a_contar;
    int contador;

    printf("Cantidad de elementos que va a tener el arreglo\n");
    scanf("%d",&X_Cantidad_de_elementos_que_se_van_a_contar);
    printf ("Ingrese %d numeros diferentes o iguales\n",X_Cantidad_de_elementos_que_se_van_a_contar);

    for (contador=0;contador<X_Cantidad_de_elementos_que_se_van_a_contar;contador++)
    {
        scanf ("%d",&Cantidad_De_Elementos[contador]);
    }

    printf ("Numeros ingresados para la matriz\n");

     for (contador=0;contador<X_Cantidad_de_elementos_que_se_van_a_contar;contador++)
    {
        printf ("%d.\n",Cantidad_De_Elementos[contador]);
    }
    

     return 0;
}   