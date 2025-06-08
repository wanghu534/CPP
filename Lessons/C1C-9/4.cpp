#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
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
        return a.mathPoint > b.mathPoint;
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
        cin >> st.chinesePoint >> st.mathPoint >> st.englishPoint;
        st.sumPoint = st.chinesePoint + st.mathPoint + st.englishPoint;
        arr[i - 1] = st;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].sumPoint << " " << arr[i].chinesePoint << " " << arr[i].mathPoint << " " << arr[i].englishPoint << endl;
    }
    return 0;
}