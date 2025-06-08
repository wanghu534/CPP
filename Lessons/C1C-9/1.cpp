#include <iostream>
using namespace std;

struct Rect
{
    int length;
    int breadth;
    int area;
    int perimeter;
};



int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Rect rect;
        cin >> rect.length >> rect.breadth;
        rect.area = rect.length * rect.breadth;
        rect.perimeter = 2 * (rect.length + rect.breadth);
        cout << rect.length << ' ' << rect.breadth << ' ' << rect.area << ' ' << rect.perimeter << endl;
    }
    return 0;
}