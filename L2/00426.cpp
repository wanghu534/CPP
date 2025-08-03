#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int result = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            for (int k = 1; k <= n-i-j; k++)
            {
                if (3*i + j + (k/3) == 100)
                {
                    result++;
                }
            }
        }
    }
    cout << result;
    return 0;
}