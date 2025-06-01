#include <iostream>
using namespace std;

int func(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int result = 0;
    for (int i = 2; i <= n; i++)
    {
        if (func(i) == i)
        {
            cout << i << " ";
        }
    }
    return 0;
}