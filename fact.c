#include<stdio.h>
void main()
{
int n,fact=1,orgn;
printf("enter no.");
scanf("%d",&n);
orgn=n;
while(n>0)
{fact=fact*n;
n--;
}
printf("%d",fact);
}
