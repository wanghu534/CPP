#include <iostream>

using namespace std;
int main() {
    int v[20];
    for (int i = 1; i <= 14; i++)
        cin >> v[i];

    int schoolHour = 1, otherHour = 2;
    int totalHourV[8];
    for (int i = 1; i <= 7; i++)
    {
        totalHourV[i] = v[schoolHour] + v[otherHour];
        schoolHour += 2;
        otherHour += 2;
    }

    // for (int i = 1; i <= 7; i++)
    // {
    //     cout << totalHourV[i] << endl;
    // }

    int result, unhappinessLevel = 0;
    for (int i = 1; i <= 7; i++)
    {
        if (totalHourV[i] > 8 && totalHourV[i] > unhappinessLevel)
        {
            unhappinessLevel = totalHourV[i];
            result = i;
        }
    }
    cout << result;
    return 0;
}