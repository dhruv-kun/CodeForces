#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p; cin >> n >> p;
    string s; cin >> s;

    if (p > n / 2)
        p = n - p + 1;
    int l = p - 1, r = p - 1;
    int totalCost = 0, c = 0;
    if (n == 1) cout << 0 << endl;
    else {
        for (int i = 0; i < n / 2; i++) {
            c = abs(s[i] - s[n - i - 1]);
            totalCost += min(c, 26 - c);
        }
        for (int i = 0; i < p; i++) {
            if (s[i] != s[n - i - 1]) {
                l = i;
                break;
            }
        }
        for (int i = n / 2 - 1; i >= p; i--) {
            if (s[i] != s[n - i - 1]) {
                r = i;
                break;
            }
        }
        c = min(p - l - 1, r - p + 1);
        totalCost += 2 * c + max(p - l - 1, r - p + 1);
        cout << totalCost << endl;
    }
    return 0;
}
