#include <iostream>
using namespace std;

int juge(int x, int y)
{
    int number = 0;
    for (int i = x; i <= y; i++)
    {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
        {
            number++;
        }
    }
    return number;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << juge(x, y);
    return 0;
}