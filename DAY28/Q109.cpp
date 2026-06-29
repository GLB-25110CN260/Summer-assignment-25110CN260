#include<iostream>
using namespace std;

int books=100;

void addBook()
{
    int n;
    cout<<"Enter number of books to add: ";
    cin>>n;
    books+=n;
    cout<<"Books added successfully.\n";
}

void issueBook()
{
    int n;
    cout<<"Enter number of books to issue: ";
    cin>>n;

    if(n<=books) {
        books-=n;
        cout<<"Books issued successfully.\n";
    }
    else
        cout<<"Not enough books available.\n";
}

void returnBook()
{
    int n;
    cout<<"Enter number of books to return: ";
    cin>>n;
    books+=n;
    cout<<"Books returned successfully.\n";
}

void display()
{
    cout<<"Total Books Available: "<<books<<endl;
}

int main()
{
    int ch;

    do
    {
        cout<<"\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout<<"1. Add Books\n";
        cout<<"2. Issue Books\n";
        cout<<"3. Return Books\n";
        cout<<"4. Display Books\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1: addBook(); break;
            case 2: issueBook(); break;
            case 3: returnBook(); break;
            case 4: display(); break;
            case 5: cout<<"Thank You!\n"; break;
            default: cout<<"Invalid Choice!\n";
        }

    }while(ch!=5);

    return 0;
}