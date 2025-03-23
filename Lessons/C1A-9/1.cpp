#include<iostream>
#include<cmath>
using namespace std;

int n;
int main()
{
    cin >> n;
    while (n)
    {
        cout << n%10 << " " << endl;
        n /= 10;
    }
    return 0;
}