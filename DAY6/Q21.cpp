#include<iostream>  //decimal to binary
#include<cmath>
using namespace std;
int main()
{
    int i=0, n, d, s=0;
    cout<<"ENTER THE NUMBER: ";
    cin>>n;
    
    while(n!=0)
    {
        d=n%2;
        s=s+round(pow(10,i))*d;// round funct used to round off the 
        n=n/2;              //double float value.. as pow funct gives
        i++;                    // double float values
    }
    cout<<s;
    return 0;
}