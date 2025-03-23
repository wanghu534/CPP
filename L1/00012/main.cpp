#include<iostream>
using namespace std;

int main()
{
    int x, y, n, r;
    cin >> x >> y >> n >> r;
    int xm_square = x*y;
    int xh_square = n*n;
    double xl_square = 3.14*r*r;

    if (xl_square >= xh_square && xh_square >= xm_square)
        cout << "xiaoli";
    else if (xh_square > xl_square && xh_square >= xm_square)
        cout << "xiaohong";
    else if (xm_square > xl_square && xm_square > xh_square)
        cout << "xiaoming";
    return 0;
}