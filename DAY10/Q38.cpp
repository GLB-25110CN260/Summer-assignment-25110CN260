#include<iostream>
using namespace std;
int main(){
    int n, i, j;
    cout<<"enter n : ";
    cin>>n;
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=(n-i) ; j++){ // we don't want any space in first iteration so j<n-i
            cout<<" ";
        }
        for(j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
}