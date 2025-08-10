// 五角星数
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int a[n - m + 1], result, index = 0;
    for (int i = m; i <= n; i++)
    {
        int currentNum = i;
        result = 0;
        while (currentNum > 0)
        {
            result += pow(currentNum % 10, 5);
            currentNum /= 10;
        }
        if (result == i)
        {
            a[index] = result;
            index++;
        }
    }

    if (index == 0)
    {
        cout << "no" << endl;
    }
    else
    {
        for (int i = 0; i < index; i++)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}