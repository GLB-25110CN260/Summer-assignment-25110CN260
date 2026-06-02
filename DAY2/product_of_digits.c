#include <stdio.h>
int main()
{
    
    int n,d,prod=1;

    printf("enter the number:");
    scanf("%d",&n);

    while(n!=0)
    {  
        d=n%10;
        prod=prod*d;
        n=n/10;


    }

    printf("the product of digits is %d",prod);

    return 0;



}