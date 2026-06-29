#include<iostream>
using namespace std;
int main()
{
    int choice,tickets;
    float total=0;

    cout<<"------ TICKET BOOKING SYSTEM ------"<<endl;
    cout<<"1. Movie Ticket (Rs.200)"<<endl;
    cout<<"2. Bus Ticket (Rs.500)"<<endl;
    cout<<"3. Train Ticket (Rs.350)"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;

    cout<<"Enter number of tickets: ";
    cin>>tickets;

    switch(choice)
    {
        case 1:
            total=tickets*200;
            cout<<"\nMovie Ticket Booked"<<endl;
            break;

        case 2:
            total=tickets*500;
            cout<<"\nBus Ticket Booked"<<endl;
            break;

        case 3:
            total=tickets*350;
            cout<<"\nTrain Ticket Booked"<<endl;
            break;

        default:
            cout<<"\nInvalid Choice!";
            return 0;
    }

    cout<<"Number of Tickets : "<<tickets<<endl;
    cout<<"Total Amount : Rs."<<total<<endl;
    cout<<"Booking Successful!"<<endl;

    return 0;
}