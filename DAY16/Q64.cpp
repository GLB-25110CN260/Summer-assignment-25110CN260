#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[1000];
    cout<<"enter the array elements : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(i=0;i<n;i++)
    {
      bool duplicate = false;

      for(j=0;j<i;j++){  
        if(arr[i]==arr[j]){
            duplicate= true;
            break;
        }
    }
    if(!duplicate){
        cout<<arr[i] <<" ";
    }
  }
   return 0;
}