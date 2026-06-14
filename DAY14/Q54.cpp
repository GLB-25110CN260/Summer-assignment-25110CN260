#include<iostream>
using namespace std;
int main()
{
    int arr[7]={3,5,1,6,3,1,3};
    int i, x;
    int frequency =0;    
    cout<<"enter the elements whose frequency you wanna find :" ; // x
    cin>>x;
    
    for(i=0;i<7;i++){  
        if(arr[i]==x){
            frequency++;
        }

      }
      cout<<frequency;
}