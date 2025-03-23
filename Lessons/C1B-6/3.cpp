#include <iostream>

int a[1000];
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a[temp-1]++;
    }

    int num = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (a[i] > 0)
            num++;
    }
    cout << num;
    return 0;
}