#include <iostream>
#include <algorithm>
using namespace std;

struct Square
{
    int id;
    int side1;
    int side2;
};

bool compare(Square a, Square b)
{
    if (a.id != b.id)
        return a.id < b.id;
    else if (max(a.side1, a.side2) != max(b.side1, b.side2))
        return max(a.side1, a.side2) < max(b.side1, b.side2);
    else
        return min(a.side1, a.side2) < min(b.side1, b.side2);

}

int main() {
    int n;
    cin >> n;
    Square squares[n];
    for (int i = 0; i < n; i++) {
        cin >> squares[i].id >> squares[i].side1 >> squares[i].side2;
    }
    sort(squares, squares+n, compare);


    for (int i = 0; i < n; i++) {
        if (i > 0)
        {
            if (squares[i].id == squares[i-1].id && max(squares[i].side1, squares[i].side2) == max(squares[i-1].side1, squares[i-1].side2) && min(squares[i].side1,squares[i].side2) == min(squares[i-1].side1, squares[i-1].side2))
                continue;
        }
        cout << squares[i].id << " " << max(squares[i].side1, squares[i].side2) << " " << min(squares[i].side1, squares[i].side2) << endl;
    }
    return 0;
}