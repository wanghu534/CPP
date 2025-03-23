#include <iostream>
using namespace std;
int main() {
    int n, x, total;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        while (temp)
        {
            if (temp % 10 == x)
                total++;
            temp /= 10;
        }
    }
    cout << total;
    return 0;
}