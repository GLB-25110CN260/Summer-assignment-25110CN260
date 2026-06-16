#include<iostream>
using namespace std;
int main()
{
    int arr[]={6,6,1,6,6,1,3};
    int n=7;
    int i, j, elem, temp=0;
    int frequency =0;    
    
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){  
        if(arr[i]==arr[j]){
            frequency++;
        }
      }
      if(frequency>temp){
        elem=arr[i] ;
      }
       temp=frequency;
       frequency=0; // resetting the frequency back to 0 so that it can count fresh
    }
      cout<<elem;
}