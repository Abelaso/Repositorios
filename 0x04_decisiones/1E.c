#include <stdio.h>
#include "main.h"

int Tarifa1E (int consumo)
{
    float consumo_basico = 0;
    float consumo_IBajo = 0;
    float consumo_IAlto = 0;
    float consumo_Excedente = 0;

    if (consumo >=0 && consumo<=300)
    {
        consumo_basico=(consumo*0.786);
        printf("consumo basico \n");
    }

    if (consumo >=301 && consumo <=750)
    {
        consumo_basico=(300 * 0.786);
        consumo_IBajo= ((consumo-300)*0.911);

        printf("consumo Intermedio Bajo \n");

    }
    
    if (consumo >=751 && consumo <=900)
    {
        consumo_basico=(300 * 0.786);
        consumo_IBajo= ((750-300)*0.911);
        consumo_IAlto=((consumo-750)*1.177);

        printf("consumo Intermedio Alto \n");

    }

    if (consumo >=901)
    {
        consumo_basico=(300*0.786);
        consumo_IBajo=((750-300)*0.911);
        consumo_IAlto=((900-750)*1.177);
        consumo_Excedente=((consumo-900)*3.134);

        printf ("consumo excedente\n");

    }
    


     printf("Cobro por consumo basico %.2f\n", consumo_basico);

    printf("Cobro por consumo I.Bajo %.2f\n", consumo_IBajo);

    printf("Cobro por consumo I.Alto %.2f\n", consumo_IAlto);

    printf("Cobro por consumo Excedente %.2f\n", consumo_Excedente);

    return (consumo_basico + consumo_IBajo + consumo_IAlto + consumo_Excedente);
}
