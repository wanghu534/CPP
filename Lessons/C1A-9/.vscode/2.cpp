#include<iostream>
using namespace std;

int n, result;
int main()
{
    cin >> n;
    while (n)
    {   // 
        result = result*10+n%10;;
        n /= 10;
    }
    cout << result;
    return 0;
}