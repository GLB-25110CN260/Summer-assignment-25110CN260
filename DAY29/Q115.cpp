#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,rev="";
    int ch,i;

    cout<<"Enter a string: ";
    getline(cin,s);

    do
    {
        cout<<"\n----- MENU -----";
        cout<<"\n1. Find Length";
        cout<<"\n2. Reverse String";
        cout<<"\n3. Convert to Uppercase";
        cout<<"\n4. Convert to Lowercase";
        cout<<"\n5. Exit";
        cout<<"\nEnter your choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Length = "<<s.length();
                break;

            case 2:
                rev="";
                for(i=s.length()-1;i>=0;i--)
                    rev+=s[i];
                cout<<"Reversed String = "<<rev;
                break;

            case 3:
                for(i=0;i<s.length();i++)
                    if(s[i]>='a' && s[i]<='z')
                        s[i]=s[i]-32;
                cout<<"Uppercase = "<<s;
                break;

            case 4:
                for(i=0;i<s.length();i++)
                    if(s[i]>='A' && s[i]<='Z')
                        s[i]=s[i]+32;
                cout<<"Lowercase = "<<s;
                break;

            case 5:
                cout<<"Exiting...";
                break;

            default:
                cout<<"Invalid Choice!";
        }

    }while(ch!=5);

    return 0;
}