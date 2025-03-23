#include <iostream>

using namespace std;
int main() {
    int v[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> v[i];
    }

    int h;
    cin >> h;
    h += 30;

    int total = 0;
    for (int i = 0; i < 10; i++)
    {
        if (h >= v[i])
            total++;
    }
    cout << total << endl;
    return 0;
}