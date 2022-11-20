#include <stdio.h>


int main()
{
    int Cantidad_De_Elementos[500];
    int X_Cantidad_de_elementos_que_se_van_a_contar;
    int contador;
    int nuevo_numero;
    int posicion=0;

    printf("Cantidad de elementos que va a tener el arreglo\n");
    scanf("%d", &X_Cantidad_de_elementos_que_se_van_a_contar);
    printf("Ingrese %d numeros diferentes o iguales\n", X_Cantidad_de_elementos_que_se_van_a_contar);

    for (contador = 0; contador < X_Cantidad_de_elementos_que_se_van_a_contar; contador++)
    {
        scanf("%d", &Cantidad_De_Elementos[contador]);
    }

     printf ("Ingrese el nuevo numero que quiere agregar\n");
     scanf("%d",&nuevo_numero);

     printf("Ingrese la posición en la cual estara en nuevo numero\n");
     scanf("%d",&posicion);

     if (posicion<=X_Cantidad_de_elementos_que_se_van_a_contar)
     {
        for (int i=X_Cantidad_de_elementos_que_se_van_a_contar;i>posicion;i--)
        {
            Cantidad_De_Elementos[i]=Cantidad_De_Elementos[i-1];
        }
     

     Cantidad_De_Elementos[posicion]=nuevo_numero;

     printf ("El cambio de arreglo queda con la forma de:\n");

     for (int i = 0; i <X_Cantidad_de_elementos_que_se_van_a_contar ; i++)
     {
        printf("%d\n",Cantidad_De_Elementos[i]);
     }

     }
     





    return 0;
}

