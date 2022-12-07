#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int primeraGeneracion[10][10];
    int segundaGeneracion[10][10];

    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 10; j++)
        {
            int num = rand() % 11;

            if (num % 2 == 0)
            {
                primeraGeneracion[i][j] = 1;
            }
            else
            {
                primeraGeneracion[i][j] = 0;
            }
        }

        printf("\n");
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c", primeraGeneracion[i][j]);
        }

        printf("\n");
    }

    do
    {

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (primeraGeneracion[i][j] != 0)
                {
                    printf("#");
                }
                else
                {
                    printf("_");
                }
            }
            printf("\n");
        }

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                int vecinos = 0;

                if (i - 1 >= 0 && j - 1 >= 0)
                {
                    if (primeraGeneracion[i - 1][j - 1] == 1)
                    {
                        vecinos++;
                    }
                }

                if (i - 1 >= 0)
                {
                    if (primeraGeneracion [i-1] [j]==1)
                    {
                        vecinos++;
                    }
                }

                if (i-1 >=0 && j+1 <=10)
                {
                    if (primeraGeneracion [i-1] [j+1]==1)
                    {
                        vecinos++;
                    }
                }

                if (j-1 >=0)
                {
                    if (primeraGeneracion [i] [j-1]==1)
                    {
                        vecinos++;
                    }
                }

                if (j+1 <=10)
                {
                    if (primeraGeneracion [i] [j+1]==1)
                    {
                        vecinos++;
                    }
                }

                if (i+1 <=10 && j-1>=0)
                {
                    if (primeraGeneracion [i+1] [j-1]==1)
                    {
                        vecinos++;
                    }
                }

                if (i+1 <=10)
                {
                    if (primeraGeneracion [i+1] [j]==1)
                    {
                        vecinos++;
                    }
                }

                if (i+1 <=10 && j+1 <=10)
                {
                    if (primeraGeneracion [i+1] [j+1]==1)
                    {
                        vecinos++;
                    }
                }



                if (segundaGeneracion [i] [j]==1)
                {
                    if (vecinos==3)
                    {
                        segundaGeneracion [i] [j] =1;
                    }

                    if (vecinos==2)
                    {
                        segundaGeneracion [i] [j] =1;
                    } 

                    if (vecinos<2)
                    {
                        segundaGeneracion [i] [j] =0;
                    } 
                    
                    if (vecinos>3)
                    {
                        segundaGeneracion [i] [j] =0;
                    } 
                }


            }
        }
    } while;

    return 0;
}
