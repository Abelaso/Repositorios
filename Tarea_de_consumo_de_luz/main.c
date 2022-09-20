#include <stdio.h>

int main()
{

    int Total_de_TB;
    int Total_de_TIB;
    int Total_de_TIA;
    int Total_de_TC;
    float Resultado_de_TB;
    float Resultado_de_TIB;
    float Resultado_de_TIA;
    float Resultado_de_CE;
    float Total;
    int consumo = 0;

    printf("Coloque su consumo de luz:\n");
    scanf("%d", &consumo);

    if (consumo > 0)
    {
        if (consumo < 175)
        {
            Total = (consumo * 0.786);

            printf("El numero mas grande es %f\n", Total);
        }
        else
        {
            if (consumo < 400)
            {
                Total_de_TB = (consumo - 175);
                Resultado_de_TB = (175 * 0.786);
                Resultado_de_TIB = (Total_de_TB * 0.911);
                Total = (Resultado_de_TB + Resultado_de_TIB);

                printf("El numero mas grande es %f\n", Total);
            }
            else
            {
                if (consumo < 600)
                {
                    Total_de_TIB = (consumo - 400);
                    Resultado_de_TB = (175 * 0.786);
                    Resultado_de_TIB = (400 * 0.911);
                    Resultado_de_TIA = (Total_de_TIB * 1.177);
                    Total = (Resultado_de_TB + Resultado_de_TIB + Resultado_de_TIA);

                    printf("El numero mas grande es %f\n", Total);
                }
                else
                {
                    if (consumo > 601)
                    {
                        Total_de_TIA = (consumo - 600);
                        Resultado_de_TB = (175 * 0.786);
                        Resultado_de_TIB = (400 * 0.911);
                        Resultado_de_TIA = (600 * 1.177);
                        Resultado_de_CE = (Total_de_TIA * 3.134);
                        Total = (Resultado_de_TB + Resultado_de_TIB + Resultado_de_TIA + Resultado_de_CE);

                        printf("El numero mas grande es %f\n", Total);
                    }
                }
            }
        }
        }

    return 0;
}
