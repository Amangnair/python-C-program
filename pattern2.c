#include <stdio.h>

void main()
{
   int i,j; 
    for(i=1; i<=3; i++)
    {
        
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        
        for(j=i; j<=3; j++)
        {
            printf("*");
        }

        
        printf("\n");
    }

}
