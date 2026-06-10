#include<iostream>
using namespace std; 
int main()
{
    int m, n, j, k, i;
    cout<<"enter rows and cols";
    cin>>m >> n;  
    for(i=1; i<=m; i++){
        for(j=1; j<=(n-i); j++){
                        
            cout<<" ";  

        }   

        for(k=1; k<=i; k++){
            cout<<k;
        }

       for(k=i-1; k>=1; k--){
         cout<<k;
       }
       cout<<endl;
    }
    
} 