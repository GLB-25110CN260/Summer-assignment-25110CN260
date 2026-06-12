#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n)
{
    int temp = n;
    int digits = 0;
    int sum = 0;
    // Count digits
    while(temp > 0){
        digits++;
        temp=temp/10;
    }
    temp = n;
    // Calculate sum of powers
    while(temp > 0)
    {
        int digit = temp % 10;
        sum=sum+pow(digit, digits);
        temp = temp/10;
    }

    return sum == n;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isArmstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";
    return 0;
}