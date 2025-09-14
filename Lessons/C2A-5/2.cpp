// 肥成学选择-另一种规则的选择排序
#include <algorithm>
#include <iostream>
using namespace std;

int cmp = 0;
int swp = 0;

void choose_sort(int a[], int L, int R) {
    for (int i = L; i < R; i++) {
        int minN = i;
        for (int j = i + 1; j <= R; j++) {
            cmp++;
            if (a[j] < a[minN]) {
                minN = j;
            }
        }
        if (minN != i)
        {
            swp++;
            swap(a[minN], a[i]);
        }
        
        
    }
}

int a[1000];
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    choose_sort(a, 0, n - 1);

    cout << cmp << " " << swp;

    return 0;
}