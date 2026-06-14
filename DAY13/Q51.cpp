#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,11,1,3,18};
    int i,d, max, min;
     max=arr[0];
     min=arr[0];
     int n=5;    //size

    for(i=1; i< n; i++) {
        if(arr[i]>max){
         max=arr[i];
        }
    }
     cout<<max <<endl ;
    
    for(i=1; i< n; i++) {
        if(arr[i]<min){
         min=arr[i];
        }
    }
    cout<<min;

}