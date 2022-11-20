#include <stdio.h>

int main()
{
    int Cantidad_De_Elementos[500];
    int X_Cantidad_de_elementos_que_se_van_a_contar;
    int contador;
    int Elemento_a_eliminar;

    printf("Cantidad de elementos que va a tener el arreglo\n");
    scanf("%d", &X_Cantidad_de_elementos_que_se_van_a_contar);
    printf("Ingrese %d numeros diferentes o iguales\n", X_Cantidad_de_elementos_que_se_van_a_contar);

    for (contador = 0; contador < X_Cantidad_de_elementos_que_se_van_a_contar; contador++)
    {
        scanf("%d", &Cantidad_De_Elementos[contador]);
    }

    printf("Introduzca la posición del elemento que se desea eliminar:\n");
    scanf("%d", &Elemento_a_eliminar);

    if (Elemento_a_eliminar >= 0)
    {
        for (int i = Elemento_a_eliminar; i < X_Cantidad_de_elementos_que_se_van_a_contar; i++)
        {
            Cantidad_De_Elementos[contador] = Cantidad_De_Elementos[i + 1];
        }

        X_Cantidad_de_elementos_que_se_van_a_contar = X_Cantidad_de_elementos_que_se_van_a_contar - 1;

        printf("El nuevo arreglo es:\n");

        for (int i = 0; i < X_Cantidad_de_elementos_que_se_van_a_contar; i++)
        {
            printf("%d\n", Cantidad_De_Elementos[i]);
        }
    }

    return 0;
}
