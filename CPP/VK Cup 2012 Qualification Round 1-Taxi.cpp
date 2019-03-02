#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        switch (t) {
            case 1: s1++; break;
            case 2: s2++; break;
            case 3: s3++; break;
            case 4: s4++; break;
        }
    }
    int ans = s4 + s2 / 2;
    if (s1 > s3) {
        ans += s3;
        s1 -= s3;
        if (s2 % 2) {
            ans += 1;
            s2 = 0, s1 -= min(s1 % 4, 2);
        }
        ans += s1 / 4;
        if (s1 % 4 != 0 && s1 % 4 < 4)
            ans += 1;
    }
    else if (s1 < s3)
        ans += s1 + s3 - s1;
    else if (s1 == s3)
        ans += s1;
    ans += s2 % 2;
    cout << ans << endl;
    return 0;
}
