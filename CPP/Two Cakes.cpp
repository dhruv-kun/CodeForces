#include <bits/stdc++.h>

using namespace std;



int main() {
    int n; cin >> n;
    vector <vector<int>> pos(n, vector <int>());
    for (int i = 0; i < 2 * n; i++) {
        int t; cin >> t;
        pos[t - 1].push_back(i);
    }
    int p1 = 0, p2 = 0;
    long long d = 0;
    for (int i = 0; i < n; i++) {
        if (abs(p1 - pos[i][0]) + abs(p2 - pos[i][1]) <= abs(p1 - pos[i][1]) + abs(p2 - pos[i][0])) {
            d += abs(p1 - pos[i][0]) + abs(p2 - pos[i][1]);
            p1 = pos[i][0], p2 = pos[i][1];
        }
        else {
            d += abs(p1 - pos[i][1]) + abs(p2 - pos[i][0]);
            p1 = pos[i][1], p2 = pos[i][0];
        }
    }
    cout << d << endl;
    return 0;
}
