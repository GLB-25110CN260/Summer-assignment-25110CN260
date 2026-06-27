#include<iostream>
using namespace std;
int main()
{
    string name;
    int m1,m2,m3,m4,m5,total;
    float per;

    cout<<"Enter Student Name : ";
    cin>>name;

    cout<<"Enter Marks of 5 Subjects : ";
    cin>>m1>>m2>>m3>>m4>>m5;

    total=m1+m2+m3+m4+m5;
    per=total/5.0;

    cout<<"\n------ MARKSHEET ------"<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Subject 1 : "<<m1<<endl;
    cout<<"Subject 2 : "<<m2<<endl;
    cout<<"Subject 3 : "<<m3<<endl;
    cout<<"Subject 4 : "<<m4<<endl;
    cout<<"Subject 5 : "<<m5<<endl;
    cout<<"Total Marks : "<<total<<"/500"<<endl;
    cout<<"Percentage : "<<per<<"%"<<endl;

    if(per>=90)
        cout<<"Grade : A+"<<endl;
    else if(per>=80)
        cout<<"Grade : A"<<endl;
    else if(per>=70)
        cout<<"Grade : B"<<endl;
    else if(per>=60)
        cout<<"Grade : C"<<endl;
    else if(per>=50)
        cout<<"Grade : D"<<endl;
    else
        cout<<"Grade : F"<<endl;

    if(per>=40)
        cout<<"Result : PASS"<<endl;
    else
        cout<<"Result : FAIL"<<endl;

    return 0;
}