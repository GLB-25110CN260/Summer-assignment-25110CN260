#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int actsum=0;  //actual sum
    int expsum=0;  //expected sum
    cout<<"Enter the value of n ie consecutive numbers : ";
    cin>>n;
    int arr[1000] ;
    
    cout<<"enter" <<n-1 <<"elements";  // ie one number missing
    for(i=0;i<n-1;i++){  
        cin>>arr[i];
        actsum = actsum+arr[i];
    }
    expsum = n*(n+1)/2 ;   //sum of n consecutive numbers 

    cout<<"missing number=" << expsum-actsum ;

}