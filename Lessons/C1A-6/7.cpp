#include<iostream>
using namespace std;

int main()
{
    int Chinese, Math;
    cin >> Chinese >> Math;
    if (Chinese < 60 && Math >=60)
        cout << 1;
    else if (Chinese >= 60 && Math < 60)
        cout << 1;
    else 
        cout << 0;
    return 0;
}