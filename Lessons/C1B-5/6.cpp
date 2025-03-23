#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    int n;
    cin >> n;

    double v[n], sum = 0, maxNum = 0, minNum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
        
        if (v[i] > maxNum) {
            maxNum = v[i];
        }
        if (v[i] < minNum || i == 0) {
            minNum = v[i];
        }
    }

    cout << fixed << setprecision(2) << endl;
    cout << (sum-maxNum-minNum)/(n-2) << endl;

    return 0;
}