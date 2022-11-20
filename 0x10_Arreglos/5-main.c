#include <stdio.h>


int main()
{
    int Cantidad_De_Elementos[500];
    int X_Cantidad_de_elementos_que_se_van_a_contar;
    int contador;
    int maximo;
    int minimo;

    printf("Cantidad de elementos que va a tener el arreglo\n");
    scanf("%d", &X_Cantidad_de_elementos_que_se_van_a_contar);
    printf("Ingrese %d numeros diferentes o iguales\n", X_Cantidad_de_elementos_que_se_van_a_contar);

    for (contador = 0; contador < X_Cantidad_de_elementos_que_se_van_a_contar; contador++)
    {
        scanf("%d", &Cantidad_De_Elementos[contador]);
    }

    maximo = Cantidad_De_Elementos[0];
    minimo = Cantidad_De_Elementos[0];

    for (contador = 0; contador < X_Cantidad_de_elementos_que_se_van_a_contar; contador++)
    {
        if (Cantidad_De_Elementos[contador] > maximo)
        {
            maximo = Cantidad_De_Elementos[contador];
        }
        if (Cantidad_De_Elementos[contador] < minimo)
        {
            minimo = Cantidad_De_Elementos[contador];
        }
    }
    printf ("El maximo es: %d\n", maximo);
    printf ("El minimo es: %d\n", minimo);

        return 0;
    }