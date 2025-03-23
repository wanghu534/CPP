#include <iostream>

int FeiCheng, FeiZhai, PangHu;
int a[5];

using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a[temp]++;
    }

    for (int i = 1; i < 4; i++)
        cout << a[i] << " ";
    return 0;
}