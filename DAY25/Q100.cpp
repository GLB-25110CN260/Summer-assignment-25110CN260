#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a[10],temp;
    int n;

    cout<<"Enter number of words: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i].length()>a[j].length()) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    cout<<"Sorted words:\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}