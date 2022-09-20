#include <stdio.h>

int main ()
{
    int Calificacion_1,Calificacion_2,Calificacion_3,Calificacion_4,Calificacion_5=0;
    int Total_marks;
float Average_marks;
float Percentage;

printf("Ingrese todas las calificaciones total de cada materia:\n");
scanf ("%d%d%d%d%d",&Calificacion_1, &Calificacion_2, &Calificacion_3, &Calificacion_4, &Calificacion_5);

Total_marks=(Calificacion_1 + Calificacion_2 + Calificacion_3 + Calificacion_4 + Calificacion_5);
Average_marks=(Total_marks/5);
Percentage=(Total_marks/5);

printf ("Total marks= %.2d\nAverage marks=%.2f\nPercentage=%.2f\n",Total_marks,Average_marks,Percentage);

return 0;

}