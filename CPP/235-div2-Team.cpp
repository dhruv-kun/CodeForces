#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    string ans;
    if (n - m > 1 || m - n > n + 2)
        ans = "-1";
    else if (n > m) {
        ans.push_back('0');
        for (int i = 0; i < m; i++) {
            ans.push_back('1');
            ans.push_back('0');
        }
    }
    else if (m >= n) {
        string tmp;
        while (n-- && m--) {
            tmp.push_back('1');
            tmp.push_back('0');
        }
        for (int i = 0; i < tmp.size(); i += 2) {
            ans.push_back(tmp[i]);
            if (m > 0)
                ans.push_back('1'), m--;
            ans.push_back(tmp[i + 1]);
        }
        if (m > 2) ans = "-1";
        else ans += string(m, '1');
    }
    cout << ans << endl;
    return 0;
}
