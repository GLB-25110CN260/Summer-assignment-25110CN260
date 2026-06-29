#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name[100],phone[100];
    int n=0,ch,pos;
    
    do
    {
        cout<<"\n1.Add Contact";
        cout<<"\n2.Display Contacts";
        cout<<"\n3.Search Contact";
        cout<<"\n4.Delete Contact";
        cout<<"\n5.Exit";
        cout<<"\nEnter choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter Name: ";
                cin>>name[n];
                cout<<"Enter Phone: ";
                cin>>phone[n];
                n++;
                break;

            case 2:
                if(n==0)
                    cout<<"No Contacts!";
                else
                {
                    cout<<"\nContacts:\n";
                    for(int i=0;i<n;i++)
                        cout<<i+1<<". "<<name[i]<<" - "<<phone[i]<<endl;
                }
                break;

            case 3:
            {
                string s;
                int f=0;
                cout<<"Enter Name to Search: ";
                cin>>s;

                for(int i=0;i<n;i++){
                    if(name[i]==s){
                        cout<<"Found: "<<name[i]<<" - "<<phone[i];
                        f=1;
                        break;
                    }
                }
                if(f==0)
                    cout<<"Contact Not Found!";
                break;
            }

            case 4:
            {
                string d;
                int f=0;
                cout<<"Enter Name to Delete: ";
                cin>>d;

                for(int i=0;i<n;i++){
                    if(name[i]==d){
                        for(int j=i;j<n-1;j++){
                            name[j]=name[j+1];
                            phone[j]=phone[j+1];
                        }
                        n--;
                        cout<<"Contact Deleted!";
                        f=1;
                        break;
                    }
                }
                if(f==0)
                    cout<<"Contact Not Found!";
                break;
            }

            case 5:
                cout<<"Exiting...";
                break;

            default:
                cout<<"Invalid Choice!";
        }

    }
    while(ch!=5);

    return 0;
}