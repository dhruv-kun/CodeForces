#include <bits/stdc++.h>

using namespace std;

bool pathExists(vector <pair <int, int>> &intervals, int start, int end) {
    set <int> visited;
    queue <int> q;
    q.push(start);
    while (!q.empty()) {
        int n = q.front(); q.pop();
        if (n == end)
            return true;
        pair <int, int> n_ = intervals[n];
        visited.insert(n);
        for (int i = 0; i < intervals.size(); i++) {
            pair <int, int> v = intervals[i];
            if (visited.find(i) == visited.end() &&
                (v.first < n_.first && n_.first < v.second ||
                    v.first < n_.second && n_.second < v.second))
                q.push(i);
        }
    }
    return false;
}

int main() {
    int n; cin >> n;
    vector <pair <int, int>> intervals;
    for (int i = 0; i < n; i++) {
        int o, ax, by; cin >> o >> ax >> by;
        switch (o) {
            case 1:
                intervals.push_back(make_pair(ax, by));
                break;
            case 2:
                cout << (pathExists(intervals, ax - 1, by - 1) ? "YES" : "NO") << endl;
                break;
        }
    }
    return 0;
}
