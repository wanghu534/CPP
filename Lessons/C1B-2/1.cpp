#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i < 10; i++)
    {
        for (int k = 0; k < 10; k++)
        {
            for (int j = 0; j < 10; j++)
            {
                cout << i << " " << k << " " << j << endl;
            }
        }
    }
    return 0;
}