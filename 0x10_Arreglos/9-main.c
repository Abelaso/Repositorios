#include <stdio.h>


int main()
{
    int Cantidad_De_Elementos[500];
    int arr2[500];
    int X_Cantidad_de_elementos_que_se_van_a_contar;
    int contador;

     printf("Cantidad de elementos que va a tener el arreglo\n");
    scanf("%d", &X_Cantidad_de_elementos_que_se_van_a_contar);
    printf("Ingrese %d numeros diferentes o iguales\n", X_Cantidad_de_elementos_que_se_van_a_contar);

for (contador = 0; contador < X_Cantidad_de_elementos_que_se_van_a_contar; contador++)
    {
        scanf("%d", &Cantidad_De_Elementos[contador]);
    }

for (contador = 0; contador < X_Cantidad_de_elementos_que_se_van_a_contar; contador++)
{
    arr2[contador]=Cantidad_De_Elementos[contador];
}

for (contador = 0; contador < X_Cantidad_de_elementos_que_se_van_a_contar; contador++)
{
  printf ("Elemento arr[%d]: %d\n",contador, Cantidad_De_Elementos[contador]);
}

for (contador = 0; contador < X_Cantidad_de_elementos_que_se_van_a_contar; contador++)
{
  printf ("Elemento arr[%d]: %d\n",contador, arr2[contador]);
}

return 0;

}


