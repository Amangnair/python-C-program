#include<stdio.h>

void main()
{

int p;
printf("enter percentage");
scanf("%d",&p);
if(p>=60)
printf("1st division");
else if(p>=50 && p<=59)
printf("2nd division");
else if(p>=40 && p<=49)
printf("3rd division");
else
printf("fail");

}
