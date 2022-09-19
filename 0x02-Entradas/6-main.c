#include <stdio.h>
 
 float main ()
 {
float div;
float n1=0;
float n2=0;

printf("Ingrese un numero:\n");
scanf("%e",&n1);

printf("Ingrese otro numero:\n");
scanf("%e",&n2);

div= (n1 / n2);
printf("El resultado de la multiplicacion de los dos numeros es:%f\n",div);
return 0;

 } 