#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"put n"; //eg put n= 5 
    cin>>n;     

    for(i=1;i<=n;i++)
    {
        for(char ch= 'A' ; ch< 'A'+i ; ch++ )
        {
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}