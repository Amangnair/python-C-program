#include<stdio.h>

void main()

{char ch;
float a,b,c;

printf("enter + for addition\n - for subtraction\n * for multiplication\n / for division\n");
printf("enter choice");
scanf("%c",&ch);
printf("enter first & second number :");
scanf("%f%f",&a,&b);
switch(ch)
{
case '+':printf("enter first & second number :");
scanf("%f%f",&a,&b);
c = a+b;
	printf("sum is %f",c);
	break;
case '-':c = a-b ;
	printf("difference is %f",c);
	break;
case '*':c = a*b ;
	printf("product is %f",c);
	break;
case '/':c = a/b ;
	printf("division is %f",c);
	break;
default : printf("enter valid details");
}
}
