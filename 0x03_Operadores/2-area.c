#include <stdio.h>
 
 int main ()
 {
float length;
float width;
float area;

printf("Enter lenght of the rectangle:\n");
scanf("%e",&length);

printf("Enter width of the rectangle:\n");
scanf("%e",& width);

area=(width * length);

printf("The Area of the rectangle is:%f\n",area);


return 0;

 } 