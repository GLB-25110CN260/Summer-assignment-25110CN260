#include<iostream>
using namespace std;

int rev=0;   // GLOBAL VARIABLE

int revNum(int n)
{
  if(n == 0){
    return rev;
  }
  rev= rev*10 + n%10;
  return revNum(n / 10);
}

int main()
{
     int n;
     cout<<"Enter The NUMBER : ";
     cin>> n;

     cout<<"reverse num = " <<revNum(n);
     return 0;
}