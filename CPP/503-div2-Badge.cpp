#include <bits/stdc++.h>

using namespace std;

int find_cycle_end(vector <int> &g, int s) {
    vector <bool> visited(g.size(), false);
    while (visited[s] == false) {
        visited[s] = true;
        s = g[s];
    }
    return s;
}

int main() {
    int n; cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i]--;
    }
    vector <int> ans(n);
    for (int i = 0; i < n; i++)
        ans[i] = find_cycle_end(arr, i);
    for (int i: ans)
        cout << (i + 1) << " ";
    cout << endl;
    return 0;
}
