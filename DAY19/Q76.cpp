#include<iostream>
using namespace std;
int main()
{
    int i, j, m, n, sum=0 ;
    cin>>m >>n;
    if(m!=n){
        cout<<"diagonal exist only of square matrix";
    }
    //inputing matrix A
    int A[m][n] ;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>A[i][j];
            if(i==j){
                sum+= A[i][j] ;
            }
        }
    }
   
    cout<<sum;

    return 0 ;
}