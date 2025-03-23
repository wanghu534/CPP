#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int n_number=1;
    for (int i=1; i<=n; i++)
    {
        n_number *= i;
    }
    cout << n_number;
    return 0;
}