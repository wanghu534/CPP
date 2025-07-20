#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int zpl = 0, zsq = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        zsq += arr[i];
    }

    int need = 0, maxNum = 0;
    while (zpl <= zsq)
    {
        maxNum = 0;
        for (int i = 0; i < n; i++)
        {
            maxNum = max(maxNum, arr[i]);
        }
        zpl += maxNum;
        // cout << maxNum << endl;
        zsq -= maxNum;
        need++;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == maxNum)
            {
                arr[i] = 0;
                break;
            }
        }
    }

    cout << need << endl;
    // cout << zpl << " " << zsq << endl;
    return 0;
}