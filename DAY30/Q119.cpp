#include<iostream>
using namespace std;
int main()
{
    int id[100],age[100],salary[100];
    string name[100];
    int n=0,ch,i,searchid;

    do
    {
        cout<<"\n1.Add Employee";
        cout<<"\n2.Display Employees";
        cout<<"\n3.Search Employee";
        cout<<"\n4.Exit";
        cout<<"\nEnter choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter Employee ID: ";
                cin>>id[n];
                cout<<"Enter Name: ";
                cin>>name[n];
                cout<<"Enter Age: ";
                cin>>age[n];
                cout<<"Enter Salary: ";
                cin>>salary[n];
                n++;
                cout<<"Employee Added Successfully\n";
                break;

            case 2:
                if(n==0){
                    cout<<"No Employee Records\n";
                    break;
                }
                cout<<"\nID\tName\tAge\tSalary\n";
                for(i=0;i<n;i++)
                    cout<<id[i]<<"\t"<<name[i]<<"\t"<<age[i]<<"\t"<<salary[i]<<endl;
                break;

            case 3:
                cout<<"Enter Employee ID to Search: ";
                cin>>searchid;
                for(i=0;i<n;i++){
                    if(id[i]==searchid){
                        cout<<"\nEmployee Found\n";
                        cout<<"ID: "<<id[i]<<endl;
                        cout<<"Name: "<<name[i]<<endl;
                        cout<<"Age: "<<age[i]<<endl;
                        cout<<"Salary: "<<salary[i]<<endl;
                        break;
                    }
                }
                if(i==n)
                    cout<<"Employee Not Found\n";
                break;

            case 4:
                cout<<"Exiting...";
                break;

            default:
                cout<<"Invalid Choice";
        }
    }while(ch!=4);

    return 0;
}