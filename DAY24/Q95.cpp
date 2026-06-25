#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,w="",longest="";
    getline(cin,s);

    for(int i=0;i<=s.length();i++)
    {
        if(s[i]==' '||s[i]=='\0'){
            if(w.length()>longest.length())
                longest=w;
            w="";
        }
        else
            w+=s[i];
    }

    cout<<"Longest word = "<<longest;
    
}