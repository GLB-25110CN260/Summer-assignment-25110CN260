#include<iostream>
using namespace std;

int main()
{
    char str[100];
    int i=0,len=0,flag=1;

    cout<<"Enter string: ";
    cin>>str;

    while(str[len]!='\0')
        len++;

    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-1-i]){
            flag=0;
            break;
        }
    }

    if(flag==1){
        cout<<"Palindrome";
    }
    else
        cout<<"Not Palindrome";

    return 0;
}