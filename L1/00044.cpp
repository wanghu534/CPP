#include <iostream>
using namespace std;
int main() {
    int n, sum;
    cin >> n;

    int currentNum;
    for (int i = 0; i<=n; i++)
    {
        currentNum = i;
        while (currentNum)
        {
            if (currentNum % 10 == 2)
                sum++;
            currentNum /= 10;
        }
    }
    cout << sum << endl;
    return 0;
}