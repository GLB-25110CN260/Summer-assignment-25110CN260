#include<iostream>
using namespace std; 
int main()
{
    int m, n, j, i;
    cout<<"enter rows and cols";
    cin>>m >> n;  
    for(i=1; i<=m; i++){
        for(j=1; j<=(n-i); j++){  
                
            cout<<" ";  

        }   

        for(j=1; j<=i; j++){
            cout<<char('A'+j-1);
        }

       for(j=i-1; j>=1; j--){
         cout<<char('A'+j-1);
       }
       cout<<endl;
    }
    
} 