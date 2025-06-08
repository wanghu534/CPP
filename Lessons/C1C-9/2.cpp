#include <iostream>
#include <algorithm>
using namespace std;

struct Rect
{
    int edge1;
    int edge2;
    int area;
};

int main() {
    int n;
    cin >> n;
    Rect arr[n];
    for (int i = 0; i < n; i++)
    {
        Rect rect;
        cin >> rect.edge1 >> rect.edge2;
        rect.area = rect.edge1 * rect.edge2;
        arr[i] = rect;
    }
    for (int i = n-1; i >= 0; i--)
    {
        Rect rect = arr[i];
        cout << max(rect.edge1, rect.edge2) << ' ' << min(rect.edge1, rect.edge2) << ' ' << arr[i].area << endl;
    }
    return 0;
}