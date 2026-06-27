#include<iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

Employee e[100];
int n=0;

void addEmployee()
{
    cout<<"Enter ID: ";
    cin>>e[n].id;
    cin.ignore();

    cout<<"Enter Name: ";
    getline(cin,e[n].name);

    cout<<"Enter Salary: ";
    cin>>e[n].salary;

    n++;
    cout<<"Employee Added Successfully\n";
}

void displayEmployee()
{
    if(n==0){
        cout<<"No Employee Record\n";
        return;
    }

    cout<<"\nID\tName\tSalary\n";
    for(int i=0;i<n;i++)
        cout<<e[i].id<<"\t"<<e[i].name<<"\t"<<e[i].salary<<endl;
}

void searchEmployee()
{
    int id,f=0;
    cout<<"Enter Employee ID: ";
    cin>>id;

    for(int i=0;i<n;i++){
        if(e[i].id==id){
            cout<<"ID: "<<e[i].id<<endl;
            cout<<"Name: "<<e[i].name<<endl;
            cout<<"Salary: "<<e[i].salary<<endl;
            f=1;
            break;
        }
    }

    if(f==0)
        cout<<"Employee Not Found\n";
}

void deleteEmployee()
{
    int id,f=0;
    cout<<"Enter Employee ID: ";
    cin>>id;

    for(int i=0;i<n;i++){
        if(e[i].id==id){
            for(int j=i;j<n-1;j++)
                e[j]=e[j+1];

            n--;
            f=1;
            cout<<"Employee Deleted Successfully\n";
            break;
        }
    }

    if(f==0)
        cout<<"Employee Not Found\n";
}

int main()
{
    int ch;
    do
    {
        cout<<"\n----- Employee Management System -----\n";
        cout<<"1. Add Employee\n";
        cout<<"2. Display Employees\n";
        cout<<"3. Search Employee\n";
        cout<<"4. Delete Employee\n";
        cout<<"5. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1: addEmployee(); break;
            case 2: displayEmployee(); break;
            case 3: searchEmployee(); break;
            case 4: deleteEmployee(); break;
            case 5: cout<<"Thank You\n"; break;
            default: cout<<"Invalid Choice\n";
        }

    }while(ch!=5);

    return 0;
}