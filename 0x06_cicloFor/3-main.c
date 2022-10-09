#include <stdio.h>

int main(void)
{
    char letraInicio='a'; 

    
    printf("Iniciando abecedario a partir de lo que fue anotado...\n");

    for (char letraFin='z';letraInicio<=letraFin; letraInicio++)
    {
       
        printf ("%c\n",letraInicio);

    }

printf ("Fin del conteo...\n");

return 0;

}