#include<iostream>
using namespace std;
int main()
{
    int i,j, c=0 ;
    int arr[]= {1,0,1,0,1,0,0} ;
    int n = 7;
    //counting number of zeros....
    for(i=0;i<n;i++){
        if(arr[i] == 0){
            c++;
        }
    }
    
    for(i=0;i<c;i++)
    {
        arr[i]=0;
    }
    for(i=n-c+1; i<n; i++){
        arr[i] = 1;
    }
    //printing the sorted array...
    for(i=0;i<n;i++){
        cout<<arr[i] ;
    }

}