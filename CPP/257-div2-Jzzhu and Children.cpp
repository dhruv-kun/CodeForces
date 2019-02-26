#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    queue <pair <int, int>> q;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        q.push(make_pair(t, i));
    }
    int last = -1;
    while (!q.empty()) {
        pair <int, int> t = q.front();
        q.pop();
        last = t.second + 1;
        if (t.first > m)
            q.push(make_pair(t.first - m, t.second));
    }
    cout << last << endl;
    return 0;
}
