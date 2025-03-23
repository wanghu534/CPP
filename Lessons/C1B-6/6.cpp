#include <iostream>
using namespace std;

int arr[5001];
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr[temp]++;
    }

    for (int i = 0; i < 5001; i++) {
        if (arr[i] > 0) 
            cout << i << " ";
    }
    return 0;
}