#include<iostream>
using namespace std;
int main()
{
    int i,j,number,isprime;
    cout<<"enter the number :";
    cin>>number;

    cout<<"the prime numbers between 1 and "<<number<<"are :"<<endl;
    for(i=2; i<=number; i++)
    {
        isprime=1;
        for(j=2 ; j<=i/2; j++)
        {
            if(i%j==0)
            {
                isprime=0;
                break;
            }
            
            if(isprime==1)
            {
                cout<<i<<" ";
            }

        }

        cout<<endl;

    }


}