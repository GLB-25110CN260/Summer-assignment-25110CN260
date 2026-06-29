#include<iostream>
using namespace std;
int main()
{
    int id[50], qty[50], price[50];
    int n=0,ch,i,sid,f=0;

    do
    {
        cout<<"\n1. Add Product";
        cout<<"\n2. Display Products";
        cout<<"\n3. Search Product";
        cout<<"\n4. Update Quantity";
        cout<<"\n5. Exit";
        cout<<"\nEnter Choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter Product ID: ";
                cin>>id[n];
                cout<<"Enter Quantity: ";
                cin>>qty[n];
                cout<<"Enter Price: ";
                cin>>price[n];
                n++;
                break;

            case 2:
                cout<<"\nID\tQuantity\tPrice\n";
                for(i=0;i<n;i++)
                    cout<<id[i]<<"\t"<<qty[i]<<"\t\t"<<price[i]<<endl;
                break;

            case 3:
                cout<<"Enter Product ID to Search: ";
                cin>>sid;
                f=0;
                for(i=0;i<n;i++){
                    if(id[i]==sid){
                        cout<<"Product Found\n";
                        cout<<"Quantity = "<<qty[i]<<endl;
                        cout<<"Price = "<<price[i]<<endl;
                        f=1;
                        break;
                    }
                }
                if(f==0)
                    cout<<"Product Not Found";
                break;

            case 4:
                cout<<"Enter Product ID: ";
                cin>>sid;
                f=0;
                for(i=0;i<n;i++){
                    if(id[i]==sid){
                        cout<<"Enter New Quantity: ";
                        cin>>qty[i];
                        cout<<"Quantity Updated";
                        f=1;
                        break;
                    }
                }
                if(f==0)
                    cout<<"Product Not Found";
                break;

            case 5:
                cout<<"Thank You!";
                break;

            default:
                cout<<"Invalid Choice";
        }

    }
    while(ch!=5);

    return 0;
}