#include<stdio.h>
int fact(int n)
{if(n!=0)
	return n* fact(n-1);
else
	return 1;
}

void main()
{
int n,res;
printf("enter the limit:");
scanf("%d",&n);
res=fact(n);
printf("factorial is:%d\n",res);
}
