#include<iostream>
using namespace std;
int main()
{
    string book[10];
    int n=0,ch,i;
    string name;

    do
    {
        cout<<"\n1.Add Book";
        cout<<"\n2.Display Books";
        cout<<"\n3.Search Book";
        cout<<"\n4.Exit";
        cout<<"\nEnter choice: ";
        cin>>ch;
        cin.ignore();

        switch(ch)
        {
            case 1:
                if(n<10){
                    cout<<"Enter book name: ";
                    getline(cin,book[n]);
                    n++;
                    cout<<"Book added.";
                }
                else
                    cout<<"Library full.";
                break;

            case 2:
                if(n==0)
                    cout<<"No books available.";
                else{
                    cout<<"Books:\n";
                    for(i=0;i<n;i++)
                        cout<<i+1<<". "<<book[i]<<endl;
                }
                break;

            case 3:
                cout<<"Enter book to search: ";
                getline(cin,name);
                for(i=0;i<n;i++)
                {
                    if(book[i]==name)
                    {
                        cout<<"Book found.";
                        break;
                    }
                }
                if(i==n)
                    cout<<"Book not found.";
                break;

            case 4:
                cout<<"Thank you!";
                break;

            default:
                cout<<"Invalid choice.";
        }

    }while(ch!=4);

    return 0;
}