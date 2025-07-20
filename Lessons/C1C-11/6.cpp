#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct Student
{
    int num;
    string name;
    int point;
};

bool cmp(Student a, Student b)
{
    if (a.point != b.point)
    {
        return a.point > b.point;
    }
    else
    {
        return a.num < b.num;
    }
}

int main() {
    Student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i].num >> arr[i].name >> arr[i].point;
    }
    sort(arr, arr+3, cmp);
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].num << ' ' << arr[i].name << ' ' << arr[i].point << endl;
    }
    return 0;
}