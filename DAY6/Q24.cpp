#include<iostream>
using namespace std;
 int main()
{
   int n, i=1, power, ans=1;
   cout<<"ENTER THE NUMBER and the power :" ;
   cin>>n>>power;

   while(i<=power)
   {
    ans=ans*n;
    i++;
   }
   cout<<ans;

    return 0;

}
 