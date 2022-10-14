#include <stdio.h>

int main(void)
{
    char letraInicio='a'; 

char letraFin='z';
    
    printf("Iniciando abecedario a partir de lo que fue anotado...\n");

    while (letraInicio<=letraFin)
    {
        printf ("%c\n",letraInicio);
        letraInicio++;

    }


printf ("Fin del conteo...\n");

return 0;

}
