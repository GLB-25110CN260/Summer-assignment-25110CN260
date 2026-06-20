#include<iostream>
using namespace std;
int main()
{
    int i, j, k;
    //inputing first matrix A
    int r1, c1 ;
    cin>>r1 >>c1;
    int A[r1][c1] ;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    //inputing second matrix B
    int r2, c2 ;
    cin>>r2 >>c2;
    int B[r2][c2];
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cin>>B[i][j] ;
        }
    }
    if(c1!=r2){
        cout<<"matrix mul is not possible" ;
    }
   // multiplying A and B
   int C[i][j] ;
   for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
        int value=0;
        for(k=0;k<c1;k++){
            value+= A[i][k]*B[k][j] ;
        }
        C[i][j] = value ;
     }
   }
   //printing matrix C
   for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
       cout<< C[i][j] <<" " ;
       cout<<endl;
    }
   }
   return 0;
}