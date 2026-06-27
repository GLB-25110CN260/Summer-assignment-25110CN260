#include<iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    Student s[100];
    int n=0,ch,r;

    do
    {
        cout<<"\n1.Add Student";
        cout<<"\n2.Display Students";
        cout<<"\n3.Search Student";
        cout<<"\n4.Exit";
        cout<<"\nEnter choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter Roll No: ";
                cin>>s[n].roll;
                cin.ignore();
                cout<<"Enter Name: ";
                getline(cin,s[n].name);
                cout<<"Enter Marks: ";
                cin>>s[n].marks;
                n++;
                break;

            case 2:
                if(n==0)
                    cout<<"No Record Found";
                else{
                    cout<<"\nRoll\tName\tMarks\n";
                    for(int i=0;i<n;i++)
                        cout<<s[i].roll<<"\t"<<s[i].name<<"\t"<<s[i].marks<<endl;
                }
                break;

            case 3:
                cout<<"Enter Roll No to Search: ";
                cin>>r;
                for(int i=0;i<n;i++){
                    if(s[i].roll==r){
                        cout<<"Roll: "<<s[i].roll<<endl;
                        cout<<"Name: "<<s[i].name<<endl;
                        cout<<"Marks: "<<s[i].marks<<endl;
                        break;
                    }
                    if(i==n-1)
                        cout<<"Record Not Found";
                }
                break;

            case 4:
                cout<<"Thank You!";
                break;

            default:
                cout<<"Invalid Choice";
        }

    }while(ch!=4);

    return 0;
}