#include<iostream>
using namespace std;

string name[100];
int roll[100],marks[100],n=0;

void addStudent(){
    cout<<"Enter Roll: ";
    cin>>roll[n];
    cin.ignore();
    cout<<"Enter Name: ";
    getline(cin,name[n]);
    cout<<"Enter Marks: ";
    cin>>marks[n];
    n++;
}

void displayStudents(){
    if(n==0){
        cout<<"No Record Found\n";
        return;
    }
    cout<<"\nRoll\tName\tMarks\n";
    for(int i=0;i<n;i++)
        cout<<roll[i]<<"\t"<<name[i]<<"\t"<<marks[i]<<endl;
}

void searchStudent(){
    int r,f=0;
    cout<<"Enter Roll No: ";
    cin>>r;
    for(int i=0;i<n;i++){
        if(roll[i]==r){
            cout<<"Name: "<<name[i]<<endl;
            cout<<"Marks: "<<marks[i]<<endl;
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<"Student Not Found\n";
}

void updateMarks(){
    int r;
    cout<<"Enter Roll No: ";
    cin>>r;
    for(int i=0;i<n;i++){
        if(roll[i]==r){
            cout<<"Enter New Marks: ";
            cin>>marks[i];
            cout<<"Updated Successfully\n";
            return;
        }
    }
    cout<<"Student Not Found\n";
}

void deleteStudent(){
    int r;
    cout<<"Enter Roll No: ";
    cin>>r;
    for(int i=0;i<n;i++){
        if(roll[i]==r){
            for(int j=i;j<n-1;j++){
                roll[j]=roll[j+1];
                name[j]=name[j+1];
                marks[j]=marks[j+1];
            }
            n--;
            cout<<"Record Deleted\n";
            return;
        }
    }
    cout<<"Student Not Found\n";
}

int main(){
    int ch;
    do{
        cout<<"\n1.Add Student";
        cout<<"\n2.Display Students";
        cout<<"\n3.Search Student";
        cout<<"\n4.Update Marks";
        cout<<"\n5.Delete Student";
        cout<<"\n6.Exit";
        cout<<"\nEnter Choice: ";
        cin>>ch;

        switch(ch){
            case 1:addStudent();break;
            case 2:displayStudents();break;
            case 3:searchStudent();break;
            case 4:updateMarks();break;
            case 5:deleteStudent();break;
            case 6:cout<<"Thank You!";break;
            default:cout<<"Invalid Choice";
        }
    }
    while(ch!=6);
    return 0;
}