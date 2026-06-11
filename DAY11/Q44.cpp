#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1||n==0){
      return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int a;  // enter the number whose factorial you wanna find
    cout<<"ENTER THE NUMBER : ";
    cin>>a;
    cout<<"THE FACTORIAL = " ;
    cout<<factorial(a);
    
    return 0;

}