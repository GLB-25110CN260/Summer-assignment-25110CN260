#include<iostream>
using namespace std;

int add(int n1, int n2){    
    int sum=n1+n2;
    return sum;
}

int main(){

    int a=4;
    int b=9;
    cout<<"sum="<<add(a,b) ;  
    return 0; 

}