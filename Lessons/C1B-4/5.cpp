#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    int v[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int maxNum = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= maxNum)
        {
            maxNum = v[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == maxNum)
        {
            cout << maxNum << endl
                 << i+1 << endl;
            break;
        }
    }


    return 0;
}