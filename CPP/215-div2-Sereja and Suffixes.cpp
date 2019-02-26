#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, lim = 1e5 + 1;
    cin >> n >> m;
    vector <int> arr(n), distinctCount(n + 1, 0);
    vector <bool> set(lim, false);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = n - 1; i >= 0; i--) {
        distinctCount[i] = distinctCount[i + 1];
        if (!set[arr[i]])
            distinctCount[i]++;
        set[arr[i]] = true;
    }
    for (int i = 0; i < m; i++) {
        int t; cin >> t;
        cout << distinctCount[t - 1] << endl;
    }
    return 0;
}
