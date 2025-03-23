#include<iostream>
using namespace std;

int main()
{
    long long x;
    cin >> x;
    long long number = x*x;
    cout << number/100-number/1000*10;
    return 0;
}