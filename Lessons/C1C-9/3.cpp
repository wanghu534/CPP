#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
    int number;
    int chinesePoint;
    int mathPoint;
    int englishPoint;
    int sumPoint;
};

bool cmp(Student a, Student b)
{
    if (a.sumPoint != b.sumPoint)
    {
        return a.sumPoint > b.sumPoint;
    }
    else if (a.chinesePoint != b.chinesePoint)
    {
        return a.chinesePoint > b.chinesePoint;
    }
    else
    {
        return a.number < b.number;
    }
}

int main()
{
    int n;
    cin >> n;
    Student arr[n] = {0};
    for (int i = 1; i <= n; i++)
    {
        Student st;
        st.number = i;
        cin >> st.chinesePoint >> st.mathPoint >> st.englishPoint;
        st.sumPoint = st.chinesePoint + st.mathPoint + st.englishPoint;
        arr[i - 1] = st;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].number << " " << arr[i].sumPoint << endl;
    }
    return 0;
}