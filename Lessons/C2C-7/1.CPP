#include <iostream>
using namespace std;

int a[1001];

int main() {
    int V;
    cin >> V;
    for (int i = 1; i <= V; i++)
        cin >> a[i];

    int v, w;
    cin >> v >> w;
    for (int i = 1; i <= V; i++) {
        if (i >= v && a[i - v] != -1)
            cout << max(a[i], w + a[i - v]) << " ";
        else
            cout << a[i] << " ";
    }
    return 0;
}