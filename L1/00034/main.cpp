#include<iostream>
using namespace std;

int main()
{
    int n, result;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        if (i%7 == 0)
        {
            cout << i << " ";
            result += i;
        }
    }
    cout << endl << result;
    return 0;
}