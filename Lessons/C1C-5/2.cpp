#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

double money(int num)
{
    return ceil(num/70.0)*0.1;
}

int main() {
    int n;
    cin >> n;

    double sum = 0, number;
    for (int i = 1; i <= n; i++) {
        cin >> number;
        sum += money(number);
    }
    printf("%.1lf", sum);
    return 0;
}