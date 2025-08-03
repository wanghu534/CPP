// 钱币
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int coins[n];
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i < n-1)
        {
            coins[i+1] += coins[i]/10;
            coins[i] %= 10;
        }
    }

    for (int i = n-1; i >= 0; i--)
    {
        cout << coins[i] << " ";
    }
    return 0;
}