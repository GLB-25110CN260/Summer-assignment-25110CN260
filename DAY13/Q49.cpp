#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int arr[1000];

    cout<<"Enter the number of elements in array : ";
    cin>>n;

     //entering the array elements
    cout<<"Enter the elements: ";
    for(i=0; i<n; i++)
    {
         cin>>arr[i];
    }

    // displaying the array
    for(i=0; i<n; i++)
    {
         cout<<arr[i] <<" ";
    }

}