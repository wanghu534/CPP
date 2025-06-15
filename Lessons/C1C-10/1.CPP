#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
    int number;
    string name;
    string gender;
    int score;
};



int main() {
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].number >> arr[i].name >> arr[i].gender >> arr[i].score;
    }
    for (int i = n-1; i >= 0; i--)
    {
        cout << arr[i].number << " " << arr[i].name << " " << arr[i].gender << " " << arr[i].score << endl;
    }
    return 0;
}