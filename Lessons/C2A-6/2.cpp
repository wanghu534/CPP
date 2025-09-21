#include <iostream>
using namespace std;

int a[1000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a[temp]++;
    }

    for (int i = 0; i < 1000; i++)
    {
        while (a[i]--)
        {
            cout << i << " ";
        }
    }
    return 0;
}