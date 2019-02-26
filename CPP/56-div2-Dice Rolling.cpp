#include <bits/stdc++.h>

using namespace std;

int countRolls(int max, int n) {
    int count = 0;
    if (n % max == 0)
        return n / max;
    while (n >= 0) {
        if (n < max)
            break;
        else
            n -= max, count += 1;

    }
    return n == 1 ? -1 : count + 1;
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        int max = 7, ans = countRolls(max, t);
        while (max > 1 && ans == -1)
            ans = countRolls(--max, t);
        cout << ans << endl;
    }
    return 0;
}
