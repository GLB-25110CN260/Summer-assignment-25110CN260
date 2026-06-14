#include<iostream>
using namespace std;
int main()
{
    int arr[6]={3,6,5,9,8,7}; //size=6
    int i,d, max, max2=arr[0];
     max=arr[0];

    for(i=1; i< 6; i++) {
        if(arr[i]>max){
         max=arr[i];      
        }                   
    }                   
    for(i=1; i< 6; i++) {    
        if(arr[i]>max2 && arr[i]!=max){ 
         max2=arr[i];          
        }
    }
    cout<<max2;

}