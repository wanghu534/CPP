#include<iostream>
using namespace std;

int main()
{
    int m, n;
    int sum = 0;
    cin >> m >> n;
    for (int i=m; i<=n; i++)
    {
        if (i%17==0)
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}