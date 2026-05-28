#include<stdio.h>
int main()
{


int i,n,sum=0;

printf("enter the number of natural numbers to be added:");

scanf("%d",&n);

for(i=1;i<=n;i++)
{
  sum=sum+i;
}

 printf("the sum of first %d natural numbers is %d",n,sum);

 return 0;

 
}