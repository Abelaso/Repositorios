#include <stdio.h>

int main()
{

int password=1234;

printf ("INICIO DE PROGRAMA\n");

do
{
    printf ("INGRESE UN PASSWORD\n");
    scanf ("%d",&password);
}
while (password==1234);



printf("FIN DEL PROGRAMA\n");

return (0);


}