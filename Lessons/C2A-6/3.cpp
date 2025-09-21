#include <iostream>
using namespace std;

int score[610];
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; n++)
    {
        int x;
        cin >> x;
        int answer = 0;
        int total = 0;
        score[x]++;

        for (int j = 600; j >= 0; j--)
        {
            if (score[j] > 0)
            {
                total += score[j];
                answer = j;
                if (total >= m)
                {
                    break;
                }
            }
        }

        cout << answer << " ";
    }
    return 0;
}