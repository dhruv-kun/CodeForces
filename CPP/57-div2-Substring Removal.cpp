#include <bits/stdc++.h>

using namespace std;

int main() {
    const int MOD = 998244353;
    int n; cin >> n;
    string s; cin >> s;
    vector <string> segs(2);
    int i = 0, res = 0;
    for (; i < n && s[i] == s.front(); i++);
    segs[0] = s.substr(0, i);
    for (i = n - 1; i >= 0 && s[i] == s.back(); i--);
    segs[1] = s.substr(i + 1, n - i - 1);
    if (s.front() == s.back() && (segs[0].size() + segs[1].size() != (2 * n)))
        res = ((segs[0].size() + 1ll) * (segs[1].size() + 1ll)) % MOD;
    else if (s.front() != s.back())
        res = (segs[0].size() + segs[1].size() + 1) % MOD;
    cout << res << endl;
    return 0;
}
