#include<iostream>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    y *= 1000;
    if (x < y)
        cout << "noodles";
    else if (y < x)
        cout << "orange";
    else if (x == y)
        cout << "same";
    return 0;
}