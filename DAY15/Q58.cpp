#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[]={1,2,3,4,5}; //size=5
    int n = 5;  // size
    
    int first=arr[0];  //saved the first element to later insert it at last 
      
    for(i=0; i< (n-1) ; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1]=first;

    //printing the rotated array..
    for(i=0; i<n; i++){
        cout<<arr[i] <<" " ;
    }

}
