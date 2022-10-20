#include <stdio.h>
 
int main()
{
    int i,j,n,l;
 
    printf("Ingrese los numeros: ");
    scanf("%d",&n);
    l=n*2-1;
 
	for(i=1;i<=l;i++)
    {
        if(i==1 || i==n || i==l)
                  
	        for(j=1;j<=n;j++)
                
            {      
			    if(j==1  || j==n)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
                                 
		 
            }
        else
	        for(j=1;j<=l;j++)
            {      
			    if(j==1 || j==n)
                {

                    printf("*");
                }

                else
                {
                    printf(" ");
                }
            }
		 
    
        printf("\n");
	    
    }            
           
    return 0;
}