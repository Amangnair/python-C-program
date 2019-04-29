#include <stdio.h>

void main()
{
	int a,b;
	printf("enter no.");
	scanf("%d%d",&a,&b);
	printf("before swaping %d%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping %d%d",a,b);
}
