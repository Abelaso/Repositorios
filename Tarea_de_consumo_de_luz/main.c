#include <stdio.h>

int main()
{

    float Total_de_TB;
    float Total_de_TIB;
    float Total_de_TIA;
    float Total_de_TC;
    float Resultado_de_TB;
    float Resultado_de_TIB;
    float Resultado_de_TIA;
    float Resultado_de_CE;
    float Resultado_asdfghjkl;
    float Total;
    int consumo = 0;

    printf("Coloque su consumo de luz:\n");
    scanf("%d", &consumo);

    if (consumo > 0)
    {
        if (consumo < 175)
        {
            Total_de_TB = (consumo * 0.786);

            Total_de_TIB = 0;

            Total_de_TIA = 0;

            Total_de_TC = 0;

            Total = Total_de_TB;

            printf("Consumo Basico\n");

            printf("Cobro por consumo basico %.2f\n", Total_de_TB);

            printf("Cobro por consumo I.Bajo %.2f\n", Total_de_TIB);

            printf("Cobro por consumo I.Alto %.2f\n", Total_de_TIA);

            printf("Cobro por consumo Excedente %.2f\n", Total_de_TC);

            printf("El costo a pagar por kwh es de: %.2f\n", Total);
        }
        else
        {
            if (consumo < 400)
            {
                Total_de_TB = (consumo - 175);
                Resultado_de_TB = (175 * 0.786);
                Resultado_de_TIB = (Total_de_TB * 0.911);
                Resultado_de_TIA = 0;
                Resultado_de_CE = 0;
                Total = (Resultado_de_TB + Resultado_de_TIB);

                printf("Consumo I.Bajo\n");

                printf("Cobro por consumo basico %.2f\n", Resultado_de_TB);

                printf("Cobro por consumo I.Bajo %.2f\n", Resultado_de_TIB);

                printf("Cobro por consumo I.Alto %.2f\n", Resultado_de_TIA);

                printf("Cobro por consumo Excedente %.2f\n", Resultado_de_CE);

                printf("El costo a pagar por kwh es de: %.2f\n", Total);
            }
            else
            {
                if (consumo < 600)
                {

                    Resultado_de_TB = (175 * 0.786);
                    Resultado_de_TIB = ((400 - 175) * 0.911);
                    Resultado_de_TIA = ((consumo - 400) * 1.177);
                    Resultado_de_CE = 0;
                    Total = (Resultado_de_TB + Resultado_de_TIB + Resultado_de_TIA);

                    printf("Consumo I.Alto\n");

                    printf("Cobro por consumo basico %.2f\n", Resultado_de_TB);

                    printf("Cobro por consumo I.Bajo %.2f\n", Resultado_de_TIB);

                    printf("Cobro por consumo I.Alto %.2f\n", Resultado_de_TIA);

                    printf("Cobro por consumo Excedente %.2f\n", Resultado_de_CE);

                    printf("El costo a pagar por kwh es de: %.2f\n", Total);
                }
                else
                {
                    if (consumo > 601)
                    {
                        Resultado_de_TB = (175 * 0.786);
                        Resultado_de_TIB = ((400 - 175) * 0.911);
                        Resultado_de_TIA = ((600 - 400) * 1.177);
                        Resultado_de_CE = ((consumo - 600) * 3.134);
                        Total = (Resultado_de_TB + Resultado_de_TIB + Resultado_de_TIA + Resultado_de_CE);

                        printf("Consumo Excedente\n");

                        printf("Cobro por consumo basico %.2f\n", Resultado_de_TB);

                        printf("Cobro por consumo I.Bajo %.2f\n", Resultado_de_TIB);

                        printf("Cobro por consumo I.Alto %.2f\n", Resultado_de_TIA);

                        printf("Cobro por consumo Excedente %.2f\n", Resultado_de_CE);

                        printf("El costo a pagar por kwh es de: %.2f\n", Total);
                    }
                }
            }
        }
    }

    return 0;
}
