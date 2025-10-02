// 绝对素数
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    for (int i = A; i <= B; i++) {
        int inverted_i = i % 10 * 10 + (i / 10) % 10;
        bool isPrime = true;
        for (int j = 2; j < sqrt(max(i, inverted_i)); j++)
        {
            if (i % j == 0 || inverted_i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << i << endl;
        }
    }
    return 0;
}