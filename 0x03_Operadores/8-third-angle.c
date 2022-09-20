#include <stdio.h>

int main ()
{
int ang_a=0;
int ang_b=0;
int angulo_faltante=0;

printf("Ingrese el angulo a:\n");
scanf ("%d",&ang_a);

printf ("Ingrese el angulo b:\n");
scanf ("%d",&ang_b);

angulo_faltante=(180-ang_a-ang_b);

printf ("El angulo faltante es:%d\n",angulo_faltante);

return 0;
}