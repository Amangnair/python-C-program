#include<stdio.h>
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  void main()

{
char ch;
printf("S= Sunday\n M=Monday\n T=Tuesday\n W=Wednesday\n");
printf("enter choice:");
scanf("%c",&ch);

switch(ch)
{
case 's' : printf("sunday");
           break;
case 'm' : printf("monday");
           break;
case 't' : printf("tuesday");
           break;
case 'w' : printf("wednesday");
           break;
default : printf("enter correct choice");
}}
