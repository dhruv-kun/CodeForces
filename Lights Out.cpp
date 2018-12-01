#include <iostream>
#include <vector>

using namespace std;

void flip(vector<vector <bool>> &grid, int r, int c, int val) {
    if (val & 1) {
        grid[r][c] = !grid[r][c];
        if (r > 0)
            grid[r - 1][c] = !grid[r - 1][c];
        if (r < 2)
            grid[r + 1][c] = !grid[r + 1][c];
        if (c > 0)
            grid[r][c - 1] = !grid[r][c - 1];
        if (c < 2)
            grid[r][c + 1] = !grid[r][c + 1];
    }
}

int main() {
    vector<vector <bool>> grid(3, vector <bool>(3, true));

    int val;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> val;
            flip(grid, i, j, val);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
