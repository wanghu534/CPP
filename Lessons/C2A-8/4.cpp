// 素数的筛法
#include <cmath>
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    cout << n;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        bool flag = true;
        if (x == 1) {
            printf("%s\n", "NO");
            continue;
        }
        for (int j = 2; j <= sqrt(x); j++) {
            if (x % j == 0) {
                flag = false;
                break;
            }
        }
        
        if (flag == true)
            printf("%s\n", "YES");
        else 
            printf("%s\n", "NO");
    }
    return 0;
}