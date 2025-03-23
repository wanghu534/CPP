#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int maxNum = 0, minNum = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > maxNum)
            maxNum = v[i];
        if (v[i] < minNum || i == 0)
            minNum = v[i];
    }

    cout << maxNum - minNum;

    return 0;
}