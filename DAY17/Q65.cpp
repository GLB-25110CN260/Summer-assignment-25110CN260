#include <iostream>
using namespace std;

int main() {
    int i;
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};

    int c[10];
    // Copy first array
    for (int i = 0; i < 5; i++) {
        c[i] = a[i];
    }
    // Copy second array
    for (i=0; i < 5; i++) {
        c[5 + i] = b[i];
    }

    cout<<"Merged Array: ";
    for (i=0; i < 10; i++) {
        cout<<c[i]<< " ";
    }

}