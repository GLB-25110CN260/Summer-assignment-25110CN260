#include<iostream>
using namespace std;
int main()
{
    int i,j,n, maxPrime=0;
    cout<<"ENTER THE NUMBER : ";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(n%i == 0){
            int count = 0;
            for(j=1;j<=i;j++)
            {
                if(i % j== 0)
                   count++;
            }
            if(count == 2)
              maxPrime=i;
        }
    }
     cout<<"greatet PRIME Factor="<<maxPrime;
    return 0;
}