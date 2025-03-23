#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    int v[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int k, result = 0;
    cin >> k;
    for (int i = 0; i < n; i++) {
        if (v[i] > k)
            ;
        else 
            result++;
    }

    cout << result << endl;
    return 0;
}