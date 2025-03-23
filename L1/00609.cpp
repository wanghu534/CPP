#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double n, n1;
    scanf("%lf", &n);
    scanf("%lf", &n1);
    printf("%d\n%.2lf", int(n+n1), n/n1);
    return 0;
}