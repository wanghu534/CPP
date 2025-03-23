#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    int k = 1;
    while (n*k <= m)
    {
        k++;
    }
    cout << k << endl;
    return 0;
}