#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int count=0;

    getline(cin,s);

    for(int i=0;i<s.length();i++)
    {
        if((i==0 && s[i]!=' ') || (s[i]!=' ' && s[i-1]==' ')){
            count++;
        }
    }
    cout<<"Number of words = "<<count;

    return 0;
}