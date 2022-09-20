#include <stdio.h>
 
 int main ()
 {
float length;
float width;
float Perimeter;
float area;
length=0;
width=0;



printf("Enter lenght of the rectangle:\n");
scanf("%e",&length);

printf("Enter width of the rectangle:\n");
scanf("%e",& width);

area=(width * length);
Perimeter=(area*2);

printf("The perimeter of the rectangle is:%f\n",Perimeter);
return 0;

 } 
