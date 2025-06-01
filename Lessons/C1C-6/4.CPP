#include <iostream>
using namespace std;

bool judge(int n)
{
    if (n % 10 == 0)
    {
        return false;
    }
    int n1 = n;
    int reversed = 0;
    while (n1 > 0)
    {
        reversed = reversed * 10 + n1 % 10;
        n1 /= 10;
    }
    return n == reversed;
}

int main() {
    int n;
    cin >> n;

    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        // cout << i << endl;
        if (judge(i))
        {
            
            result++;
        }
    }
    cout << result;
    return 0;
}