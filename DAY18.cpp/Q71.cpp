#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,key,i,j,mid;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Enter element to search: ";
    cin>>key;

    i=0;
    j=n-1;
    while(i<=j)
    {
        mid=(i+j)/2;

        if(arr[mid]==key){
            cout<<"Element found at index "<<mid;
            return 0;
        }
        else if(key<arr[mid])
            j=mid-1;
        else
            i=mid+1;
    }

    cout<<"Element not found";
}