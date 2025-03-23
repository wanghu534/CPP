#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char a[100];
    fgets(a, 100, stdin);
    int len = strlen(a);
    cout << a[0] << ' ' << a[len - 1];
    return 0;
}