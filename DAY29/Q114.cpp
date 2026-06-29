#include<iostream>
using namespace std;
int main()
{
    int a[100], n, ch, i, sum, max, key, found;

    cout<<"Enter size of array: ";
    cin>>n;

    do
    {
        cout<<"\n----- MENU -----";
        cout<<"\n1. Insert Elements";
        cout<<"\n2. Display Array";
        cout<<"\n3. Find Sum";
        cout<<"\n4. Find Maximum";
        cout<<"\n5. Search Element";
        cout<<"\n6. Exit";
        cout<<"\nEnter your choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter "<<n<<" elements:\n";
                for(i=0;i<n;i++)
                    cin>>a[i];
                break;

            case 2:
                cout<<"Array Elements: ";
                for(i=0;i<n;i++)
                    cout<<a[i]<<" ";
                break;

            case 3:
                sum=0;
                for(i=0;i<n;i++)
                    sum+=a[i];
                cout<<"Sum = "<<sum;
                break;

            case 4:
                max=a[0];
                for(i=1;i<n;i++)
                    if(a[i]>max)
                        max=a[i];
                cout<<"Maximum = "<<max;
                break;

            case 5:
                cout<<"Enter element to search: ";
                cin>>key;
                found=0;
                for(i=0;i<n;i++){
                    if(a[i]==key){
                        cout<<"Element found at index "<<i;
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    cout<<"Element not found";
                break;

            case 6:
                cout<<"Exiting...";
                break;

            default:
                cout<<"Invalid Choice!";
        }

    }while(ch!=6);

    return 0;
}