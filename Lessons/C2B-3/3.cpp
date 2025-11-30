// 斐波那契
#include <iostream>
using namespace std;

int n;
int fib(int n)
{
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fib(n - 1) + fib(n - 2);
}


int main() {
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}