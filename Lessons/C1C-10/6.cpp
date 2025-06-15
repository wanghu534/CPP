#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
    string name;
    int point;
};

int main()
{
    int n;
    cin >> n;
    Student students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].point;
    }
    int maxNum = 0, minNum = 100;
    for (int i = 0; i < n; i++)
    {
        if (students[i].point > maxNum)
        {
            maxNum = students[i].point;
        }
        if (students[i].point < minNum)
        {
            minNum = students[i].point;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (students[i].point == maxNum)
        {
            cout << students[i].name << " " << students[i].point << endl;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (students[i].point == minNum)
        {
            cout << students[i].name << " " << students[i].point << endl;
        }
    }
    return 0;
}