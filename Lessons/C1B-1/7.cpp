#include <iostream>
using namespace std;
int main() {
    int n;
    long long result, sum = 0;
    cin >> n;
    for (int i = n; i > 0; i--)
    {    
        result = 1;
        for (int j = i; j > 0; j--)
        {
            result *= j;
        }
        sum += result;
    }
    cout << sum;
    return 0;
}