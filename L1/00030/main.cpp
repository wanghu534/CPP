#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 2025)
        cout << "NO";
    else if (b > 8)
        cout << "NO";
    else if (c >= 20)
        cout << "NO";
    else 
        cout << "YES";
    return 0;
}