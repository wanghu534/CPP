#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    
    int v[n], sum = 0, maxNum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
        if (v[i] > maxNum)
            maxNum = v[i];
    }

    cout << sum-maxNum;
    return 0;
}