#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != v[n-i-1])
            flag = false;
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}