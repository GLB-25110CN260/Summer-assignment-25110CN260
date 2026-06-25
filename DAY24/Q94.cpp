#include<iostream>
using namespace std;
int main()
{
    string s,res="";
    cin>>s;
    int count=1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1]){
            count++;
        }
        else
        {
            res+=s[i];
            res+=char(count+'0');
            count=1;
        }
    }
    cout<<res;
    return 0;
}