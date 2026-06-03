#include<iostream>
using namespace std;
int main()
{
    int n,i,prime=1;
    cout<<"enter the number :";
    cin>>n;

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        { 
            prime=0;
            break;
        }
    }

        if(prime==1)
        {
            cout<<"the number is prime"<<endl;

        }
        else
        { 
        
          cout<<"the number is not prime"<<endl;

        }
    

}