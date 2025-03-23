#include<iostream>
#include<cmath>
// #include<algorithm>
using namespace std;

int main()
{
    double n, x, y;
    cin >> n >> x >> y;

    int final_n = floor(n-(y/x));
    
    if (final_n <= 0)
        cout << 0 << endl;
    else
        cout << final_n << endl;
    return 0;

}
