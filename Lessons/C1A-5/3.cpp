#include<iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;
    cout << (65<=a && a<=90 || 97<=a && a<=122);
    return 0;
}