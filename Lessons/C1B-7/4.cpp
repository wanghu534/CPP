#include <iostream>
using namespace std;

char a[101];
int main()
{
    cin >> a;
    for (int i = 0; i <= 100; i++)
    {
        if (a[i] >= 97 && a[i] <= 122)
            a[i] -= 32;
    }
    cout << a;
    return 0;
}