#include<iostream>
using namespace std;
int main()
{
    int i, j, k;
    //inputing matrix A
    int m, n ;
    cin>>m >>n;
    int A[m][n] ;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    // transpose of A
    int transpose[n][m] ;  // rows and cols will interchange
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            transpose[i][j] = A[j][i] ;
        }
    }
    // printing transpose
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        cout<<transpose[i][j] <<" ";
        cout<<endl;
       }
    }

  return 0;

}