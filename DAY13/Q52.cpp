#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,4,7,3,18};
    int i ;
    int even=0;
    int odd=0;
     int n=5;    //size

    for(i=0; i< n; i++) {
        if(arr[i]%2==0){
            even++;
        }
        else
        odd++;
    }

    cout<<even <<endl ;
    cout<<odd;

}