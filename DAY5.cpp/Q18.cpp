#include<iostream>
using namespace std;
int main()
{
    int n, i, d, sum=0,fact, org;
    cout<<"Enter the number : ";
    cin>>n;
    org=n;
    while(n!=0)
    {
        d=n%10;
        for(i=1;i<=d;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
        fact=1;

    }
    if(sum==org){
        cout<<"it is a strong number";
    }
    else{
        cout<<"it is not a strong number";
    }

}