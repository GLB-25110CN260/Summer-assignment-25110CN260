#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;

    int freq[26]={0};

    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;
    }

    for(int i=0;i<s2.length();i++){
        freq[s2[i]-'a']--;
    }

    int flag=1;

    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            flag=0;
            break;
        }
    }

    if(flag){
        cout<<"Anagram";
    }
    else
        cout<<"Not Anagram";

}