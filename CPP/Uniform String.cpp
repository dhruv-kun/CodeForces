#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        string rep;
        for (int i = 0; i < k; i++)
            rep.push_back(char('a' + i));
        string ans;
        while (n > 0) {
            ans += string(rep.begin(), rep.begin() + min(k, n));
            n -= k;
        }
        cout << ans << endl;
    }
    return 0;
}
