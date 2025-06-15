#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct Student
{
    int id;
    string name;
    int mathPoint;
    int chinesePoint;
    int englishPoint;
};

bool compare(Student a, Student b) {
    if (a.mathPoint != b.mathPoint)
        return a.mathPoint > b.mathPoint;
    else if (a.chinesePoint != b.chinesePoint)
        return a.chinesePoint > b.chinesePoint;
    else if (a.englishPoint != b.englishPoint)
        return a.englishPoint > b.englishPoint;
    else
        return a.id < b.id;
}

int main() {
    Student arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i].id >> arr[i].name >> arr[i].mathPoint >> arr[i].chinesePoint >> arr[i].englishPoint;
    }
    sort(arr, arr+5, compare);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].id << " " << arr[i].name << " " << arr[i].mathPoint << " " << arr[i].chinesePoint << " " << arr[i].englishPoint << endl;
    }

    return 0;
}