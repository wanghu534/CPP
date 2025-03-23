#include<iostream>
using namespace std;

int main()
{
    double a, b, n;
    cin >> a >> b >> n;
    cout << not (a<=n && n<=b) << endl;
    return 0;
}