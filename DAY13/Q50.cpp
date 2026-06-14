#include<iostream>
using namespace std;
int main()
{
    int i,n, sum=0;
    int arr[1000];

    cout<<"Enter the number of elements in array : ";
    cin>>n;

     //entering the array elements
    cout<<"Enter the elements: ";
    for(i=0; i<n; i++)
    {
         cin>>arr[i];
    }
     // sum of array
    for(i=0; i<n; i++){
        sum+=arr[i] ;
    }
    cout<<sum <<endl ;

    // average of array
     double avg = (double) sum/n;
     cout<<avg;
    
}