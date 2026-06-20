#include<iostream>
using namespace std;
int main()
{
    int i, j, m, n ;
    cin>>m >>n;
    //inputing first matrix A
    int A[m][n] ;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    //inputing second matrix B
    int B[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>B[i][j] ;
        }
    }
    // adding
    int C[m][n] ;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            C[i][j]= A[i][j] + B[i][j] ;
        }
    }
    //printing sum
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           cout<< C[i][j] <<" " ;
        }
         cout<<endl;
    }
   
    return 0 ;
}