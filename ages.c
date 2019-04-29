#include<stdio.h>

void main()

{ int r,s,a;
printf("enter ages of Ram,Shyam and Ajay");
scanf("%d%d%d",&r,&s,&a);
	if(r<s & r<a)
printf("ram is youngest");
else if(s<a)
printf("shyam is youngest");
else
printf("ajay is youngest");		
}
