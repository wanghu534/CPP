#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    int v[n];
    int h;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cin >> h;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == h)
            continue;
        else
            cout << v[i] << " ";
    }

    return 0;
}