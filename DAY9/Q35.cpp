#include<iostream>
using namespace std;
int main()
{
    char ch;
    int i;     

    for(ch= 'A' ; ch <='E'; ch++)
    {
        for( i=1; i<= (ch - 'A' + 1); i++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
    
}