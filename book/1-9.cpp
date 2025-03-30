#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int val = 1;
    while (val <= 100)
    {
        sum += val;
        ++val;
    }
    cout << sum << endl;
    return 0;
}