#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter the first number : ";
    cin>>a;
    cout<<"enter the second number : ";
    cin>>b;

    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;

    }

    cout<<"GCD of the two numbers is : "<<a<<endl;

    
}