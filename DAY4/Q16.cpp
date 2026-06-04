#include<iostream>
using namespace std;
int main()
{
    int i, d, n, start, end, sum=0;
    cout<<"enter starting number : ";
    cin>>start;
    cout<<"enter ending number : ";

    for(i=start;i<=end;i++)
    {
        n=i;
        while(n>0)
        {
            d=n%10;
            sum=sum+d*d*d;
            n=n/10;
        }
        if(sum==i)
        {
            cout<<i <<" ";
        }
        
    }
    return 0;
    
}