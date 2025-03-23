#include <iostream>
using namespace std;
int main() {
    int n, beibeiNum = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= beibeiNum; j++)
        {
            cout << "beibei ";
        }
        beibeiNum++;
        cout << endl;
    }
    return 0;
}