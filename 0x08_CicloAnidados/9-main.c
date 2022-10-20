#include <stdio.h>

int main(void)
{
  int n, i, l;

  printf("Ingrese numero: \n");
  scanf("%d", &n);

  for ( i= 1; i <= n; i++)
  {
    
    for (l = 1; l <= n-i; l++)
      {printf(" ");}

    for (l = 1; l <= 2*i-1; l++)
      {printf("*");}

    printf("\n");
  }

  for (i = 1; i <= n - 1; i++)
  {
    for (l = 1; l <= i; l++)
      {printf(" ");}

    for (l = 1 ; l <= 2*(n-i)-1; l++)
      {printf("*");}

    printf("\n");
  }

  return 0;
}
