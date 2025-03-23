#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << (a/10 == b-b/10*10 && a-a/10*10 == b/10);
    return 0;
}