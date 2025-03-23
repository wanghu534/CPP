#include <iostream>

using namespace std;
int a[1000];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a[temp - 1]++;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}