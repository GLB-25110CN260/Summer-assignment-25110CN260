#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string: ";
    getline(cin,s);

    int flag=0;

    for(int i=0;i<s.length();i++)
    {
        int count=0;
        for(int j=0;j<s.length();j++){
            if(s[i]==s[j]){
                count++;
            }
        }

        if(count==1){
            cout<<"First non repeating character = "<<s[i];
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<"No non repeating character";
    }

}