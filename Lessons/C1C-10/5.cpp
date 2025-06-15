#include <iostream>
#include <cstring>
using namespace std;

struct Book
{
    int id;
    string name;
    string writer;
};

int main() {
    int n;
    cin >> n;
    Book books[n];
    for (int i = 0; i < n; i++)
    {
        cin >> books[i].id >> books[i].name >> books[i].writer;
    }
    for (int i = 0; i < n; i++)
    {
        if (books[i].writer == "wlxsq")
        {
            cout << books[i].id << ' ' << books[i].name << ' ' << books[i].writer << endl;
        }
    }
    return 0;
}