#include<iostream>
using namespace std;
int main()
{
    int a,b, LCM;
    cout<<"enter the two numbers :";
    cin >>a >>b;

    if(a>b)
    {
        LCM=a;

    }
    else{

        LCM=b;
    }

    while(true)
    {
        if(LCM%a==0 && LCM%b==0)
        {
            cout<<"LCM OF THE TWO NUMBERS IS :"<<LCM<<endl;
            break;
        }

        LCM++;

    }


}