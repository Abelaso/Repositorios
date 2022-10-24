#include <stdio.h>

int main()

{
float litros;
float galones=0.264179;
float millas;
float millasrecorridas;
int decision=0;

printf("Anote el n° de millas recorridas:\n");
scanf("%f",&millas);
printf("Anote el n° de litros consumidos\n");
scanf("%f",&litros);

litros=litros * galones;

millasrecorridas=millas/litros;

printf("El numero de millas recorridas por galon es:%f\n",millasrecorridas);

printf("Desea continuar?\nEscriba 1 para continuar\nEscriba cualquier otro numero para salir\n");
scanf ("\n%d",&decision);

while (decision==1)
{
printf("Anote el n° de millas recorridas:\n");
scanf("%f",&millas);
printf("Anote el n° de litros consumidos\n");
scanf("%f",&litros);

litros=litros * galones;

millasrecorridas=millas/litros;

printf("El numero de millas recorridas por galon es:%f\n",millasrecorridas);

    printf("Desea continuar?\nEscriba 1 para continuar\nEscriba cualquier otro numero para salir\n");
scanf ("\n%d",&decision);
}

return 0;
}
