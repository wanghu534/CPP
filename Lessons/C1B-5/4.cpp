#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    int n;
    double totalPoint = 0;
    cin >> n;

    double v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        totalPoint += v[i];
    }
    double average = totalPoint / n;
    cout << fixed << setprecision(2);
    cout << average << endl;

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > average)
            result++;
    }

    cout << result << endl;
    
    return 0;
}