#include <iostream>
using namespace std;

int main()
{
    int pin=1234,epin,ch;
    float bal=10000,amt;

    cout<<"Enter ATM PIN: ";
    cin>>epin;

    if(epin!=pin)
    {
        cout<<"Wrong PIN!";
        return 0;
    }

    do
    {
        cout<<"\n----- ATM MENU -----";
        cout<<"\n1. Check Balance";
        cout<<"\n2. Deposit";
        cout<<"\n3. Withdraw";
        cout<<"\n4. Exit";
        cout<<"\nEnter Choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Balance = "<<bal;
                break;

            case 2:
                cout<<"Enter Amount: ";
                cin>>amt;
                bal+=amt;
                cout<<"Amount Deposited!";
                break;

            case 3:
                cout<<"Enter Amount: ";
                cin>>amt;
                if(amt<=bal)
                {
                    bal-=amt;
                    cout<<"Please Collect Cash!";
                }
                else
                    cout<<"Insufficient Balance!";
                break;

            case 4:
                cout<<"Thank You!";
                break;

            default:
                cout<<"Invalid Choice!";
        }

    }while(ch!=4);

    return 0;
}