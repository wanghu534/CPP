#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int x;
    cin >> x;

    int result = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            result = i + 1;
            break;
        }
    }
    cout << result << endl;
    return 0;
}