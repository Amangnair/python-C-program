#include<stdio.h>
int sum(int n)
{if(n!=0)
	return n+ sum(n-1);
else
	return 0;
}
void main()
{
int n,res;
printf("enter the limit :");
scanf("%d",&n);
res=sum(n);
printf("the sum is :%d\n",res);

}
