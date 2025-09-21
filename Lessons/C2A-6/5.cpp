#include<iostream>
#include<algorithm>
using namespace std;

struct Patient
{
    string ID;
    int age;
    int id;
};

bool cmp(Patient a, Patient b)
{
    if (a.age < 60 && b.age < 60)
    {
        return a.ID < b.ID;
    }
    else
    {
        if (a.age != b.age)
        {
            return a.age > b.age;
        }
        else
        {
            return a.ID < b.ID;
        }
    }
}

Patient a[1000];
int main()
{    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].ID >> a[i].age;
        a[i].id = i;
    }
    sort(a, a+n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].ID << endl;
        
    }
    return 0;
}