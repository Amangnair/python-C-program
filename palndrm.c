#include<stdio.h>
void main()
{
int n,orgno,rem=0,sum=0;

printf("enter no.to be reversed -");
scanf("%d",&n);
orgno=n;

while(n>0)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}

printf("%d",sum);

if(orgno==sum)
printf("  is a palindrome");
else
printf("  is not a palindrome");

}
