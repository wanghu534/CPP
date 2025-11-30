// 涨工资
#include <iostream>
using namespace std;

int n;
int raiseSalary(int n)
{
    if (n == 1) return 1;
    else if (n == 2) return 3;
    else if (n == 3) return 5;
    else return raiseSalary(n - 1) + raiseSalary(n - 3);
}

int main() {
    cin >> n;
    cout << raiseSalary(n) << endl;
    return 0;
}