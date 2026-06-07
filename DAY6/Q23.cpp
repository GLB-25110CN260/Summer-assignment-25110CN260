#include<iostream> // no need to wap decimal to binary number for 
 #include<cmath>    //counting set bits...simply enter decimal no.
using namespace std; //cuz the computer itself converts dec to bin
int main()
{
    int n, d, c=0;  //it is necessary to initialize the 'c' otherwise
    cout<<"ENTER THE NUMBER: ";  //it will hold garbage value itself
    cin>>n;
    
    while(n!=0)
    {
        d=n%2;
        if(d==1){
            c++;
        }
        n=n/2;
    }
    cout<<c;
}