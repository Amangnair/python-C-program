#include<stdio.h>

void read(int a[10][10],int m,int n);
void print(int a[10][10],int m,int n);

void main()

{
  int a[10][10],r,c;
  printf("enter no. of rows & columns");
  scanf("%d%d",&r,&c);
  read(a,r,c); 
  print(a,r,c);
}


void read(int a[10][10],int m,int n)
 { 
   for(int i=0;i<m;i++)
     {  for(int j=0;j<n;j++)
  	{ scanf("%d",&a[i][j]);
	 }
      }
  }



void print(int a[10][10],int m,int n)

 { 
   for(int i=0;i<m;i++)
     { for(int j=0;j<n;j++)
  	{ printf("%d",a[i][j]);
	 }
     printf("\n");

      }
  }


