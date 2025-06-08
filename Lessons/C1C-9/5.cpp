#include <iostream>
using namespace std;

struct Triangle
{
    int base;
    int height;
    int area;
};


int main() {
    int n;
    cin >> n;
    Triangle arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].base >> arr[i].height;
        arr[i].area = (arr[i].base * arr[i].height) / 2;
        cout << arr[i].base << " " << arr[i].height << " " << arr[i].area << endl;
    }
    return 0;
}