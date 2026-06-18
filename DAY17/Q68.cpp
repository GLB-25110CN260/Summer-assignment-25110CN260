#include<iostream>
using namespace std;

int main()
{
    int a[100],b[100],n,m,i,j;

    cout<<"Enter size of first array: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0;i<n;i++)
        cin>>a[i];

    cout<<"Enter size of second array: ";
    cin>>m;
    cout<<"Enter elements: ";
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    cout<<"Common elements are: ";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }

    return 0;
}