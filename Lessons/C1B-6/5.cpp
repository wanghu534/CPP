#include <iostream>
using namespace std;

int arr[201];
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr[temp]++;
    }

    for (int i = 0; i < 201; i++) {
        if (arr[i] > 0) {
            for (int j = 0; j < arr[i]; j++)
                cout << i << " ";
        }
    }
    return 0;
}