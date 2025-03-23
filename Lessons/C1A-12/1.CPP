#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n /= 100;
    cout << n%10 << endl;
    return 0;
}