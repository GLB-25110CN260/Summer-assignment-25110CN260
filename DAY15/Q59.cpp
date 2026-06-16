#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[]={1,2,3,4,5}; //size=5
    int n = 5;  // size
    
    int last=arr[n-1];  //saved the last element to insert it at first 
     //now traversing the array from last.... 
    for(i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0]=last;

    //printing the rotated array..
    for(i=0; i<n; i++){
        cout<<arr[i] <<" " ;
    }

}