#include<iostream>
using namespace std;

int main()
{  
    int n, result = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            result++;
    }
    cout << result;
    return 0;
}