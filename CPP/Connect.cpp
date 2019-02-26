#include <bits/stdc++.h>

using namespace std;

inline int cost(int a, int b) {
    return a * a + b * b;
}

bool dfs(vector <string> &grid, int r, int c, int x, int y,
    vector <vector <bool>> &visited, vector <pair <int, int>> &connected) {
    if (r == x && c == y)
        return true;
    if (r < 0 || r >= grid.size() || c < 0 || c >= grid.size())
        return false;
    if (grid[r][c] == '1' || visited[r][c])
        return false;
    visited[r][c] = true;
    connected.push_back(make_pair(r, c));
    bool res = false;
    for (int i = -1; i <= 1; i++) {
        if (i == 0)
            continue;
        res |= dfs(grid, r + i, c, x, y, visited, connected);
        if (res)
            return res;
        res |= dfs(grid, r, c + i, x, y, visited, connected);
    }
    return res;
}


int main() {
    int n; cin >> n;
    int a, b; cin >> a >> b;
    int x, y; cin >> x >> y;
    a--, b--, x--, y--;
    vector <string> grid(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];
    vector <vector <bool>> visited(n, vector <bool>(n, false));
    vector <pair <int, int>> connected1, connected2;
    bool res = dfs(grid, a, b, x, y, visited, connected1);
    if (res)
        cout << 0 << endl;
    else {
        dfs(grid, x, y, a, b, visited, connected2);
        int dist = 1e9 + 7;
        for (auto p1: connected1) {
            for (auto p2: connected2) {
                dist = min(dist, cost(p1.first - p2.first, p1.second - p2.second));
            }
        }
        cout << dist << endl;
    }
    return 0;
}
