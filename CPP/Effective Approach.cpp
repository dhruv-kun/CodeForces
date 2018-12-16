#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    map <int, int> val2idx;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        val2idx[t] = i + 1;
    }
    int m; cin >> m;
    long long int c1 = 0, c2 = 0;
    for (int i = 0; i < m; i++) {
        int t; cin >> t;
        c1 += val2idx[t];
        c2 += n - val2idx[t] + 1;
    }
    cout << c1 << " " << c2 << endl;
    return 0;
}
