#include<iostream>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    x *= 1000;
    if (x > y)
        cout << "FC";
    else if (y > x)
        cout << "FZ";
    else if (x == y )
        cout << "SAME";
    return 0;
}