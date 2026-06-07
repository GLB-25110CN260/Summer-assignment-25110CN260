#include<iostream>  //binary to decimal
#include<cmath>
using namespace std;
int main()
{
    int n, d, s=0, i=0;
    cout<<"ENTER THE BINARY NUMBER: ";
    cin>>n;
    while(n!=0)
    {
        d=n%10;
        s=s+ round(pow(2,i))*d;
        n=n/10;
        i++;
    }
    cout<<s;
}
