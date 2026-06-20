#include<iostream>
using namespace std;
int main()
{
    int i, j, m, n, sum=0 ;
    cin>>m >>n;
    //inputing matrix A
    int A[m][n] ;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    // adding
    for(j=0;j<n;j++){
        sum=0;
        for(i=0;i<m;i++){
            sum+=A[i][j] ;
        }
          cout<<"sum of col" << j+1 <<" = " << sum <<endl;    
    }
   
    return 0 ;
}