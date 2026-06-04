#include<iostream>
using namespace std;
int main()
{
    int i, n, f1, f2, f3;
    cout<<"enter the value of n : ";
    cin>>n;
    f1=0;
    f2=1;
    cout<<f1 <<" " <<f2;  //<<" " is for space
    
    for(i=1;i<=n-2;i++)
    {
        f3=f1+f2;
        cout<<" "<<f3;

        f1=f2;
        f2=f3;
    }

}