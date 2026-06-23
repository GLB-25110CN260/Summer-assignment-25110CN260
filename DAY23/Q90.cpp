#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;

    char ch='0';
    for(int i=0;s[i]!='\0';i++)
    {
        for(int j=i+1;s[j]!='\0';j++){
            if(s[i]==s[j]){
                ch=s[i];
                break;
            }
        }
        if(ch!='0')
            break;
    }

    if(ch!='0'){
        cout<<"First repeating character = "<<ch;
    }
    else{
        cout<<"No repeating character";
    }

}