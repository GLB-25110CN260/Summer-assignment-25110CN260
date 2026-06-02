#include <stdio.h>
int main()
{

    int n,d,rev=0,temp;

    printf("enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    
    }

    if (rev==temp)
    {  
        printf("the number is palindrome");

    }
    else
    { 
        printf("the number is not palindrome");

    }
    


}