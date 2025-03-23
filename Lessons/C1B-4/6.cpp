#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    int v[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int targetNum, result = 0;
    cin >> targetNum;
    for (int i = 0; i < n; i++) {
        if (v[i] == targetNum)
            result++;
    }

    cout << result << endl;
    return 0;
}