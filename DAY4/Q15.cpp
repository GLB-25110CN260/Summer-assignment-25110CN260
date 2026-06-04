#include<iostream>
using namespace std;
int main()
{
    int i, d, n, s=0, temp;
    cout<<"enter the number : ";  
    cin>>n;
    temp=n;
    while(n!=0)
    {
      d=n%10;
      s=s+d*d*d;   //cuz input number is of 3 digits
      n=n/10;
    }

    if(s==temp)
    {
        cout<<"the number is an armstrong number";
    }
    else
    cout<<"the number is not an armstrong number";
     
    return 0;

}