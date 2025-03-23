#include<iostream>
using namespace std;
int main()
{
    int n, small;
    cin >> n;
    cin >> small;
    for (int i = 1; i<n; i++)
    {
        int temp = 0;
        cin >> temp;
        if (small > temp)
            small = temp;
    }
    cout << small;
    return 0;
}