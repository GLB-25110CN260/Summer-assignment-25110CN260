#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    int arr[10000];
    cout<<"enter the number of elements in array: ";
    cin>>n;
    cout<<"enter the elements : ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i< n-1 ;i++)
    {
        int index = i;   
       for(j=i+1;j<n; j++)
       {
          if(arr[index] > arr[j]){  
            index= j;
          }
       }
       swap(arr[i],arr[index]);  
    }
    //now printing the sorted array...
    for(i=0;i<n;i++)
    {
        cout<<arr[i] <<"  ";
    }

}