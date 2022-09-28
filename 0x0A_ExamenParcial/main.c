#include <stdio.h>
#include "main.h"

int main()
{
    int V;
    float Alcohol;
    float Aceite;
    float Gasolina;
    float Acetona;
    float ahorro;
    float Gramos;
    float Area_Total;
    float Costo_Total;
    float Costo_anterior;
    float Gramos_del_envase;
    float Area_total_en_m;

    char opcion;

    printf("Menu\nElija el tipo de producto:\n");
    printf("a- Alcohol \n");
    printf("b- Aceite\n");
    printf("c- Gasolina\n");
    printf("d- Acetona\n");

    scanf("%c", &opcion);

    printf("\nIngrese el volumen a envasar: \n");
    scanf("%d", &V);

    Area_Total = area(V);

    Area_total_en_m=Area_Total/1000;

    Costo_Total = Area_total_en_m * 2.45;

    if (V >= 0 && V <= 500)
    {
        Costo_anterior = 1.006;
        ahorro = Costo_Total - Costo_anterior;
    }

    if (V >= 501 && V <= 1000)
    {
        Costo_anterior = 1.6816;
        ahorro = Costo_Total - Costo_anterior;
    }

    if (V >= 1001 && V <= 1500)
    {
        Costo_anterior = 1.9610;
        ahorro = Costo_Total - Costo_anterior;
    }

    if (V >= 1501 &&V <= 3000)
    {
        Costo_anterior = 3.1038;
        ahorro = Costo_Total - Costo_anterior;
    }

    if (V >= 3000)
    {
        Costo_anterior = 3.1038;
        ahorro = Costo_Total - Costo_anterior;
    }

    switch (opcion)
    {
    case 'a':
        Gramos_del_envase = V * 0.8;
        break;
    case 'b':
        Gramos_del_envase = V * 0.9;
        break;
    case 'c':
        Gramos_del_envase = V * 0.68;
        break;
    case 'd':
        Gramos_del_envase = V * 0.79;
        break;

    default:
        printf("Opcion no valida\n");

        return (1);
    }

    printf("El Area total de la lata es: %.2f cm\n",Area_Total);
    printf("Costo de fabricacion: $%.2f\n",Costo_Total);
    printf("costo anterior de la lata: %.2f\n",Costo_anterior);
    printf("Ahorro: $%.2f\n",ahorro);
    printf("La cantidad del envase en gramos es: %.2f gr\n",Gramos_del_envase);

    return 0;
} 