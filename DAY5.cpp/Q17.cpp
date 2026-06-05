#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"ENTER THE NUMBER : ";
    cin>>n;

    for(i=1;i<n;i++)
    {
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout<<"IT IS A PERFECT NUMBER";
    }
    else{
        cout<<"IT IS NOT A PERFECT NUMBER";
    }
    
    return 0;
}
