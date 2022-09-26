#include <stdio.h>
#include "main.h"

int Tarifa1A(int consumo)
{
    float consumo_basico = 0;
    float consumo_IBajo = 0;
    float consumo_IAlto = 0;
    float consumo_Excedente = 0;

    if (consumo >=0 && consumo<=100)
    {
        consumo_basico=(consumo*0.786);
        printf("consumo basico \n");
    }

    if (consumo >=101 && consumo <=150)
    {
        consumo_basico=(100 * 0.786);
        consumo_IBajo= ((consumo-100)*0.911);

        printf("consumo Intermedio Alto \n");

    }

    if (consumo >=151)
    {
        consumo_basico=(100*0.786);
        consumo_IBajo=((150-100)*0.911);
        consumo_IAlto=((0)*1.177);
        consumo_Excedente=((consumo-150)*3.134);

        printf ("consumo excedente\n");

    }
    


     printf("Cobro por consumo basico %.2f\n", consumo_basico);

    printf("Cobro por consumo I.Bajo %.2f\n", consumo_IBajo);

    printf("Cobro por consumo I.Alto %.2f\n", consumo_IAlto);

    printf("Cobro por consumo Excedente %.2f\n", consumo_Excedente);

    return (consumo_basico + consumo_IBajo + consumo_IAlto + consumo_Excedente);
}