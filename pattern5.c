#include<stdio.h>
void main()

{
int n,s,i,k=0;
printf("enter no. of rows");
scanf("%d",&n);

for(i=1;i<=n;i++,k=0)
{	for(s=1;s<=n-i;s++)
	{
	    printf(" ");
	}
		while(k!=2*i-1)
	  	{
		printf("*");
		k++;
	   	}
	printf("\n");
}		
}
