#include<iostream>
using namespace std;
int main()
{
    int i, j ;
    int arr[7]={1,2,3,2,3,5,4}; 
    int n=7;

    for(i=0; i<n; i++)
    {
        int indexi = i ;
        for(j=i+1; j<n; j++)
        {
           if(arr[i] == arr[j])
           {
            cout<<arr[j] << endl ;
           }
           
        }
    }
    


}