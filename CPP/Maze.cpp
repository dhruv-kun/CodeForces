#include <bits/stdc++.h>

using namespace std;

vector <string> maze;
vector <vector <bool>> visited;

void dfs(int i, int j, int n, int m, int &k) {
    if ((maze[i][j] == '.') && !visited[i][j]) {
        visited[i][j] = true;
        for (int z = -1; z <= 1; z++) {
            if (z != 0) {
                if (i + z >= 0 && i + z < n)
                    dfs(i + z, j, n, m, k);
                if (j + z >= 0 && j + z < m)
                    dfs(i, j + z, n, m, k);
            }
        }
        if (k > 0) {
            maze[i][j] = 'X';
            k--;
        }
    }
}

int main() {
    int n, m, k; cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        string t; cin >> t;
        maze.push_back(t);
    }
    visited = vector <vector <bool>>(n, vector <bool>(m, false));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (maze[i][j] == '.' && visited[i][j] == false && k > 0)
                dfs(i, j, n, m, k);
        }
    }
    for (int i = 0; i < n; i++)
        cout << maze[i] << endl;
    return 0;
}
