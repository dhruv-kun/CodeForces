#include <bits/stdc++.h>

using namespace std;

int soln(int n, int m) {
    return (n * m / 2);
}

int main() {
    int n, m; cin >> n >> m;
    int ans = 0;
    if ((n & 1) && (m & 1))
        ans = soln(n, m - 1) + n / 2;
    else {
        if ((m & 1))
            swap(n, m);
        ans = soln(n, m);
    }
    cout << ans << endl;
    return 0;
}
