#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long a, n;
    cin >> a >> n;
    
    cout << a%(long long )pow(10,n);
    return 0;
}