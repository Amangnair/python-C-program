#include<stdio.h>

void main()

{
float p,r,t,s;
printf("enter principle,rate,timeperiod");
scanf("%f%f%f",&p,&r,&t);

s=p*r*t/100;
printf("simple interest is:%f\n",s);

}
