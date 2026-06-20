#include<iostream>   
using namespace std;
int main()
{
    int i, j, flag=1;   // flag 1 means matrix is symmetric
    //inputing matrix A
    int n ;
    cin>> n;
    int A[n][n] ;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    // checking 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          if(A[i][j] != A[j][i]){
            flag=0;
            break;
          }
       }
    }   
    
    if(flag==1){
        cout<<"symmetric matrix";
    }
    else
    cout<<"Not a symmetric matrix" ;

  return 0;
}