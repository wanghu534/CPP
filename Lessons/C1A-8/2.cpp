#include<iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int result;
    for (int i=m; i<=n; i++)
    {
        if (i%2!=0)
        {
            result += i;
        }
    }
    cout << result;
    return 0;
}