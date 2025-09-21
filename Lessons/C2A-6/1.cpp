// 插入排序
#include<iostream>
using namespace std;

void insert_sort(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        int temp = a[i];
        int j;
        for (j = i - 1; j >= 0 && temp < a[j]; j--)
        {
            a[j+1] = a[j];
        }
        a[j+1] = temp;
    }
}

int a[1000];
int main()
{    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    insert_sort(a, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}