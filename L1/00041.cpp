#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int sum = 0;
    int currentNumber, single, ten ,hundred, thousand;
    for (int i = 1; i <= n; i++)
    {
        cin >> currentNumber;
        single = currentNumber - currentNumber / 10 * 10;
        ten = currentNumber / 10 - currentNumber / 100 * 10;
        hundred = currentNumber / 100 - currentNumber / 1000 * 10;
        thousand = currentNumber / 1000 - currentNumber / 10000 * 10;

        if (single-thousand-hundred-ten > 0)
            sum ++;
    }

    cout << sum << endl;
    return 0;
}