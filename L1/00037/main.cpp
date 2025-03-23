#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    for (int i = 1; i<=4; i++)
    {
        for (int j = 1; j<=4; j++)
        {
            if (j == i)
                continue;
            for (int k = 1; k<=4; k++)
            {
                if (k == i || k == j)
                    continue;
                sum++;
                cout << i << j << k << endl;
            }
        }
    }
    cout << sum << endl;
    return 0;
}