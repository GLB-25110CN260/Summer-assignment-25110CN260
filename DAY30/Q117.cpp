#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,ch;
    string name[100];
    int roll[100],marks[100];

    cout<<"Enter no. of students: ";
    cin>>n;

    do
    {
        cout<<"\n1.Add Record\n2.Display Records\n3.Search Record\n4.Exit\nEnter choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                for(i=0;i<n;i++){
                    cout<<"Name: ";
                    cin>>name[i];
                    cout<<"Roll: ";
                    cin>>roll[i];
                    cout<<"Marks: ";
                    cin>>marks[i];
                }
                break;

            case 2:
                cout<<"\nRoll\tName\tMarks\n";
                for(i=0;i<n;i++)
                    cout<<roll[i]<<"\t"<<name[i]<<"\t"<<marks[i]<<endl;
                break;

            case 3:
            {
                int r,f=0;
                cout<<"Enter roll to search: ";
                cin>>r;
                for(i=0;i<n;i++){
                    if(roll[i]==r){
                        cout<<"Name: "<<name[i]<<endl;
                        cout<<"Marks: "<<marks[i]<<endl;
                        f=1;
                        break;
                    }
                }
                if(f==0)
                    cout<<"Record not found";
                break;
            }

            case 4:
                cout<<"Exit";
                break;

            default:
                cout<<"Invalid choice";
        }
    }
    while(ch!=4);

    return 0;
}