#include<stdio.h>
int main()
{
    
    int i,n,fact=1;
    printf("enter the number:");
    scanf("%d",&n);

    if(n<0)
    {
        printf("factorial does not exist for negative numbers");

    }
    else if((n==0)||(n==1))
    {
        printf("the factorial of %d is 1",n);

    }
    else
    {
    for(i=1;i<=n;i++)

     {

        fact=fact*i;

     }

     printf("the fatorial of %d is %d",n,fact);
}

     return 0;


}
