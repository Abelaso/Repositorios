#include <stdio.h>
 
 int main ()
 {
int mod;
int n1=0;
int n2=0;

printf("Ingrese un numero:\n");
scanf("%d",&n1);

printf("Ingrese otro numero:\n");
scanf("%d",&n2);

mod=(n1 % n2);
 printf("El módulo %d de %d es: %d\n",n1,n2,mod); 
return 0;

 } 