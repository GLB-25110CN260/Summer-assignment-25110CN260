#include<iostream>
using namespace std;
int main()
{
    int id;
    char name[50];
    float basic, hra, da, pf, salary;
    int ch;

    cout<<"----- Salary Management System -----";

    do
    {
        cout<<"\n\n1. Enter Employee Details";
        cout<<"\n2. Display Salary";
        cout<<"\n3. Exit";
        cout<<"\nEnter Choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter Employee ID: ";
                cin>>id;
                cout<<"Enter Employee Name: ";
                cin>>name;
                cout<<"Enter Basic Salary: ";
                cin>>basic;
                break;

            case 2:
                hra = basic * 0.20;
                da = basic * 0.10;
                pf = basic * 0.05;
                salary = basic + hra + da - pf;

                cout<<"\nEmployee ID: "<<id;
                cout<<"\nEmployee Name: "<<name;
                cout<<"\nBasic Salary: "<<basic;
                cout<<"\nHRA: "<<hra;
                cout<<"\nDA: "<<da;
                cout<<"\nPF: "<<pf;
                cout<<"\nNet Salary: "<<salary;
                break;

            case 3:
                cout<<"Program Ended.";
                break;

            default:
                cout<<"Invalid Choice!";
        }

    }while(ch!=3);

    return 0;
}