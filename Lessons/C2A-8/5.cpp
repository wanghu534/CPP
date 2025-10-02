// 肥宅的锻炼
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long LCM = arr[0], GCD, num1, num2, r;
    for (int i = 1; i < n; i++)
    {
        num1 = LCM;
        num2 = arr[i];
        while (num1 % num2 != 0) {
            r = num1 % num2;
            num1 = num2;
            num2 = r;
        }
        GCD = num2;
        LCM = LCM * arr[i] / GCD;
    }
    cout << LCM;
    return 0;
}