#include<iostream>
using namespace std;
int main()
{
    int i, n, f1, f2, f3;
    cout<<"enter the term to find : ";   //n
    cin>>n;
    f1=0;
    f2=1;
     
    if(n==1)
    {
        cout<<"fibonacci term="<<f1;
    }
    else if(n==2){
        cout<<"fibonacci term="<<f2;
    }
    else{
        for(i=3;i<=n;i++){
        
        f3=f1+f2;
        f1=f2;
        f2=f3;
        }
        cout<<"fibonacci term="<<f3;
    }

}



