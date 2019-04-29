#include<stdio.h>
void main()
{
int a[50],n;
float sum=0,avg=0;
printf("enter the limit :");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	printf("enter the numbers:");
	scanf("%d",&a[i]);
}

for(int i=0;i<n;i++)
{
sum=sum+a[i];
}

avg=sum/n;
printf("sum is %f\n",sum);

printf("average is %f\n",avg);

}
