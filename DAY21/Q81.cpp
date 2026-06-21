#include<iostream>
using namespace std;

int length(char str[])
{
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

int main()
{
    char str[100];

    cout<<"Enter string: ";
    cin.getline(str,100);

    cout<<"Length = "<<length(str);

    return 0;
}