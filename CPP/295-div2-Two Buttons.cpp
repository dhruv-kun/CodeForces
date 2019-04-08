#include <bits/stdc++.h>

using namespace std;

const int inf = 1e6 + 7;

int solve(int n, int m) {
    set <int> visited;
    queue <pair <int, int>> q;
    q.push(make_pair(m, 0));
    while (!q.empty()) {
        int k, c;
        tie(k, c) = q.front();
        q.pop();
        visited.insert(k);
        if (k == n)
            return c;
        if (visited.find(k + 1) == visited.end())
            q.push(make_pair(k + 1, c + 1));
        if (k % 2 == 0 && visited.find(k / 2) == visited.end())
            q.push(make_pair(k / 2, c + 1));
    }
    return inf;
}

int main() {
    int n, m; cin >> n >> m;
    int ans = solve(n, m);
    cout << ans << endl;
    return 0;
}
