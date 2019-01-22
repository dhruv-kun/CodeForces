#include <bits/stdc++.h>

using namespace std;

vector <pair <int, int>> route;
tuple <int, int, int> endpoints;

void dfs(int i, int j, int dir, int k, int n, int m) {
    if ((k != -1 && k >= 2)) {
        endpoints = make_tuple(i, j, dir);
        return;
    }
    if (i == n + 1)
        return;

    if (k != -1)
        k += 1;

    route.push_back(make_pair(i, j));
    if ((j == 1 && dir < 0) || (j == m && dir > 0)) {
        dfs(i + 1, j, -dir, k, n, m);
    }
    else
        dfs(i, j + dir, dir, k, n, m);
}

int main() {
    int n, m, k; cin >> n >> m >> k;
    endpoints = make_tuple(1, 1, 1);
    int p, q, d;
    for (int i = 1; i <= k; i++) {
        route.clear();
        tie(p, q, d) = endpoints;
        if (i == k)
            dfs(p, q, d, -1, n, m);
        else
            dfs(p, q, d, 0, n, m);

        cout << route.size() << " ";
        for (auto p: route)
            cout << p.first << " " << p.second << " ";
        cout << endl;
    }
    return 0;
}
