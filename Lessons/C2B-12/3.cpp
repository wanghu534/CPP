#include <iostream>
using namespace std;

int count = 0;
int cats_line[8];

bool verification(int row, int line) {
    for (int i = 0; i < row; i++) {
        if (cats_line[i] == line) {
            return false;
        }
    }
    for (int i = row - 1, j = line - 1; i >= 0 && j >= 0; i--, j--) {
        if (cats_line[i] == j) {
            return false;
        }
    }
    for (int i = row - 1, j = line + 1; i >= 0 && j < 8; i--, j++) {
        if (cats_line[i] == j) {
            return false;
        }
    }
    return true;
}

void dfs(int row) {
    if (row == 8) {
        count++;
        return;
    }

    for (int line = 0; line < 8; line++) {
        if (verification(row, line)) {
            cats_line[row] = line;
            dfs(row + 1);
        }
    }
}

int main() {
    dfs(0);
    cout << count << endl;
    return 0;
}