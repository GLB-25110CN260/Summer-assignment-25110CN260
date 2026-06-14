#include<iostream>   // linear search
using namespace std;
int main()
{
    int i,key;  
    int arr[]={4,6,8,9,1};
    cout<<"enter the element to search :" ;  // key
    cin>>key;
    int ans;
    int size= sizeof(arr)/ sizeof(arr[0]);
    for(i=0; i<size; i++){
        if(arr[i]==key){
            cout<<i <<endl;
            ans=1;
            break;
        }
    }
    if(ans!=1)
    {
        cout<<"-1";
    }
    
}