#include <iostream>
using namespace std;

int a[100000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp % 2 != 0)
            a[temp]++;
    }

    for (int i = 0; i < 100000; i++)
    {
        while (a[i]--)
        {
            cout << i << " ";
        }
    }
    return 0;
}