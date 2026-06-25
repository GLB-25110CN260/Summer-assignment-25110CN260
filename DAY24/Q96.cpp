#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    string ans="";

    for(int i=0;i<s.length();i++)
    {
        int f=0;
        for(int j=0;j<ans.length();j++){
            if(s[i]==ans[j]) {
                f=1;
                break;
            }
        }
        if(f==0)
            ans+=s[i];
    }
    cout<<"After removing duplicates: "<<ans;
    
}