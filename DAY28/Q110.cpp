#include<iostream>
using namespace std;
int main()
{
    int ch, accno = 1001;
    string name = "";
    float balance = 0, amt;

    do
    {
        cout<<"\n----- BANK ACCOUNT SYSTEM -----";
        cout<<"\n1. Create Account";
        cout<<"\n2. Deposit Money";
        cout<<"\n3. Withdraw Money";
        cout<<"\n4. Check Balance";
        cout<<"\n5. Exit";
        cout<<"\nEnter your choice : ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter Account Holder Name : ";
                cin>>name;
                cout<<"Enter Initial Balance : ";
                cin>>balance;
                cout<<"Account Created Successfully!";
                cout<<"\nAccount Number : "<<accno;
                break;

            case 2:
                cout<<"Enter Deposit Amount : ";
                cin>>amt;
                balance += amt;
                cout<<"Amount Deposited Successfully!";
                break;

            case 3:
                cout<<"Enter Withdraw Amount : ";
                cin>>amt;
                if(amt <= balance){
                    balance -= amt;
                    cout<<"Amount Withdrawn Successfully!";
                }
                else
                    cout<<"Insufficient Balance!";
                break;

            case 4:
                cout<<"\nAccount Number : "<<accno;
                cout<<"\nName : "<<name;
                cout<<"\nCurrent Balance : "<<balance;
                break;

            case 5:
                cout<<"Thank You!";
                break;

            default:
                cout<<"Invalid Choice!";
        }

    }while(ch != 5);

    return 0;
}