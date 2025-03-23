#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    cout << (a%100 == 0 && a%400 == 0 || a%100 != 0 && a%4 == 0);
    return 0;
}