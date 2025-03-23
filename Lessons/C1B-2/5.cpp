#include <iostream>
using namespace std;
int main() {
    int n, total;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        total++;
    }
    if (total == 4)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}