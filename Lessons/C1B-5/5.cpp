#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n-1)
            continue;
        if (v[i] < v[i-1] && v[i] < v[i+1])
            result++;
    }

    cout << result << endl;
    return 0;
}