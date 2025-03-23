#include <iostream>
using namespace std;
int main() {
    int n, total;
    cin >> n;

    int temp;
    for (int i = 1; i <= n; i++)
    {
        temp = i;
        while(temp)
        {
            if (temp % 10 == 6)
                total++;
            temp /= 10;
        }
    }
    cout << total;
    return 0;
}