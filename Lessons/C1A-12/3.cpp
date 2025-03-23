#include<iostream>
using namespace std;

int main()
{
    int n, result = 1;
    cin >> n;
    while (n > 0)
    {
        result *= n % 10;
        n /= 10;
    }
    cout << result;
    return 0;
}