#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr+n-3, arr + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }    
    return 0;
}