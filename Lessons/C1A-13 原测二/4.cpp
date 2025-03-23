#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;

    if (x > 0)
        x += 1;
    else
        x *= -1;
    
    if (x%2 == 0)
    {
        if (x/10%2 == 0)
            cout << "666";
        else
            cout << "233";
    }
    else if (x/100%10 %3 == 0)
        cout << "777";
    else 
        cout << "123";
    return 0;
}