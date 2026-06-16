#include<iostream>
using namespace std;
int main()
{
    int i, j, x;
    int arr[]={3,1,2,0,2,4};
    int n=6;
    cout<<"enter the x :";  // given sum
    cin>>x;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++){
            if( arr[i] + arr[j] == x){
                cout<<arr[i] <<","<<arr[j] <<endl;
            }
        }
    }

}