#include <iostream>
using namespace std;
int main() {
    int n, space, star = 1;
    cin >> n;
    
    for (int i = 1; i <=n; i++)
    {
        space = n-i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
        star += 2;
    }
    return 0;
}