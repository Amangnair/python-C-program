#include<stdio.h>


void main()
{
float l,b,r,pr,cc,ar,ac;
const float pi=3.14;
printf("enter length,breath & radius");
scanf("%f%f%f",&l,&b,&r);

pr=2*(l+b);
cc=2*pi*r;
ar=l*b;
ac=pi*r*r;

printf("perimeter of rectangle is :%f\n",pr);
printf("circumference of circle is :%f\n",cc);
printf("area of rectangle is :%f\n",ar);
printf("area of circle is :%f\n",ac);

}
