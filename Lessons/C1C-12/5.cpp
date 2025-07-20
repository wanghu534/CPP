// 买奖品
#include <iostream>
#include <cstring>
using namespace std;

struct Pen
{
    string brand;
    int price;
};

int main() {
    int n;
    cin >> n;
    Pen arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].brand >> arr[i].price;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i].brand == "hero")
        {
            cout << arr[i].brand << " " << arr[i].price << endl;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i].brand == "deli")
        {
            cout << arr[i].brand << " " << arr[i].price << endl;
        }
    }
    return 0;
}