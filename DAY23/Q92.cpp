#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    int freq[256]={0};

    for(int i=0;s[i]!='\0';i++){
        freq[s[i]]++;
    }

    int mx=0;
    char ch;

    for(int i=0;s[i]!='\0';i++) {
        if(freq[s[i]]>mx){
            mx=freq[s[i]];
            ch=s[i];
        }
    }

    cout<<"Maximum occurring character = "<<ch;
    cout<<"\nFrequency = "<<mx;

}