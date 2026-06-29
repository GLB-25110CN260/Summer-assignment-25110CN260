#include<iostream>
using namespace std;
int main()
{
    int ch;
    float a,b;

    do
    {
        cout<<"\n----- MENU -----";
        cout<<"\n1. Addition";
        cout<<"\n2. Subtraction";
        cout<<"\n3. Multiplication";
        cout<<"\n4. Division";
        cout<<"\n5. Exit";

        cout<<"\nEnter your choice: ";
        cin>>ch;

        if(ch>=1 && ch<=4){
            cout<<"Enter two numbers: ";
            cin>>a>>b;
        }

        switch(ch)
        {
            case 1:
                cout<<"Result = "<<a+b;
                break;

            case 2:
                cout<<"Result = "<<a-b;
                break;

            case 3:
                cout<<"Result = "<<a*b;
                break;

            case 4:
                if(b!=0)
                    cout<<"Result = "<<a/b;
                else
                    cout<<"Division by zero is not possible.";
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