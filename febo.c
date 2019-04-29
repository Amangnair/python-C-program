#include<stdio.h>
int fib(int n)
{
if(n==0)
	return 0;
else if(n==1)
	return 1;
else
	return fib(n-1)+ fib(n-2);

}
void main()
{
int n,res;
printf("enter the limit:");
scanf("%d",&n);
if(n>0)
{	res=fib(n);
	printf("nth febonacci series number is%d",res);
}
else
	printf("negative no. not valid");
}
